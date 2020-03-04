#include "config_dgeqp4.h"
void dgeqp4( int * m, int * n, double * A, int * lda, int * jpvt, double * tau,
         double * work, int * lwork, int * info );

int NoFLA_HQRRP_WY_blk_var4( int m_A, int n_A, double * buff_A, int ldim_A,
        int * buff_jpvt, double * buff_tau,
        int nb_alg, int pp, int panel_pivoting );

void dgeqp4_wrapper( INT * m, INT * n, double * A, INT * lda, INT * jpvt, double * tau,
         double * work, INT * lwork, INT * info );

void dgeqp4_INT( INT * m, INT * n, double * A, INT * lda, INT * jpvt, double * tau,
         double * work, INT * lwork, INT * info );

INT NoFLA_HQRRP_WY_blk_var4_INT( INT m_A, INT n_A, double * buff_A, INT ldim_A,
        INT * buff_jpvt, double * buff_tau,
        INT nb_alg, INT pp, INT panel_pivoting );