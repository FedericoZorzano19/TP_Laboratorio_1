
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"



float funcion_Suma(float a, float b)

{
    float resSuma;
    resSuma = a + b;
    return resSuma;
};



float funcion_Resta(float a,float b)
{
    float resResta;
    resResta= a - b;
    return resResta;
};


float funcion_Multiplicacion(float a,float b)
{

    float resMultiplicacion;
    resMultiplicacion= a * b;
    return resMultiplicacion;
};


float funcion_Division(float a,float b)
{
    float resDivision;

    if(b ==0)
    {

        return -1;

    }
    else
    {
        resDivision=a/b;
        return resDivision;
    }
};


int funcion_Factorial(int a)
{
    int valor;
    if(a==0)
    {
        return 1;
    }
    valor=a*funcion_Factorial(a-1);
        return valor;
};



 float funcion_getFloat(char* mensaje)
 {
     float auxiliar;
     printf("%s",mensaje);
     scanf("%f",&auxiliar);
     return auxiliar;
 }


 int funcion_getInt(char* mensaje)
 {
     int auxiliar;
     printf("%s",mensaje);
     scanf("%d",&auxiliar);
     return auxiliar;
 }



 char funcion_getChar(char*mensaje)
 {
     char auxiliar;
     printf("%s",mensaje);
     fflush(stdin);
     scanf("%c",&auxiliar);
     return auxiliar;
 }



 int funcion_validarNumeroFlotante(char str[])
 {
     int i=0;
     int cantidadPuntos=0;
     while(str[i] != '\0')
     {
         if(str[i] == '.' && cantidadPuntos == 0)
         {
             cantidadPuntos++;
             i++;
             continue;
         }
         if (str[i] < '0' || str[i] > '9')
            return 0;
         i++;
     }
     return 1;
 }


 int funcion_ValidarNumero(char str[])
 {
     int i=0;
     while(str[i] != '\0')
     {
         if(str[i] < '0' || str[i] > '9')
            return 0;
         i++;
     }
     return 1;
 }



int funcion_validarSoloLetras(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
        i++;
    }
    return 1;
}



 int funcion_validarAlfaNumerico(char str[])
 {
     int i=0;
     while(str[i] != '\0')
     {
         if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str [i] > '9'))
            return 0;
         i++;
     }
     return 1;
 }

 int funcion_ValidarTelefono(char str[])
 {
     int i=0;
     int contadorGuiones=0;
     while(str[i] != '\0')
     {
         if ((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
            return 0;
            if(str[i] == '-')
                contadorGuiones++;
            i++;

     }
     if(contadorGuiones==1) // debe tener un guion

        return 1;


 }



 void funcion_getString(char mensaje[],char input[])
 {
     printf("%s",mensaje);
     gets(input);
 }



 int funcion_getStringLetras(char mensaje[],char input[])
 {
     char aux[256];
     funcion_getString(mensaje,aux);
     if(funcion_validarSoloLetras(aux))
     {
         strcpy(input,aux);
         return 1;
     }
     return 0;
 }



 int funcion_getStringNumeros(char mensaje[],char input[])
 {
     char aux[256];
     funcion_getString(mensaje,aux);
     if(funcion_ValidarNumero(aux))
     {
         strcpy(input,aux);
         return 1;
     }
     return 0;
 }



 int funcion_getStringNumerosFlotantes(char mensaje[],char input[])
 {
     char aux[256];
     funcion_getString(mensaje,aux);
     if(funcion_validarNumeroFlotante(aux))
     {
         strcpy(input,aux);
         return 1;
     }
     return 0;
 }
