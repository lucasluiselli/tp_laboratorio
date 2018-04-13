#include "lib.h"
#include <stdio.h>
#include <stdlib.h>




int Sumar(int num1, int num2, int *suma)
{


//int num1;
//int num2;
int resultado;
int retorno;

resultado=num1 + num2;

    if (resultado < -32768 || resultado > 32767)
    {
        retorno = -1;
        printf("El resultado es superior a los valores permitidos");

    }
    else
    {
        retorno = 0;
        *suma = resultado;

    }


return retorno;


}



int Restar(int numUno, int numDos, int *resta)
{
//int numeroUno;
//int numeroDos;
int resultado;
int retorno;

resultado= numUno - numDos;

    if (resultado < -32768 || resultado > 32767)
    {
        retorno = -1;
        printf("El resultado es superior a los valores permitidos");

    }
    else
    {
        retorno = 0;
        *resta=resultado;

    }


return retorno;


}









int Multiplicar(int num1, int num2, int *mult)
{
int numeroUno;
int numeroDos;
int resultado;
int retorno;

resultado=numeroUno * numeroDos;

    if (resultado < -32768 || resultado > 32767)
    {
        retorno = -1;
        printf("El resultado es superior a los valores permitidos");

    }
    else
    {
        retorno = 0;
        *mult = resultado;

    }


return retorno;


}




int Dividir(int num1, int num2, int *division)
{
int numeroUno;
int numeroDos;
float resultado;
int retorno;

resultado=numeroUno / numeroDos;

    if (numeroDos <= 0 )
    {
        retorno = -1;
        printf("El divisor no es un valor permitido");

    }
    else
    {
        retorno = 0;
        *division = resultado;

    }


return retorno;





}





int Factorial(int num1,int *factorial)
{
int numeroUno;
int resultado;
int retorno;
int i;

    for(i=1;i<numeroUno;i++)
    {
         *factorial= *factorial * i;


        if (numeroUno == 0 )
        {
            retorno = -1;
            printf("El factorial de cero es cero");

        }
        else
        {
            retorno = 0;
            *factorial = resultado;

        }

    }
return retorno;

}
