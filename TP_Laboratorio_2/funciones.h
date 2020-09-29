/** \brief Suma de dos numeros flotantes.
    \param Valor asignado a variable "a".
    \param valor asignado a variable "b".
    \return Devuelve el resultado de la suma de las dos variables.
*/
float funcion_Suma(float a, float b );
/** \brief Resta de dos numeros flotant
    \param Valor asignado a variable "a".
    \param Valor asignado a variable "b".
    \return Devuelve el resultado de la resta de las dos variables.
*/

float funcion_Resta(float a, float b);
/** \brief Multiplicacion de dos numeros flotantes.
    \param Valor asignado a variable "a".
    \param Valor asignado a variable "b".
    \return Devuelve el resultado de la multiplicacion de las dos variables.
*/
float funcion_Multiplicacion(float a,float b);
/** \brief Division de dos numeros flotantes
    \param Valor asignado a variable "a".
    \param Valor asignado a variable "b".
    \return Devuelve el resultado de la division de las dos variables.
*/
float funcion_Division(float a,float b);
/** \brief Factoriza un numero entero
    \param Valor asignado a variable "a".
    \return Devuelve el resultado de la factorial de la variable.
*/
int funcion_Factorial(int a);

/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int funcion_getInt();
/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
float funcion_getFloat();
 /**
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
char funcion_getChar();
/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */


int funcion_ValidarNumero(char *str) ;
 /**
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int funcion_ValidarTelefono(char *str);
/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int funcion_validarAlfaNumerico(char *str);
 /**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int funcion_validarSoloLetras(char *str);
 /**
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int funcion_validarNumeroFlotante(char str[]);
 /**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void funcion_getString(char mensaje[],char input[]);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int funcion_getStringLetras(char mensaje[],char input[]);
/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */

int funcion_getStringNumeros(char mensaje[],char input[]);
/**
 * \brief Solicita un texto numérico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int funcion_getStringNumerosFlotantes(char mensaje[],char input[]);
