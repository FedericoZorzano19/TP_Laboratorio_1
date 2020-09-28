#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int operandoA;
    int operandoB;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int factorialA;
    int factorialB;
    int opcion;
    char seguir='s';

    do
    {
        system("cls");

        printf("\n1.Ingrese operador A\n");
        printf("2.Ingrese operador B\n");
        printf("3.Calcular\n");
        printf("4.Mostrar operacion\n");
        printf("5.Salir\n");
        printf("\nElija una opcion: ");
        fflush(stdin);
        scanf("%d", &opcion);



switch(opcion)
{
  case 1:
      printf("ingrese el primer operando: ");
      scanf("%d",&operandoA);
      printf("\nnumeroA=%d\n", operandoA);
      break;

  case 2:
    printf("ingrese el segundo operando: ");
    scanf("%d",&operandoB);
    printf("\n numeroB=%d\n", operandoB);
    break;

  case 3:
    suma= sumarOperandos(operandoA,operandoB);
    resta= restarOperandos(operandoA,operandoB);
    multiplicacion= multiplicarOperandos(operandoA,operandoB);
    division=divisionOperandos(operandoA,operandoB);
    factorialA=factorizarOperandos(operandoA);
    factorialB=factorizarOperandos(operandoB);
    break;

  case 4:
    printf("\nEl resultado de la suma es: %d\n",suma);
    printf("El resultado de la resta es: %d\n",resta);
    printf("El resultado de la multiplicacion es: %d\n",multiplicacion);
    if(operandoB!=0){
    printf("El resultado de la division es : %.2f\n",division);
    }
    else{
            printf("No se puede dividir por 0\n");
    }
    printf("El factorial de el operando A es: %d\n",factorialA);
    printf("El factorial de el operando B es: %d\n",factorialB);
 case 5:
            printf("Esta seguro que desea salir?(s o n)");
            fflush(stdin);
            scanf("%c", &seguir);
            break;

    system("pause");
    break;
}
    }
 while (seguir == 's');





return 0;
}
