#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include <cstdlib>
#include<windows.h>
#include "citas.h"
using namespace std;
#define color SetConsoleTextAttribute//CONSTANTE PARA USAR COLORES
 


int regresardatosconsulta() {//REGRESAR CEDULA DEL PACIENTE A BUSCAR
    int x;
    cout << "\n\n\n\n ";
    color(hConsole, 11);
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|         CONSULTA DE CITA            |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
    color(hConsole, 7);
    cout << "\t\t\t\tINGRESA EL NUMERO DE CEDULA DEL PASCIENTE: ";
    cin >> x;
    return x;
}


int menugeneralcitas() {//MENU GENERAL DE CITAS
    int op;
    do{
    cout << endl << endl;
    color(hConsole, 11);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|               CITAS                 |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cout << "\t\t\t\t\t\t\t\t\t\t| 1.-AGENDAR CITA                     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t| 2.-MODIFICAR O ELIMINAR CITA        |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t| 3.-MOSTRAR LISTADO DE CITAS         |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t| 4.-CONSULTAR CITA PROGRAMADA        |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t| 5.-MOSTRAR CITAS POR ESPECIALIDAD   |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t| 6.-MOSTRAR CITAS POR FECHA          |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t| 0.-SALIR                            |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
    cout << "\t\t\t\t\t\t\t\t\t\t      Seleccione: ";
    cin >> op;
    if (op < 0 || op>6) {//VALIDACION DEL MENU
        color(hConsole, 4);
        system("cls");
        cout << "\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|OPCION INCORRECTA. INTENTA NUEVAENTE |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        color(hConsole, 7);
    }
    } while (op < 0 || op>6);
    return op;
}




void especilidad(const tDatos lista, string especialidad) {//MOSTRAR CITAS POR ESPECIALIDADES
    bool a = false;
    for (int i = 0; i < lista.contador; i++) {//BUSCAR SI LA ESPECIALIDAD EXISTE
        if (lista.datoslista[i].especialidad == especialidad) {//
            a = true;
        }
    }
    if (a == false) {//EN CASO DE NO HABER LA ESPECIALIDAD
        color(hConsole, 4);
        system("cls");
        cout << "\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t|            ESPECIALIDAD NO ENCONTRADA              |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl << endl;
        color(hConsole, 7);
    }
    else {//SI SE ENCUENTRA LA ESPECIALIDAD
        system("cls");
        cout << "\n\n\n\n\n\n ";
        color(hConsole, 14);
        cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t    |" << setw(15) << left << "CEDULA" << "|" << setw(40) << left << "NOMBRE" << "|" << setw(25) << left << "ESPECIALIDAD" << "|" << setw(40) << left << "MEDICO" << setw(15) << left << "|FECHA" << " |" << setw(10) << left << " HORA" << "|" << endl;
        cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        color(hConsole, 7);
        for (int i = 0; i < lista.contador; i++) {
            if (lista.datoslista[i].especialidad == especialidad) {
                cout << "\t\t\t    |" << setw(15) << left << lista.datoslista[i].cedula << "|" << setw(40) << left << lista.datoslista[i].nombrepasciente << "|" << setw(25) << left << lista.datoslista[i].especialidad << "|Dr." << setw(37) << left << lista.datoslista[i].nombredoctor << "|" << setw(2) << left << lista.datoslista[i].dia << "/" << setw(2) << right << lista.datoslista[i].mes << "/" << setw(9) << left << lista.datoslista[i].anio << "|" << setw(2) << right << lista.datoslista[i].hora << ":00 ";
                if (lista.datoslista[i].hora > 12) {
                    cout << "PM";
                }
                else {
                    cout << "AM";
                }
                cout << setw(3) << right << "|" << endl;
                cout << "\t\t\t    ________________________________________________________________________________________________________________________________________________________" << endl;
            }
        }
    }
}
string pedirespecialidad() {//PEDIR ESPECIALIDAD PARA MOSTRAR
    system("cls");
    string espe;
    cout << "\n\n\n\n ";
    color(hConsole, 11);
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|   MOSTRAR CITAS POR ESPECIALIDAD    |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl << endl << endl;
    color(hConsole, 7);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\tINGRESA LA ESPECIALIDAD:  ";
    getline(cin, espe);
    return espe;
}
void mostrarfecha(const tDatos lista) {//MOSTRAR UNICAMENTE POR FECHAS
    system("cls");
    string espe;
    int dia, mes, anio;
    bool a = false;
    cout << "\n\n\n\n ";
    color(hConsole, 11);
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|       MOSTRAR CITAS POR FECHA       |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl << endl << endl;
    color(hConsole, 7);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\tINGRESA LA FECHA (Ejemplo: 25 07 2021):  ";
    cin >> dia >> mes >> anio;//PEDIR FECHAS
    for (int i = 0; i < lista.contador; i++) {//BUSAR FECHA Y VALIDAR SI EXISTE
        if ((lista.datoslista[i].dia == dia) && (lista.datoslista[i].mes == mes) && (lista.datoslista[i].anio == anio)) {
            a = true;
        }
    }
    if (a == false) {//EN CASO DE NO EXISTIR NINGUNA CITA PARA FECHA
        color(hConsole, 4);
        system("cls");
        cout << "\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t|      CITAS AUN NO PROGRAMADAS PARA ESTA FECHA      |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl << endl;
        color(hConsole, 7);
    }
    else {
        system("cls");
        cout << "\n\n\n\n\n\n ";//PRESENTAR LAS CITAS DE HABER EN LA FECHA INTRODUCIDA
        color(hConsole, 14);
        cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t    |" << setw(15) << left << "CEDULA" << "|" << setw(40) << left << "NOMBRE" << "|" << setw(25) << left << "ESPECIALIDAD" << "|" << setw(40) << left << "MEDICO" << setw(15) << left << "|FECHA" << " |" << setw(10) << left << " HORA" << "|" << endl;
        cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        color(hConsole, 7);
        for (int i = 0; i < lista.contador; i++) {
            if ((lista.datoslista[i].dia == dia) && (lista.datoslista[i].mes == mes) && (lista.datoslista[i].anio == anio)) {
                cout << "\t\t\t    |" << setw(15) << left << lista.datoslista[i].cedula << "|" << setw(40) << left << lista.datoslista[i].nombrepasciente << "|" << setw(25) << left << lista.datoslista[i].especialidad << "|Dr." << setw(37) << left << lista.datoslista[i].nombredoctor << "|" << setw(2) << left << lista.datoslista[i].dia << "/" << setw(2) << right << lista.datoslista[i].mes << "/" << setw(9) << left << lista.datoslista[i].anio << "|" << setw(2) << right << lista.datoslista[i].hora << ":00 ";
                if (lista.datoslista[i].hora > 12) {
                    cout << "PM";
                }
                else {
                    cout << "AM";
                }
                cout << setw(3) << right << "|" << endl;
                cout << "\t\t\t    ________________________________________________________________________________________________________________________________________________________" << endl;
            }
        }
    }
}
void agendarcita(tDatos& lista, tHospital datos) {//INGRESAR Y VALIDAR DATOS PARA PROGRAMAR UNA CITA
    string x;
    do {
        cout << "\n\n\n\n ";
        color(hConsole, 11);
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|         REGISTRO DE CITAS           |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl << endl << endl;
        color(hConsole, 7);
        cout << "\t\t\t\t\t\tINGRESE EL NUMERO DE CEDULA DEL PACIENTE:  ";
        cin >> datos.cedula;
        cin.ignore(80, '\n');
        cout << "\t\t\t\t\t\tINGRESA EL NOMBRE COMPLETO DEL PACIENTE:  ";
        getline(cin, datos.nombrepasciente);
        cout << "\t\t\t\t\t\tINGRESE LA ESPECIALIDAD A SER ANTENTIDO:  ";
        getline(cin, datos.especialidad);
        cout << "\t\t\t\t\t\tINGRESA EL NOMBRE DEL MEDICO:  ";
        getline(cin, datos.nombredoctor);
        do {
            cout << "\t\t\t\t\t\tINGRESA LA FECHA (Ejemplo: 25 07 2021):  ";
            cin >> datos.dia >> datos.mes >> datos.anio;
            if (datos.dia > 31 || datos.dia < 1 || datos.mes < 1 || datos.mes>12 || datos.anio < 2021) {//EN CASO DE NO INGRESAR LA FECHA EN RANGOS CORRECTOS
                system("cls");
                color(hConsole, 11);
                cout << "\n\n\n\n ";
                cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t|         REGISTRO DE CITAS           |" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
                color(hConsole, 4);
                cout << "\t\t\t\t\t\t\t\t -------------------------------------" << endl;
                cout << "\t\t\t\t\t\t\t\t |DIA:(1-31)||MES:(1-12)||ANIO:(>2021)|" << endl;
                cout << "\t\t\t\t\t\t\t\t --------------------------------------" << endl;
                color(hConsole, 7);
            }
        } while (datos.dia > 31 || datos.dia < 1 || datos.mes < 1 || datos.mes>12 || datos.anio < 2021);//EN CASO DE NO INGRESAR LA FECHA EN RANGOS CORRECTOS
        color(hConsole, 11);//AL INGRESAR LOS DATOS CORRECTOS
        cout << "\t\t\t\t\t\t        -------------------------------------------------------------" << endl;
        cout << "\t\t\t\t\t\t        |HORARIO DE ATENCION DE 8:00AM-12:00PM/14:00PM-17:00PM HORAS|" << endl;
        cout << "\t\t\t\t\t\t        -------------------------------------------------------------" << endl;
        color(hConsole, 7);
        do {
            cout << "\t\t\t\t\t\tINGRESA LA HORA:  ";
            cin >> datos.hora;
            if (datos.hora < 8 || datos.hora >= 17 || datos.hora == 12 || datos.hora == 13) {//EN CASO DE NO INGRESAR LA HORA EN RANGOS CORRECTOS
                system("cls");
                color(hConsole, 11);
                cout << "\n\n\n\n ";
                cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t|         REGISTRO DE CITAS           |" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
                color(hConsole, 4);
                cout << "\t\t\t\t\t\t        ------------------------------------------------------------------------------" << endl;
                cout << "\t\t\t\t\t\t        |HORA INCORRECTA (HORARIO DE ATENCION DE 8:00AM-12:00PM/14:00PM-17:00PM HORAS)|" << endl;
                cout << "\t\t\t\t\t\t        ------------------------------------------------------------------------------" << endl;
                color(hConsole, 7);
            }
        } while (datos.hora < 8 || datos.hora >= 17 || datos.hora == 12 || datos.hora == 13);//EN CASO DE NO INGRESAR LA HORA EN RANGOS CORRECTOS
        cin.sync();
        system("cls");
        color(hConsole, 14);
        cout << "\n\n\n\n\n\n ";
        //PREGUNTAR SI TODOS LOS DATOS YA INGRESADOS SON CORRECTOS PARA GUARDARLOS, VOLVER A INGRESARLOS O SALIR
        cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t    |" << setw(15) << left << "CEDULA" << "|" << setw(40) << left << "NOMBRE" << "|" << setw(25) << left << "ESPECIALIDAD" << "|" << setw(40) << left << "MEDICO" << setw(15) << left << "|FECHA" << " |" << setw(10) << left << "|HORA" << "|" << endl;
        cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        color(hConsole, 7);
        cout << "\t\t\t    |" << setw(15) << left << datos.cedula << "|" << setw(40) << left << datos.nombrepasciente << "|" << setw(25) << left << datos.especialidad << "|" << setw(40) << left << datos.nombredoctor << "|" << setw(2) << left << datos.dia << "/" << setw(2) << right << datos.mes << "/" << setw(9) << left << datos.anio << "|" << setw(2) << right << datos.hora << ":00 ";
        if (datos.hora > 12) {
            cout << "PM";//EN CASO DE QUE SEA EN LA TARDE
        }
        else {
            cout << "AM";//EN CASO DE QUE SEA EN LA MAÑANA
        }
        cout << setw(3) << right << "|" << endl;
        cout << "\t\t\t    ________________________________________________________________________________________________________________________________________________________" << endl << endl;
        cin.ignore(80, '\n');
        color(hConsole, 7);
        cout << endl << "\t\t\t\t\t\t\t\t\t\t¿LOS DATOS SON CORRECTOS?(Si/No/Salir): ";//PREGUNTA PARA VALIDAR DATOS
        cin >> x;
        system("cls");
        if (lista.contador == MAX)//COMPROBAR SI YA SE ALCANZO EL NUMERO MAXIMO DE CITAS
        {
            color(hConsole, 4);
            cout << "\t\t\t\t\t----------------------------" << endl;
            cout << "\t\t\t\t\t|MAXIMO DE CITAS ALCANZADAS|" << endl;
            cout << "\t\t\t\t\t----------------------------" << endl << endl;
            color(hConsole, 7);
        }
        else {
            if (x == "si" || x == "Si" || x == "SI" || x == "sI")//COMPROBAR SI DESEA GUARDAR LOS DATOS
            {
                system("cls");
                bool comprobar = false;
                //PROCESO PARA COMPROBAR SI NO EXISTEN MAS CITAS PROGRAMADAS EN ESE MISO HORARIO
                for (int i = 0; i < lista.contador; i++) {
                    if ((datos.especialidad == lista.datoslista[i].especialidad) && (datos.hora == lista.datoslista[i].hora) && (datos.nombredoctor == lista.datoslista[i].nombredoctor) && (datos.dia == lista.datoslista[i].dia) && (datos.mes == lista.datoslista[i].mes) && (datos.anio == lista.datoslista[i].anio)) {
                        comprobar = true;
                    }
                }
                //EN CASO DE ESTAR YA NO ESTAR DISPONIBLE LA CITA EN ESE HORARIO
                if (comprobar == true) {
                    color(hConsole, 4);
                    cout << "\n\n\n\n\n\n\n\n";
                    cout << "\t\t\t\t\t\t\t\t\t\t ------------------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t |CITA NO DISPONIBLE EN ESTE HORARIO|" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t ------------------------------------" << endl << endl;
                    color(hConsole, 7);
                }
                else {//EN CASO DE SI HABER HORARIO PARA LA CITA REGISTRADA
                    color(hConsole, 10);
                    cout << "\n\n\n\n\n\n\n\n";
                    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t|             CITA AGENDADA CORRECTAMENTE            |" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl << endl;
                    lista.datoslista[lista.contador] = datos;
                    lista.contador++;
                    color(hConsole, 7);
                }
            }
            else {
                if (x == "No" || x == "nO" || x == "NO" || x == "no") {//VOLVER A PEDIR LOS DATOS SI SELECCIONA "NO"
                    system("cls");
                    color(hConsole, 4);
                    cout << "\n\n\n\n ";
                    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t|             VUELVE A INGRESAR LOS DATOS            |" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl << endl;
                    color(hConsole, 7);
                }
            }
        }

    } while (x == "no" || x == "No" || x == "NO" || x == "nO");
}
void modificarhora(tDatos& lista, tHospital datos, int posicion) {//FUNCION PARA MODIFICAR LA HORA
    cout << "\n\n\n\n\n\n\n\n";
    color(hConsole, 4);
    cout << "\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t|            MODIFICAR HORA             |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl << endl;
    color(hConsole, 11);
    cout << "\t\t\t\t\t\t        -------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t        |HORARIO DE ATENCION DE 8:00AM-12:00PM/14:00PM-17:00PM HORAS|" << endl;
    cout << "\t\t\t\t\t\t        -------------------------------------------------------------" << endl;
    color(hConsole, 7);
    do {//PEDIR LA NUEVA HORA
        cout << "\t\t\t\t\t\tINGRESA LA NUEVA  HORA :  ";
        cin >> datos.hora;
        if (datos.hora < 8 || datos.hora >= 17 || datos.hora == 12 || datos.hora == 13) {///EN CASO DE NO INGRESAR LA HORA EN RANGOS CORRECTOS
            system("cls");
            color(hConsole, 11);
            cout << "\n\n\n\n ";
            cout << "\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl;
            cout << "\t\t\t\t\t\t\t\t\t|            MODIFICAR FECHA            |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl << endl;
            color(hConsole, 4);
            cout << "\t\t\t\t\t\t        ------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t\t\t\t        |HORA INCORRECTA (HORARIO DE ATENCION DE 8:00AM-12:00PM/14:00PM-17:00PM HORAS)|" << endl;
            cout << "\t\t\t\t\t\t        ------------------------------------------------------------------------------" << endl;
            color(hConsole, 7);
        }
    } while (datos.hora < 8 || datos.hora >= 17 || datos.hora == 12 || datos.hora == 13);
    //VALIDAR SI LA HORA NO COINCIDE CON LA HORA DE OTRA CITA YA PROGRAMADA
    system("cls");
    bool comprobar = false;
    datos.nombredoctor = lista.datoslista[posicion].nombredoctor;
    datos.especialidad = lista.datoslista[posicion].especialidad;
    datos.dia = lista.datoslista[posicion].dia;
    datos.mes = lista.datoslista[posicion].mes;
    datos.anio = lista.datoslista[posicion].anio;

    for (int i = 0; i < lista.contador; i++) {//VALIDAR SI LA HORA NO COINCIDE CON LA HORA DE OTRA CITA YA PROGRAMADA
        if ((datos.especialidad == lista.datoslista[i].especialidad) && (datos.hora == lista.datoslista[i].hora) && (datos.nombredoctor == lista.datoslista[i].nombredoctor) && (datos.dia == lista.datoslista[i].dia) && (datos.mes == lista.datoslista[i].mes) && (datos.anio == lista.datoslista[i].anio)) {
            comprobar = true;
        }
    }
    if (comprobar == true) {//EN CASO DE YA HABER UN CITA EN ESTE HORARIO
        color(hConsole, 4);
        cout << "\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t ------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t |CITA NO DISPONIBLE EN ESTE HORARIO|" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t ------------------------------------" << endl << endl;
        color(hConsole, 7);
    }
    else {//EN CASO DE ESTAR LIBRE LA CITA EN ESETE HORARIO
        color(hConsole, 10);
        cout << "\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t|           CITA MODIFICADA CORRECTAMENTE            |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl << endl;
        lista.datoslista[posicion].hora = datos.hora;
        color(hConsole, 7);
    }
}

void modificarfecha(tDatos& lista, tHospital datos, int posicion) {//FUNCION PARA MODIFICAR LA FECHA
    cout << "\n\n\n\n\n\n\n\n";
    color(hConsole, 4);
    cout << "\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t|            MODIFICAR FECHA            |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl << endl;
    color(hConsole, 7);
    do {
        cout << "\t\t\t\t\t\tINGRESA LA NUEVA FECHA (Ejemplo: 22 10 2021):  ";
        cin >> datos.dia >> datos.mes >> datos.anio;
        if (datos.dia > 31 || datos.dia < 1 || datos.mes < 1 || datos.mes>12 || datos.anio < 2021) {//EN CASO DE NO INGRESAR LA FECHA EN RANGOS CORRECTOS
            system("cls");
            color(hConsole, 11);
            cout << "\n\n\n\n ";
            cout << "\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl;
            cout << "\t\t\t\t\t\t\t\t\t|            MODIFICAR FECHA            |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl << endl;
            color(hConsole, 4);
            cout << "\t\t\t\t\t\t\t\t -------------------------------------" << endl;
            cout << "\t\t\t\t\t\t\t\t |DIA:(1-31)||MES:(1-12)||ANIO:(>2021)|" << endl;
            cout << "\t\t\t\t\t\t\t\t --------------------------------------" << endl;
            color(hConsole, 7);
        }
    } while (datos.dia > 31 || datos.dia < 1 || datos.mes < 1 || datos.mes>12 || datos.anio < 2021);//EN CASO DE NO INGRESAR LA FECHA EN RANGOS CORRECTOS
    system("cls");
    bool comprobar = false;
    datos.nombredoctor = lista.datoslista[posicion].nombredoctor;
    datos.especialidad = lista.datoslista[posicion].especialidad;
    datos.hora = lista.datoslista[posicion].hora;

    for (int i = 0; i < lista.contador; i++) {//VALIDAR SI LA FECHA NO COINCIDE CON LA FECHA DE OTRA CITA YA PROGRAMADA
        if ((datos.especialidad == lista.datoslista[i].especialidad) && (datos.hora == lista.datoslista[i].hora) && (datos.nombredoctor == lista.datoslista[i].nombredoctor) && (datos.dia == lista.datoslista[i].dia) && (datos.mes == lista.datoslista[i].mes) && (datos.anio == lista.datoslista[i].anio)) {
            comprobar = true;
        }
    }
    if (comprobar == true) {//EN CASO DE NO ESTAR DIPONIBLE LA FECHA
        color(hConsole, 4);
        cout << "\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t ------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t |CITA NO DISPONIBLE EN ESTE HORARIO|" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t ------------------------------------" << endl << endl;
        color(hConsole, 7);
    }
    else {//EN CASO DE ESTAR DISPONIBLE LA FECHA
        color(hConsole, 10);
        cout << "\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t|           CITA MODIFICADA CORRECTAMENTE            |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl << endl;
        lista.datoslista[posicion].dia = datos.dia;
        lista.datoslista[posicion].mes = datos.mes;
        lista.datoslista[posicion].anio = datos.anio;
        color(hConsole, 7);
    }
}
void elimina(tDatos& notas, int& contador, int pos)//ELIMINAR LA POSICION DE LA CITA PASADA
{
    for (int i = pos; i < contador; i++) {
        lista.datoslista[i] = lista.datoslista[i + 1];
    }
    color(hConsole, 10);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t|           CITA ELIMINADA CORRECTAMENTE             |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------";
    color(hConsole, 7);
    lista.contador--;
}
int datoelim(tDatos lista) {//VALIDAR SI LA CITA YA ESTA PROGRAMDA POR EL NUMERO DE CEDULA Y DE SER ASI DEVOLVER LA POSICON
    system("cls");
    int buscar;
    int pos;
    cout << "\n\n\n\n\n\n\n\n";
    color(hConsole, 4);
    cout << "\t\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|   MODIFICAR/ELIMINAR CITA PROGRAADA   |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t-----------------------------------------" << endl;
    color(hConsole, 7);
    cout << "\t\t\t\t\t\t\tINGRESE EL NUMERO DE CEDULA DEL PACIENTE:  ";
    cin >> buscar;
    bool a = false;
    for (int i = 0; i < lista.contador; i++) {
        if (lista.datoslista[i].cedula == buscar) {//EN CASO DE EXISTIR LA CITA RETORNA LA POSICION PARA LUEGO ELIMINARSE/MODICAR FECHA O MODIFCAR LA HORA
            return i;
            a = true;
        }
    }
    if (a == false) {//EN CASO DE NO EXISTIR LA CITA REGRESA UN -1 EL CUAL ACTIVA EL MENSAJE DE "CITA NO PROGRAMADA"
        return -1;
    }
}

int menumodificar() {//MENU PARA SOLICITAR QUE MODIFCIAR
    int op;
    do {
        cout << endl << endl;
        color(hConsole, 4);
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|       MODIFICAR/ELIMINAR CITA       |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        color(hConsole, 15);
        cout << "\t\t\t\t\t\t\t\t\t\t|    1.-ELIMINAR CITA                  |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    2.-MODIFICAR FECHA                |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    3.-MODIFICAR HORA                 |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    0.-SALIR                          |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        color(hConsole, 7);
        cout << "\t\t\t\t\t\t\t\t\t\t      Seleccione: ";
        cin >> op;
        if (op < 0 || op>5) {//VALIDAR OPCIONES
            color(hConsole, 4);
            system("cls");
            cout << "\n\n\n\n";
            cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t|OPCION INCORRECTA. INTENTA NUEVAENTE |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
            color(hConsole, 7);
        }
    } while (op < 0 || op>5);//VALIDAR OPCIONES
    system("cls");
    return op;
}

void cargar(tDatos& lista, bool& ok) {//CARGAR DATOS DESDE EL ARCHIVO 
    tHospital estudiante;//VARIABLES PARA LEER EL ARCHIVO
    ifstream archivo;
    char aux;
    lista.contador = 0;
    archivo.open("hospital.txt");
    if (!archivo.is_open()) {//EN CASO DE NO ABRIRSE EL ARCHIVO
        ok = false;
    }
    else {//CARGA DE TODOS LO DATOS DEL ARCHIVO
        ok = true;
        getline(archivo, estudiante.nombrepasciente);
        while ((estudiante.nombrepasciente != "XXX") && (lista.contador < MAX)) {
            getline(archivo, estudiante.nombredoctor);
            getline(archivo, estudiante.especialidad);
            archivo >> estudiante.hora;
            archivo >> estudiante.cedula;
            archivo >> estudiante.dia;
            archivo >> estudiante.mes;
            archivo >> estudiante.anio;
            archivo.get(aux);
            lista.datoslista[lista.contador] = estudiante;
            lista.contador++;
            getline(archivo, estudiante.nombrepasciente);
        }
        archivo.close();
    }
}
void mostrarpasientes(tDatos lista, int contador)//MOSTRAR PASCIENTES
{
    system("cls");
    cout << "\n\n\n\n\n\n ";
    color(hConsole, 14);
    cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t    |" << setw(15) << left << "CEDULA" << "|" << setw(40) << left << "NOMBRE" << "|" << setw(25) << left << "ESPECIALIDAD" << "|" << setw(40) << left << "MEDICO" << setw(15) << left << "|FECHA" << " |" << setw(10) << left << " HORA" << "|" << endl;
    cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    color(hConsole, 7);
    for (int i = 0; i < contador; i++)
    {
        cout << "\t\t\t    |" << setw(15) << left << lista.datoslista[i].cedula << "|" << setw(40) << left << lista.datoslista[i].nombrepasciente << "|" << setw(25) << left << lista.datoslista[i].especialidad << "|Dr." << setw(37) << left << lista.datoslista[i].nombredoctor << "|" << setw(2) << left << lista.datoslista[i].dia << "/" << setw(2) << right << lista.datoslista[i].mes << "/" << setw(9) << left << lista.datoslista[i].anio << "|" << setw(2) << right << lista.datoslista[i].hora << ":00 ";
        if (lista.datoslista[i].hora > 12) {
            cout << "PM";
        }
        else {
            cout << "AM";
        }
        cout << setw(3) << right << "|" << endl;
        cout << "\t\t\t    ________________________________________________________________________________________________________________________________________________________" << endl;
    }
    color(hConsole, 7);
}
void guardar(const tDatos& lista) {//GUARDAR TODOS LOS DATOS MODIFICADOS O CREADOS EN EL ARCHIVO 
    ofstream archivo;
    archivo.open("hospital.txt");
    for (int i = 0; i < lista.contador; i++) {
        archivo << lista.datoslista[i].nombrepasciente << endl;
        archivo << lista.datoslista[i].nombredoctor << endl;
        archivo << lista.datoslista[i].especialidad << endl;
        archivo << lista.datoslista[i].hora << endl;
        archivo << lista.datoslista[i].cedula << endl;
        archivo << lista.datoslista[i].dia << endl;
        archivo << lista.datoslista[i].mes << endl;
        archivo << lista.datoslista[i].anio << endl;
    }
    archivo << "XXX" << endl;
    archivo.close();
}
void consultar(tDatos& lista, int buscar) {//BUSCAR LA CITA DE UN PASCIENTE 
    bool a = false;
    system("cls");
    cout << "\n\n\n\n\n\n ";
    for (int i = 0; i < lista.contador; i++) {
        if (lista.datoslista[i].cedula == buscar) {//EN CASO DE HABER UNA CITA PROGRAMADA
            color(hConsole, 14);
            cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t    |" << setw(15) << left << "CEDULA" << "|" << setw(40) << left << "NOMBRE" << "|" << setw(25) << left << "ESPECIALIDAD" << "|" << setw(40) << left << "MEDICO" << setw(15) << left << "|FECHA" << " |" << setw(10) << left << "|HORA" << "|" << endl;
            cout << "\t\t\t    --------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            color(hConsole, 7);
            cout << "\t\t\t    |" << setw(15) << left << lista.datoslista[i].cedula << "|" << setw(40) << left << lista.datoslista[i].nombrepasciente << "|" << setw(25) << left << lista.datoslista[i].especialidad << "|" << setw(40) << left << lista.datoslista[i].nombredoctor << "|" << setw(2) << left << lista.datoslista[i].dia << "/" << setw(2) << right << lista.datoslista[i].mes << "/" << setw(9) << left << lista.datoslista[i].anio << "|" << setw(2) << right << lista.datoslista[i].hora << ":00 ";
            if (lista.datoslista[i].hora > 12) {
                cout << "PM";
            }
            else {
                cout << "AM";
            }
            cout << setw(3) << right << "|" << endl;
            cout << "\t\t\t    ________________________________________________________________________________________________________________________________________________________" << endl;
            a = true;
        }
    }
    if (a == false) {//EN CASO DE NO HABER UNA CITA PROGRAMADA
        color(hConsole, 4);
        string op;
        cout << "\t\t\t\t\t\t\t\t\t\t----------------------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|EL PACIENTE NO CUENTA CON NINGUNA CITA PROGRAMADA|" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t----------------------------------------------------" << endl << endl;
        color(hConsole, 7);
        cout << "\t\t\t\t\t\t\t¿DESEAS AGENDAR UNA CITA? (Si/No): ";
        cin >> op;
        system("cls");
        if (op == "si" || op == "Si" || op == "SI" || op == "sI") {//VALIDAR SI DESEA AGENDAR UNA CITA EN CASO DE NO HABER
            agendarcita(lista, datos);
        }
    }
}
void ordenarcitas(tDatos& lista)//ORDENAR CITAS EN EL ORDEN: --> LA HORA,EL DIA,EL MES Y POR ULTIMO EL AÑO
{
    tHospital aux;//AUXILIAR PARA INTERCAMBIAR LAS POSICIONES
    for (int i = 0; i < lista.contador; i++)
    {
        for (int j = i + 1; j < lista.contador; j++)
        {
            if (lista.datoslista[i].hora > lista.datoslista[j].hora)
            {
                aux = lista.datoslista[i];
                lista.datoslista[i] = lista.datoslista[j];
                lista.datoslista[j] = aux;
            }
        }
    }
    for (int i = 0; i < lista.contador; i++)
    {
        for (int j = i + 1; j < lista.contador; j++)
        {
            if (lista.datoslista[i].dia > lista.datoslista[j].dia)
            {
                aux = lista.datoslista[i];
                lista.datoslista[i] = lista.datoslista[j];
                lista.datoslista[j] = aux;
            }
        }
    }
    for (int i = 0; i < lista.contador; i++)
    {
        for (int j = i + 1; j < lista.contador; j++)
        {
            if (lista.datoslista[i].mes > lista.datoslista[j].mes)
            {
                aux = lista.datoslista[i];
                lista.datoslista[i] = lista.datoslista[j];
                lista.datoslista[j] = aux;
            }
        }
    }
    for (int i = 0; i < lista.contador; i++)
    {
        for (int j = i + 1; j < lista.contador; j++)
        {
            if (lista.datoslista[i].anio > lista.datoslista[j].anio)
            {
                aux = lista.datoslista[i];
                lista.datoslista[i] = lista.datoslista[j];
                lista.datoslista[j] = aux;
            }
        }
    }
}
