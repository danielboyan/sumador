#include <stdio.h>
#define p printf
#define s scanf


int main (void)
{
    int num1,num2,suma;

    p("Ingrese Numero 1:");
    s("%d",&num1);


    p("Ingrese Numero 2:");
    s("%d",&num2);

    suma = num1 + num2;

    p("La suma de %d + %d = %d",num1,num2,suma);
    return 0;
}
