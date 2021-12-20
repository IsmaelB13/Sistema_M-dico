//BIBLIOTECAS
#include<string>
using namespace std;
 


typedef struct {
    string nombrepasciente;
    string nombredoctor;
    string especialidad;
    int hora;
    int cedula;
    int dia;
    int mes;
    int anio;
}tHospital;//ESTRUCTURAS
typedef struct {
    tHospital datoslista[MAX];
    int contador;
}tDatos;///ESTRUCTURAS
tHospital datos;//VARIABLE GLOBAL
tDatos lista;//VARIABEL GLOBAL
int menugeneralcitas();//MENU GENERAL PARA LAS CITAS
void agendarcita(tDatos& lista, tHospital datos);//AGENDAR CITAS
void cargar(tDatos& lista, bool& ok);//FUNCION PARA CARGAR LOS DATOS DEL ARCHIVO TXT GUARDADO
void mostrarpasientes(tDatos lista, int contador);//FUNCION PARA MOSTRAR LOS PACIENTES
void consultar(tDatos& lista, int buscar);//FUNCION PARA CONSULTAR UNA CIA YA PROGRAMADA
void ordenarcitas(tDatos& lista);//ORDENAR CITAS POR FECHA Y HORA
int menumodificar();//MENU PARA SELECCIONAR QUE MODIFICAR
void elimina(tDatos& notas, int& contador, int pos);//FUNCION PARA ELIMINAR UNA CITA YA PROGRAMADA
int datoelim(tDatos lista);//FUNCION PARA BUSCAR LA POSICION A ELIMINAR BASADO EN EL NUMERO DE CEDULA
void modificarfecha(tDatos& lista, tHospital datos, int posicion);//FUNCION PARA MODIFICAR UNICAMENTE LA FECHA DE LA CITA
void modificarhora(tDatos& lista, tHospital datos, int posicion);//FUNCION PARA MODIFICAR UNICAMENTE LA HORA DE LA CITA 
void especilidad(const tDatos lista, string especialidad);//FUNCION PARA MOSTRAR PASCIENTES SOLAMENTE POR ESPECIALIDAD
string pedirespecialidad();//FUNCION PARA PEDIR LA  ESPECIALIDAD PARA LA FUNCION ANTERIOR
void mostrarfecha(const tDatos lista); // FUNCION PARA MOSTRAR PASCIENTES SOLAMENTE POR FECHAS
int regresardatosconsulta();//REGRESA LA CEDULAD EL PASCIENTE