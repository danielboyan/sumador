#include <stdio.h>
#define p printf
#define s scanf


int main (void)
{
    int num1,num2,num3,suma;

    p("Ingrese Numero 1:");
    s("%d",&num1);


    p("Ingrese Numero 2:");
    s("%d",&num2);

    p("Ingrese Numero 3:");
    s("%d",&num3);


    suma = num1 + num2 + num3;

    p("La suma de %d + %d + %d = %d",num1,num2,num3,suma);
    return 0;
}
