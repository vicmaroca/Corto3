#include <stdio.h>

int main()
{
    int n, i, a, b, c;
    printf("Ingrese un número en términos de N: ");
    scanf("%d", &n);
    
    a = 0;
    b = 1;
    c = 1;
    
    printf("%d ", b);
    for(i=1; i<n; i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }

    return 0;
}




