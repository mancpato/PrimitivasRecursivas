/**
    Ejemplos de funciones primitivas recursivas

    Material de estudio para la asignatura Computabilidad y Factibilidad

    Miguel Angel Norzagaray Cosío
    DSC/UABCS
*/

/** El cero, la fución más básica */
int Z()
{
	return 0;
}

/** Función sucesor, el siguiente de un número en orden natural */
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

/** Función proyección
    Extrae el elemento i de una colección de números */
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

