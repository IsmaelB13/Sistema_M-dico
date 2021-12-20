#include<string>
#include<fstream>
#include<iomanip>
#include <cstdlib>
#include<windows.h>
 
using namespace std;
 
//estructura de los datos a ingresar
typedef struct {
    int id;
    string nom;
    int edad;
    float peso;
    float estatura;
    string sangre;
    string cel;
    string correo;
}tHos;

//estructura de los datos a ingresar en un arreglo
typedef struct {
    tHos datoslista[MAX];
    int contador;
}tDatospas;


//estructuras de datos en variable
tHos info;
tDatospas list;
//modificar el nombre del paciente
void modificarnombre(tDatospas& list, int pos);
//modificar la edad del paciente
void modificaredad(tDatospas& list, int pos);
//modificar el peso del paciente
void modificarpeso(tDatospas& list, int pos);
//modificar la estatura  del paciente
void modificarestatura(tDatospas& list, int pos);
//modificar el tipo de sangre paciente
void modificarsangre(tDatospas& list, int pos);
//modificar el correo del paciente
void modificarcorreo(tDatospas& list, int pos);
//modificar el celular del paciente
void modificarcel(tDatospas& list, int pos);
//menu para pedir que hacer
int menugeneralpacientes();

//menu 
void agendarpaciente(tDatospas& list, tHos& info);

//carga citas ongresadas
void cargarcita(tDatospas& list, bool& ok);

//muestra pacientes ingresados
void ordenarBurburjapaciente(tDatospas& list, tHos& nom);
void mostrarpasientes(tDatospas list, int contador);

//consulta citas ongresadas
void consultarpaciente(const tDatospas& lista, int buscar);

//eliminar datos ingresados
int datoelim(tDatospas list);
//elimina el paciente seleccionado
void elimina(tDatospas& list, int& contador, int pos);
//buscar paciente
int buscarpaciente();
//menu para seleccionar que modificar
int menumodificarpaciente();





