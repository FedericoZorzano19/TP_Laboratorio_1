typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
} eEmployee;


/** \brief sirve para indicar todas las posciones vias en el array  ,
 * esta funcion ubica el flag (isEmpty)
 * ubicacion del array
 * \param lista Employee* puntero hacia el array de employees
 * \param len int Array length
 * \return int Return (-1) si es Error [Invalid length o NULL ] - (0) si esta bien
 *
 */
int initEmployees(eEmployee list[], int len);
/** \brief Busca un lugar vacio para agregar un empleado nuevo.
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return Devuelve la posicion del lugar vacio.
 *
 */
int findEmpty(eEmployee list[],int len);
/** \brief Busca un empleado segun su id.
 * \param list Employee* Puntero hacia array de employees.
 * \param len int Array length.
 * \param id int Array identificador
 * \return Devuelve la posicion donde se encuentra el empleado.
 *
 */
int findEmployee(eEmployee list[],int len, int id);
/** \brief Muestra los datos del empleado que se cargaron.
 * \param
 *
 */
void viewEmployee(eEmployee aEmployee);
/** \brief Muestra los datos de los empleados cargados.
 * \param list Employee* Puntero hacia array de employees
 * \param len int Array length
 *
 */
void viewEmployees(eEmployee list[], int len);
/** \brief se agrega a la lista de employee los valores recibidos en parametros
 * en el primer lugar vacio
 * \param lista employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) si Error [Invalid length or NULL puntero o sin
 lugar libre] - (0) si esta bien
 *
 */


int addEmployee(eEmployee list[], int len);

int funcion_opciones();
/** \brief Borra a Employee en base a su Id (put isEmpty Flag en 1)
 *
 * \param lista Employee*
 * \param len int
 * \param id int
 * \return int Return (-1) si es Error [Invalid length or NULL puntero o si no puede encontrar a un empleado] - (0) si esta bien
 */


int removeEmployee(eEmployee* list, int len);
/** \brief Modifica al Employee en base a su  Id (put isEmpty Flag en 1)
 *
 * \param list Employee*
 * \param len int
 * \return int Return (-1) si es Error [Invalid length or NULL pointer o si no puede encontrar a un empleado] - (0) si esta bien
 */
void modifyEmployee(eEmployee list[], int len);

int funcion_opcionesModificacion();

void harcodeoEmpleados(eEmployee* list);

int sortEmployees(eEmployee list[], int len);
void reports (eEmployee list[],int len);
