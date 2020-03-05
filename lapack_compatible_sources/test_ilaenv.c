typedef long INT;
int main(int argc, char const *argv[])
{

	INT INB=1;
	INT i_minus_one=-1;
	INT m_A = 90;
	INT n_A = 45;
	INT nb;
	char* name = "DGEQRF";
	char* option = " ";
	nb     = ilaenv_( & INB, name, option, & m_A, & n_A, & i_minus_one, 
                        & i_minus_one );

	return 0;
}