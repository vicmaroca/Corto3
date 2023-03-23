#include <stdio.h>
#include "add.h"

int main()
{
    int a,b;
    printf("Ingrese un número: ");
    scanf("%d", &a);
    printf("Ingrese otro número: ");
    scanf("%d", &b);
 
    printf("La suma de %d y %d es %d\n", a, b, add(a, b));
    printf("La resta de %d y %d es %d\n", a, b, restar(a, b));
    printf("La multiplicación de %d y %d es %d\n", a, b, multiplicar(a, b));
    printf("La división de %d y %d es %.2f\n", a, b, dividir(a, b));
    printf("El valor de PI con 5 decimales es: %.5f ", PI);
    return 0;
}

