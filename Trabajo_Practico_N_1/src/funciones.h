/*
 * funciones.h
 *
 *  Created on: 13 abr. 2021
 *      Author: Federico Zorzano
 */
#include <stdio.h>
/** \brief Se realiza la suma entre dos numeros ingresados
 * \param int asignado a la variable entero operandoA
 * \param int asignado a la variable entero operandoB
 * \return int nos devuelve un numero entero
 */
int sumarOperandos (int numeroA, int numeroB);
/** \brief Se realiza la resta entre dos numeros ingresados
 * \param int asignado a la variable entero operandoA
 * \param int asignado a la variable entero operandoB
 * \return int nos devuelve un numero entero
 */
int restarOperandos (int numeroA, int numeroB);
/** \brief Se realiza la multiplicacion entre dos numeros ingresados
 * \param int asignado a la variable entero operandoA
 * \param int asignado a la variable entero operandoB
 * \return int nos devuelve un numero entero
 */
int multiplicarOperandos (int numeroA, int numeroB);
/** \brief Se realiza la division entre dos numeros ingresados
 * \param int asignado a la variable entero operandoA
 * \param int asignado a la variable entero operandoB
 * \return int nos devuelve un numero float o int
 */
float divisionOperandos (float numeroA, int numeroB);
/** \brief realiza la operacion factoreo entre dos numeros ingresados por el usuario
 * \param int asignado a la variable entero operandoA
 * \param int asignado a la variable entero operandoB
 * \return int nos devuelve un numero entero(si el factorial es mayor o igual a 13 ,el factorial desborda)
 */

long int factorizarOperandos(int numeroFactorial);
