#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "NoFLA_HQRRP_WY_blk_var4.h"

void dgeqp4_INT( INT * m, INT * n, double * A, INT * lda, INT * jpvt, double * tau,
        double * work, INT * lwork, INT * info ) {
// 
// This routine wraps around dgeqp4 to accept any integer type

	int original = 0;

	int m_A = m[0];
	int n_A = n[0];


	if (original == 1){
	// Run the original routine
		dgeqp4( m, n, A, lda, jpvt, tau, 
          work, lwork, info );
	}

	if (original == 0){

		// Copy integer scalars m,n,lda, lwork
			int m_int = (int) * m;
			int n_int = (int) * n;
			int lda_int = (int) *lda;
			int lwork_int = (int) *lwork;
			int info_int = (int) *info; 


		// Copy integer array jvpt
			int* jpvt_int = (int*) malloc(n_A * sizeof(int));
			for (int i=0; i < n_A; ++i){
				jpvt_int[i] = jpvt[i];
			}

		// Run the (INTEGER) routine
			dgeqp4( & m_int, & n_int, A, & lda_int, jpvt_int, tau, 
	          work, & lwork_int, & info_int );


		// Return jpvt and info in the correct form
			for (int i=0; i < n_A; ++i){
				jpvt[i] = jpvt_int[i];
			}
			info[0] = info_int;
	}

}