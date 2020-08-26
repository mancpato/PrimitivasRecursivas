/**
    Ejemplos de funciones primitivas recursivas

    Material de estudio para la asignatura Computabilidad y Factibilidad

    Miguel Angel Norzagaray Cos�o
    DSC/UABCS
*/

/** El cero, la fuci�n m�s b�sica */
int Z()
{
	return 0;
}

/** Funci�n sucesor, el siguiente de un n�mero en orden natural */
int Suc(int n)
{
	return n+1;
}

/**
    Suma(m,n) = n si m==0
    Suma(m,n) = Suc(Suma(m-1,n))
*/
int Suma(int m, int n)
{
	if ( n==Z() )
		return m;
	return Suc(Suma(m,n-1));
}

int Prod(int m, int n)
{
	if ( n==Z() )
		return Z();
	return Suma(m,Prod(m,n-1));
}

/** Funci�n proyecci�n
    Extrae el elemento i de una colecci�n de n�meros */
int P_i(int A[], int i)
{
	return A[i];
}

int Uno()
{
	return Suc(Z());
}

int Dos()
{
	return Suc(Suc(Z()));
}

int Signo(int n)
{
	if ( n==Z() )
		return Z();
	return 1;
}

int Pred(int n)
{
	if ( n==Z() )
		return Z();
	return n-1;
}

int Resta(int m, int n)
{
	if ( n==0 )
		return m;
	return Pred(Resta(m,n-1));
}

int MenorQue(int m, int n)
{
	return Signo(Resta(n,m));
}

int IgualQue(int m, int n)
{
	return Resta( 1, Suma( Signo(Resta(m,n)), Signo(Resta(n,m)) ) );
}

/* Fin de archivo */

