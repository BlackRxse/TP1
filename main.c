#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "funciones.h"
#include <windows.h>

#define RED "\x1b[31m"
#define YELLOW "\x1b[33m"
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"

int main()
{

    char seguir = 's';
    int opcion = 0;
    char auxA[100];
    char auxB[100];
    char auxFactorial[100];
    int a = 0;
    int b = 0;
    int validacionNumero = 0;
    int factorial = 0;
    int resultadoSuma = 0;
    int resultadoResta = 0;
    int resultadoMulti = 0;
    int resultadoDiv = 0;
    int resultadoFactorial = 0;

    while (seguir == 's')
    {

        printf(CYAN "---------------------------- \n" RESET);
        printf(CYAN "|---> MENU CALCULADORA <---| \n" RESET);
        printf(CYAN "---------------------------- \n \n" RESET);

        Sleep(200);
        printf("1. Ingrese primer valor ");
        Sleep(200);
        printf(RED "(%d)\n" RESET, a);
        Sleep(200);
        printf("2. Ingrese el segundo valor ");
        Sleep(200);
        printf(RED "(%d)\n" RESET, b);
        Sleep(200);
        printf("3. Sumar dos numeros ");
        Sleep(200);
        printf(RED "(%d)\n" RESET, resultadoSuma);
        Sleep(200);
        printf("4. Restar dos numeros ");
        Sleep(200);
        printf(RED "(%d)\n" RESET, resultadoResta);
        Sleep(200);
        printf("5. Multiplicar dos numeros ");
        Sleep(200);
        printf(RED "(%d)\n" RESET, resultadoMulti);
        Sleep(200);
        printf("6. Dividir dos numeros ");
        Sleep(200);
        printf(RED "(%d)\n" RESET, resultadoDiv);
        Sleep(200);
        printf("7. Calcular el factorial ");
        Sleep(200);
        printf(RED "(%d)\n" RESET, resultadoFactorial);
        Sleep(200);
        printf("8. Calcular todas las operaciones\n");
        Sleep(200);
        printf("9. Salir\n \n");

        printf(GREEN "Elija que hacer:" RESET);

        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        {

            printf("Ingrese el valor de A: ");
            scanf("%s", auxA);

            if (validarNumero(auxA) == 0)
            {
                printf(RED "El dato ingresado no es un numero, por favor ingrese un numero \n" RESET);
                printf("\n");
            }
            if (validarNumero(auxA) == 1)
            {
                a = atoi(auxA);
            }
        }
        break;

        case 2:
        {
            printf("Ingrese el valor de B: ");
            scanf("%s", auxB);

            if (validarNumero(auxB) == 0)
            {
                printf(RED "El dato ingresado no es un numero, por favor ingrese un numero \n" RESET);
                printf("\n");
            }
            if (validarNumero(auxB) == 1)
            {
                b = atoi(auxB);
            }
        }
        break;

        case 3:
        {
            resultadoSuma = sumar(a, b);
            Sleep(200);
            printf("La suma da como resultado: %d\n", resultadoSuma);
            Sleep(1000);
            printf("\n");
        }
        break;

        case 4:
        {
            resultadoResta = restar(a, b);
            Sleep(200);
            printf("La resta da como resultado: %d\n", resultadoResta);
            Sleep(1000);
            printf("\n");
        }
        break;

        case 5:
        {
            resultadoMulti = multiplicar(a, b);
            Sleep(200);
            printf("La multiplicacion da como resultado: %d\n", resultadoMulti);
            Sleep(200);
            printf("\n");
        }
        break;

        case 6:
        {
            float div = dividir(a, b);
            if (div == -1)
            {
                Sleep(200);
                printf(RED "La division no se puede realizar\n" RESET);
                Sleep(1000);
                printf("\n");
                resultadoDiv = 0;
            }
            else
            {
                resultadoDiv = div;
                Sleep(200);
                printf("La divison da como resultado: %d\n", resultadoDiv);
                Sleep(1000);
                printf("\n");
            }
        }
        break;

        case 7:
        {
            printf("Ingrese un valor para el factorial: ");
            scanf("%s", &auxFactorial);
            if (validarNumero(auxFactorial) == 0)
            {
                printf(RED "El dato ingresado para factorial no es un numero, por favor ingrese un numero \n" RESET);
                printf("\n");
            }
            if (validarNumero(auxFactorial) == 1)
            {
                factorial = atoi(auxFactorial);
                printf("El factorial da como resultado: %d\n", calcularFactorial(factorial));
                resultadoFactorial = calcularFactorial(factorial);
                printf("\n");
                Sleep(200);
            }
        }
        break;

        case 8:
        {
            resultadoSuma = sumar(a, b);
            Sleep(200);
            printf("La suma da como resultado: %d\n", resultadoSuma);

            resultadoResta = restar(a, b);
            Sleep(200);
            printf("La resta da como resultado: %d\n", resultadoResta);

            resultadoMulti = multiplicar(a, b);
            Sleep(200);
            printf("La multiplicacion da como resultado: %d\n", resultadoMulti);

            float div = dividir(a, b);
            if (div == -1)
            {
                Sleep(200);
                printf(RED "La division no se puede realizar\n" RESET);
                resultadoDiv = 0;
            }
            else
            {
                resultadoDiv = div;
                Sleep(200);
                printf("La divison da como resultado: %d\n", resultadoDiv);
            }

            printf("Ingrese un valor para el factorial: ");
            scanf("%s", &auxFactorial);
            if (validarNumero(auxFactorial) == 0)
            {
                printf(RED "El dato ingresado para factorial no es un numero, por favor ingrese un numero \n" RESET);
                printf("\n");
            }
            if (validarNumero(auxFactorial) == 1)
            {
                factorial = atoi(auxFactorial);
                printf("El factorial da como resultado: %d\n", calcularFactorial(factorial));
                resultadoFactorial = calcularFactorial(factorial);
                printf("\n");
                Sleep(200);
            }
        }
        break;

        case 9:
        {
            seguir = 'n';
        }
        break;

        default:
        {
            printf(RED "Por favor, ingrese una opcion valida\n" RESET);
            printf("\n");
        }
        break;
        }
    }
    return 0;
}