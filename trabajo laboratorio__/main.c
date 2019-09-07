#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
int main()
{
    float num1=0;
    float num2=0;
    int opcion;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    float factorial1;
    float factorial2;

    do
    {
        system("cls");
        printf("Calculadora\n");
        printf("\n1. Ingresar 1er operando (A=%f).",num1);
        printf("\n2. Ingresar 2do operando (B=%f).",num2);
        printf("\n3. Calcular todas las operaciones");
        printf("\n4.Informar resultados");
        printf("\n5. Salir");
        printf("\nElija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("\n1. Ingresar 1er operando: ");
            scanf("%f",&num1);
            break;
        case 2:
            printf("\n2. Ingresar 2do operando: ");
            scanf("%f",&num2);
            break;
        case 3:
            suma=laSuma(num1,num2);
            resta=laResta(num1,num2);
            division=laDivision(num1,num2);
            multiplicacion=laMultiplicacion(num1,num2);
            elFactorial(num1,num2,&factorial1,&factorial2);
            system("pause");
            break;
        case 4:
            printf("\n.La suma: %f\n",suma);
            printf("\n.La resta: %f\n",resta);
            printf("\n.La division: %f\n",division);
            printf("\n.La multiplicacion: %f\n",multiplicacion);
            printf("\n.Factorial(A!): %f \n Factorial(B!): %f\n",factorial1,factorial2);
            system("pause");
            break;
        case 5:
            break;
        default:
            printf("\nOperacion incorrecta, vuelva a intentar\n");
            system("pause");
        }
    }
    while(opcion != 5);
    return 0;
}
