
#include <stdio.h>

int main()
{
    float a, resul;
    printf("Ingrese una temperatura en grados Fahrenheit: ");
    scanf("%f", &a);
    resul = (a - 32) * 5/9;
    printf("%.3f °F equivale a  %.3f °C\n", a, resul);
    return 0;
}



