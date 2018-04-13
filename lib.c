#include "lib.h"
#include <stdio.h>
#include <stdlib.h>


/** \brief: Funcion que recibe dos parametro, realiza la suma y devuelve el resultado.
 *
 * \param num1 int --> parametro ingresado a la funcion.
 * \param num2 int --> parametro ingresado a la funcion.
 * \param Suma int* --> variable parametro de tipo puntero.
 * \return retorno int --> variable usada para validar la operacion.
 *
 */

int Sumar(int num1, int num2, int *suma)
{

int resultado;
int retorno;

resultado=num1 + num2;

    if (resultado < -32768 || resultado > 32767)
    {
        retorno = -1;
        printf("\nEl resultado es superior a los valores permitidos");


    }
    else
    {
        retorno = 0;
        *suma = resultado;

    }


return retorno;


}


/** \brief: Funcion que recibe dos parametro, realiza la resta y devuelve el resultado.
 *
 * \param num1 int --> parametro ingresado a la funcion.
 * \param num2 int --> parametro ingresado a la funcion.
 * \param resta int* --> variable parametro de tipo puntero.
 * \return retorno int --> variable usada para validar la operacion.
 *
 */

int Restar(int num1, int num2, int *resta)
{

int resultado;
int retorno;

resultado= num1 - num2;

    if (resultado < -32768 || resultado > 32767)
    {
        retorno = -1;
        printf("\nEl resultado es superior a los valores permitidos");

    }
    else
    {
        retorno = 0;
        *resta=resultado;

    }


return retorno;


}



/** \brief: Funcion que recibe dos parametro, realiza la multiplicacion y devuelve el resultado.
 *
 * \param num1 int --> parametro ingresado a la funcion.
 * \param num2 int --> parametro ingresado a la funcion.
 * \param mult int* --> variable parametro de tipo puntero.
 * \return retorno int --> variable usada para validar la operacion.
 *
 */


int Multiplicar(int num1, int num2, int *mult)
{

int resultado;
int retorno;

resultado=num1 * num2;

    if (resultado < -32768 || resultado > 32767)
    {
        retorno = -1;
        printf("\nEl resultado es superior a los valores permitidos");

    }
    else
    {
        retorno = 0;
        *mult = resultado;

    }


return retorno;


}

/** \brief: Funcion que recibe dos parametro, realiza la division y devuelve el resultado.
 *
 * \param num1 int --> parametro ingresado a la funcion.
 * \param num2 int --> parametro ingresado a la funcion.
 * \param division int* --> variable parametro de tipo puntero.
 * \return retorno int --> variable usada para validar la operacion.
 *
 */


int Dividir(float num1, int num2, float *division)
{

float resultado;
int retorno;



    if (num2 == 0 )
    {
        retorno = -1;
        printf("\nEl divisor no es un valor permitido");

    }
    else
    {
        resultado=num1 / num2;
        retorno = 0;
        *division = resultado;

    }


return retorno;





}



/** \brief Funcion que recibe un parametro, realiza el factorial y devuelve el resultado.
 *
 * \param num1 int --> parametro ingresado a la funcion.
 * \param factorial int*--->variable parametro de tipo puntero.
 * \return retorno int ---> variable usada para validar la operacion.
 *
 */


int Factorial(int num1,long *factorial)
{


int retorno;
int i;



        if (num1 == 0 )
        {
            retorno = -1;
            printf("\n Operacion incorrecta");

        }
        else
        {
            for(i=num1;i>1;i--)
            {
                num1=num1 * (i-1);
                *factorial =  num1;
            }
            retorno = 0;
        }

return retorno;

}
