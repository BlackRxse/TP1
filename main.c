#include <stdio.h>
#include <stdlib.h>
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
    float a = 0;
    float b = 0;
    int factorial = 0;
    float resultadoSuma = 0;
    float resultadoResta = 0;
    float resultadoMulti = 0;
    float resultadoDiv = 0;
    int resultadoFactorial = 0;

    while (seguir == 's')
    {
        printf(CYAN "---------------------------- \n" RESET);
        printf(CYAN "|---> MENU CALCULADORA <---| \n" RESET);
        printf(CYAN "---------------------------- \n \n" RESET);

        Sleep(200);
        printf("1. Ingrese primer valor ");
        Sleep(200);
        printf(RED "(%.2f)\n" RESET, a);
        Sleep(200);
        printf("2. Ingrese el segundo valor ");
        Sleep(200);
        printf(RED "(%.2f)\n" RESET, b);
        Sleep(200);
        printf("3. Sumar dos numeros ");
        Sleep(200);
        printf(RED "(%.2f)\n" RESET, resultadoSuma);
        Sleep(200);
        printf("4. Restar dos numeros ");
        Sleep(200);
        printf(RED "(%.2f)\n" RESET, resultadoResta);
        Sleep(200);
        printf("5. Multiplicar dos numeros ");
        Sleep(200);
        printf(RED "(%.2f)\n" RESET, resultadoMulti);
        Sleep(200);
        printf("6. Dividir dos numeros ");
        Sleep(200);
        printf(RED "(%.2f)\n" RESET, resultadoDiv);
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

        {
            switch (opcion)
            {
            case 1:
            {
                printf("Ingrese el valor de A: ");
                scanf("%f", &a);
            }
            break;
            
            case 2:
            {
                printf("Ingrese el valor de B: ");
                scanf("%f", &b);
            }
            break;
            
            case 3:
            {
                resultadoSuma = sumar(a, b);
                printf("La suma da como resultado: %.2f\n", resultadoSuma);
            }
            break;
            
            case 4:
            {
                resultadoResta = restar(a, b);
                printf("La resta da como resultado: %.2f\n", resultadoResta);
            }
            break;
            
            case 5:
            {
                resultadoMulti = multiplicar(a, b);
                printf("La multiplicacion da como resultado: %.2f\n", resultadoMulti);
            }
            break;
            
            case 6:
            {
                float div = dividir(a, b);
                if (div == -1)
                {
                    printf("La division no se puede realizar\n");
                    resultadoDiv = 0;
                }
                else
                {
                    resultadoDiv = div;
                }
                printf("La division da como resultado: %.2f\n", div);
            }
            break;
            
            case 7:
            {

                printf("Ingrese un valor para el factorial: ");
                scanf("%d", &factorial);
                resultadoFactorial = calcularFactorial(factorial);
                printf("El factorial es: %d\n", factorial);
            }
            break;
            
            case 8:
            {
                resultadoSuma = sumar(a, b);
                printf("La suma da como resultado: %.2f\n", resultadoSuma);

                resultadoResta = restar(a, b);
                printf("La resta da como resultado: %.2f\n", resultadoResta);

                resultadoMulti = multiplicar(a, b);
                printf("La multiplicacion da como resultado: %.2f\n", resultadoMulti);

                float div = dividir(a, b);
                if (div == -1)
                {
                    printf("La division no se puede realizar\n");
                    resultadoDiv = 0;
                }
                else
                {
                    resultadoDiv = div;
                    printf("El resultado de la division es: %.2f\n", resultadoDiv);
                }

                printf("Ingrese un valor para el factorial: ");
                scanf("%d", &factorial);
                resultadoFactorial = calcularFactorial(factorial);
                printf("El factorial es: %d\n", resultadoFactorial);
            }
            break;
            
            case 9:
                seguir = 'n';
                break;
            default:
                printf("Ingrese un numero valido\n");
            }
        }

        if ( a == 0 || b == 0)
        {
            printf("El dato ingresado no es un numero, por favor ingrese un numero");
        }
    }
    return 0;
}