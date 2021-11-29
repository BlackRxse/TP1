int sumar(int a, int b)
{
    return a + b;
}

int restar( int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

int dividir(int a, int b)
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

int validarNumero(char string[])
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] != '\0')
        {
            if (string[i] < '0' || string[i] > '9')
            {
                return 0;
            }
            return 1;
        }
    }
}
