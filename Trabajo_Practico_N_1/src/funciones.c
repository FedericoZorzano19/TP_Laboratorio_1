/*
 * funciones.c
 *
 *  Created on: 13 abr. 2021
 *      Author: Federico Zorzano
 */
#include "funciones.h"


int sumarOperandos (int numeroA, int numeroB)
{
    int suma;

    suma = numeroA + numeroB;

    return suma;
}

int restarOperandos (int numeroA, int numeroB)
{
    int resta;

    resta = numeroA - numeroB;

    return resta;

}

int multiplicarOperandos (int numeroA, int numeroB)
{
    int multiplicacion;

    multiplicacion = numeroA * numeroB;

    return multiplicacion;
}

float divisionOperandos(float a,int b)
{
    float division;


     division=a/b;
        return division;



}

long int factorizarOperandos(int numeroFactorial)
{
    int factorial;

    if(numeroFactorial==0)
    {
        return 1;
    }
    else
    {
        factorial=numeroFactorial*factorizarOperandos(numeroFactorial-1);
    }


    return factorial;

}




