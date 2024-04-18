#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int num1,res;

    p("Ingrese un valor: ");
    s("%d",&num1);

    res = num1%2;

    if(!res)
    {
        p("Es par");
    }else{
        p("Es impar");
    }
}