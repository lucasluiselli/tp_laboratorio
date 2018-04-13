#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numeroUno;
    int numeroDos;
    int laSuma;
    int laResta;
    int laMultiplicacion;
    float laDivision;
    long elFactorial;


    printf("1- Ingresar 1er operando (A=x)\n");
    printf("2- Ingresar 2do operando (B=y)\n");
    printf("3- Calcular la suma (A+B)\n");
    printf("4- Calcular la resta (A-B)\n");
    printf("5- Calcular la division (A/B)\n");
    printf("6- Calcular la multiplicacion (A*B)\n");
    printf("7- Calcular el factorial (A!)\n");
    printf("8- Calcular todas las operacione\n");
    printf("9- Salir\n");
    printf("\n--------------------------------------\n");


    while(opcion != 9)

    {
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            printf("ingrese el primer numero: ");
            scanf("%d A: ",&numeroUno);
            break;
        case 2:
            printf("ingrese el segundo numero: ");
            scanf("%d B: ",&numeroDos);
            break;
        case 3:
            if (Sumar(numeroUno,numeroDos,&laSuma)==0)
                printf("\nLa suma es: %d ",laSuma);
            system("pause");
            break;

        case 4:
            if (Restar(numeroUno,numeroDos,&laResta)==0)
                printf("\nLa Resta es: %d ",laResta);
            system("pause");
            break;

        case 5:
            if (Dividir(numeroUno,numeroDos,&laDivision)==0)
                printf("\nLa Division es: %f ",laDivision);
            system("pause");
            break;

        case 6:
            if (Multiplicar(numeroUno,numeroDos,&laMultiplicacion)==0)
                printf("\nLa Multiplicacion es: %d ",laMultiplicacion);
            system("pause");
            break;

        case 7:
            if (Factorial(numeroUno,&elFactorial)==0)
                printf("\n\nEl factorial es: %ld ",elFactorial);
            system("pause");
            break;

        case 8:

            if (Sumar(numeroUno,numeroDos,&laSuma)==0)
                printf("\n * La suma es: %d ",laSuma);
            if
            (Restar(numeroUno,numeroDos,&laResta)==0)
                printf("\n * La Resta es: %d ",laResta);

            if (Dividir(numeroUno,numeroDos,&laDivision)==0)
                printf("\n * La Division es: %f ",laDivision);

            if (Multiplicar(numeroUno,numeroDos,&laMultiplicacion)==0)
                printf("\n * La Multiplicacion es: %d ",laMultiplicacion);

            if (Factorial(numeroUno,&elFactorial)==0)
                printf("\n *El factorial del primer numero es: %ld ",elFactorial);

                break;
                system("pause");


        case 9:
                seguir = 'n';
                break;

        default:
                scanf("\nLa opcion no es correcta");

        }

    }


    return 0;
}

