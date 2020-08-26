/**
    Ejemplos de funciones primitivas recursivas

    Material de estudio para la asignatura Computabilidad y Factibilidad

    Miguel Angel Norzagaray Cosío
    DSC/UABCS
*/

#include <stdio.h>
#include "PrimitivasRecursivas.h"

int main()
{
    int m,n;

    m = 5;
    n = 3;
    printf("Suma(%d,%d) = %d\n", m, n, Suma(m,n));
    printf("Resta(%d,%d) = %d\n", m, n, Resta(m,n));
    printf("Prod(%d,%d) = %d\n", m, n, Prod(m,n));
    printf("Prod(%d,%d) = %d\n", n, m, Prod(n,m));

    return 0;
}

/* Fin de archivo */
