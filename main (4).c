#include <stdio.h>

int main()
{
    int array[5];
    for(int i = 0; i<5; i++)
    {
    int num;
     printf("\nIngrese un número entero: ");
     scanf("%d", &num);
     int array[5] = {num, num, num, num, num};
     int *pNum =  array;
     *pNum = *pNum * 2;
     printf("El doble del número entero es: %d \n", *pNum);
    }
    return 0;
}

