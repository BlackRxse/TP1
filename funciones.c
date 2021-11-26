#include <stdio.h>
#include <stdlib.h>

float sumar(float a, float b)
{
    return a + b;
}

float restar(float a, float b)
{
    return a - b;
}

float multiplicar(float a, float b)
{
    return a * b;
}

float dividir(float a, float b)
{ 
    if (a > 0 && b == 0)
    {
        return -1;
    }
    return a / b;
}

int calcularFactorial(int a)
{
    int factorial;
    if (a == 1 || a == 0)
    {
        return 1;
    }
    factorial = a * calcularFactorial(a - 1);
    return factorial;
}