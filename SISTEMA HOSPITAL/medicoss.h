//Escribimos las librerias que utilizaremos
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include <cstdlib>
#include<windows.h>
#define color SetConsoleTextAttribute
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;
//estas lineas nos ayudara a darle color a lo mosrado en la pantalla
//el maximo de medicos que se pueden registrar son 100
const int MAX = 100;
//definimos la estructura de nuestro programa como: nombre,cedula,especialida,edad,etc...
typedef struct {
    //declaramos los tipos de variables a usar en esta estructura
    string nombredoctor;
    string especialidad;
    int edad;
    int celular;
    int cedula;
    string correo;
}tMedicos;
typedef struct {
    tMedicos datoslista1[MAX];
    int contador;
}tDatos1;
tMedicos datos1;
tDatos1 lista1;
//Prototipos de las funciones


int menucitas_medi_pac();
void agendarmedico(tDatos1& lista1, tMedicos& datos1);
void cargarmedico(tDatos1& lista1, bool& ok);
void mostrarmedico(tDatos1 lista1, int contador);
void consultarmedico(tDatos1& lista1, int buscar);
int menumodificarmedico();
void modificarnombremedico(tDatos1& lista1, int pos);
void modificarespecialidad(tDatos1& lista1, int pos);
void modificarcorreomedico(tDatos1& lista1, int pos);
void modificaredadmedico(tDatos1& lista1, int pos);
void modificarcelularmedico(tDatos1& lista1, int pos);
void ordenarBurburjaaMedicos(tDatos1& lista1, tMedicos& stock);
bool operator<(tMedicos opIzq, tMedicos opDer);
int menugeneralmedicos();
int buscarmedico();