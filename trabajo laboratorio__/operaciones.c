#include <stdio.h>
#include "operaciones.h"

float laSuma(float num1, float num2)
{
    float resultado;

    resultado =(float) num1 + num2;

    return resultado;
}

float laResta(float num1, float num2)
{
    float resultado;

    resultado =(float) num1 - num2;

    return resultado;
}

float laDivision(float num1, float num2)
{
    float resultado;

    if(num2 == 0)
    {
        printf("No es posible dividir por cero");
    }else
    {
      resultado = (float)  num1 / num2;
    }

    return resultado;
}

float laMultiplicacion(float num1, float num2)
{
    float resultado;

    resultado =(float) num1 * num2;

    return resultado;
}

float elFactorial(float num1,float num2,float *pFactorialA,float *pFactorialB)
{

    float primerFactorial=1;
    float segundoFactorial=1;
    int i;
    int j;

    for (i=num1;i>0;i--)
    {
        primerFactorial = primerFactorial * i;
    }

    for ( j=num2;j>0;j--)
    {
        segundoFactorial = segundoFactorial * j;
    }

    *pFactorialA=primerFactorial;
    *pFactorialB=segundoFactorial;

    return 0;
}
