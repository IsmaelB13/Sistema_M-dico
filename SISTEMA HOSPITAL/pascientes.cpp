#include "pascientes.h"

int menugeneralpacientes() {//menu para preguntar que hacer
    int op;
    color(hConsole, 3);
    cout << "\n\n\n\n\n\n ";
    cout << "\t\t\t\t\t\t\t\t\t   --------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t   :::: PLATAFORMA DIGITAL REGISTRO DE PACIENTES ::::" << endl;
    cout << "\t\t\t\t\t\t\t\t\t   --------------------------------------------------" << endl << endl;
    color(hConsole, 7);
    cout << " \t\t\t\t\t\t\t\t\t\t\t1.-MOSTAR PACIENTES" << endl;
    cout << " \t\t\t\t\t\t\t\t\t\t\t2.-AGREGAR PACIENTE" << endl;
    cout << " \t\t\t\t\t\t\t\t\t\t\t3.-ELIMINAR/MODIFICAR PACIENTE" << endl;
    cout << " \t\t\t\t\t\t\t\t\t\t\t4.-BUSCAR PACIENTE" << endl;
    cout << " \t\t\t\t\t\t\t\t\t\t\t0.-SALIR" << endl << endl;
    cout << " \t\t\t\t\t\t\t\t\t\tOPCION -->  ";
    cin >> op;
    return op;
}

void modificarcel(tDatospas& list, int pos) {////modificar el celular del paciente
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR PACIENTE         |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE EL NUEVO NUMERO CELULAR DEL PASCIENTE:  ";
    cin >> list.datoslista[pos].cel;
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}


void modificarcorreo(tDatospas& list, int pos) {//modificar el correo del paciente
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR PACIENTE         |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE EL NUEVO CORREO DEL PASCIENTE:  ";
    cin >> list.datoslista[pos].correo;
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}
void modificarsangre(tDatospas& list, int pos) {//modificar el tipo de sangre del paciente
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR PACIENTE         |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE EL TIPO DE SANGRE DEL PASCIENTE:  ";
    cin >> list.datoslista[pos].sangre;
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}
void modificarestatura(tDatospas& list, int pos) {//modificar estructura del paciente
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR PACIENTE         |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE LA NUEVA ESTATURA DEL PASCIENTE:  ";
    cin >> list.datoslista[pos].estatura;
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}


void modificarpeso(tDatospas& list, int pos) {//modificar el peso del paciente
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR PACIENTE         |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE EL NUEVO PESO DEL PASCIENTE:  ";
    cin >> list.datoslista[pos].peso;
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}

void modificaredad(tDatospas& list, int pos) {//modificar la edad del paciente
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR PACIENTE         |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE LA NUEVA EDAD DEL PASCIENTE:  ";
    cin >> list.datoslista[pos].edad;
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}
void modificarnombre(tDatospas& list, int pos) {//modificar el nombre del paciente
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR PACIENTE         |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE EL NUEVO NOMBRE DEL PASCIENTE:  ";
    getline(cin, list.datoslista[pos].nom);
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);

}

int menumodificarpaciente() {//MENU PARA SOLICITAR QUE MODIFCIAR
    int op;
    do {
        cout << endl << endl;
        color(hConsole, 4);
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR PACIENTE         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        color(hConsole, 15);
        cout << "\t\t\t\t\t\t\t\t\t\t|    1.-ELIMINAR PACIENTE             |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    2.-MODIFICAR NOMBRE              |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    3.-MODIFICAR EDAD                |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    4.-MODIFICAR PESO                |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    5.-MODIFICAR ESTATURA            |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    6.-MODIFICAR T. DE SANGRE        |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    7.-MODIFICAR N.CELULAR           |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    8.-MODIFICAR CORREO              |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    0.-SALIR                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        color(hConsole, 7);
        cout << "\t\t\t\t\t\t\t\t\t\t      Seleccione: ";
        cin >> op;
        if (op < 0 || op>8) {//VALIDAR OPCIONES
            color(hConsole, 4);
            system("cls");
            cout << "\n\n\n\n";
            cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t|OPCION INCORRECTA. INTENTA NUEVAENTE |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
            color(hConsole, 7);
        }
    } while (op < 0 || op>8);//VALIDAR OPCIONES
    system("cls");
    return op;
}
//funcion desarrollada para obtener datos por el usuario
void agendarpaciente(tDatospas& list, tHos& nom) {
    string x;
    do {
        cout << "\n\n\n\n\n\n ";
        color(hConsole, 3);
        cout << "\t\t\t\t\t\t\t\t\t              :::: REGISTRO DE PACIENTE ::::" << endl << endl;
        color(hConsole, 7);
        cout << "\t\t\t\tINGRESE EL NUMERO DE CEDULA DEL PACIENTE:  ";
        cin >> info.id;
        cin.ignore(80, '\n');
        cout << "\t\t\t\tINGRESA EL NOMBRE COMPLETO DEL PACIENTE:  ";
        getline(cin, info.nom);
        cout << "\t\t\t\tINGRESA LA EDAD DEL PACIENTE:  ";
        cin >> info.edad;
        cout << "\t\t\t\tINGRESA EL PESO DEL PACIENTE:  ";
        cin >> info.peso;
        cout << "\t\t\t\tINGRESA LA ESTATURA DEL PACIENTE:  ";
        cin >> info.estatura;
        cin.ignore(50, '\n');
        cout << "\t\t\t\tINGRESA  EL TIPO DE SANGRE DEL PACIENTE:  ";
        getline(cin, info.sangre);
        cout << "\t\t\t\tINGRESA  EL TELEFONO DEL PACIENTE:  ";
        cin >> info.cel;
        cin.ignore(50, '\n');
        cout << "\t\t\t\tINGRESA EL CORREO ELECTRONICO DEL PACIENTE:  ";
        getline(cin, info.correo);
        cin.sync();
        system("cls");
        system("cls");
        color(hConsole, 14);
        cout << "\n\n\n\n\n\n ";//pregunar si los datos son correctos
        cout << "\t\t\t\t" << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t\t|" << setw(15) << left << "CEDULA" << setw(25) << left << "|NOMBRE" << setw(21) << left << "|EDAD" << setw(11) << left << "|PESO (kg)" << setw(14) << left << "|ESTATURA (m)" << setw(15) << left << "|T. SANGRE" << setw(20) << left << "|N. CELULAR" << setw(25) << left << "|CORREO" << " |" << endl;
        cout << "\t\t\t\t" << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        color(hConsole, 7);
        cout << "\t\t\t\t|";
        color(hConsole, 2);
        cout << setw(15) << left << info.id;
        color(hConsole, 7);
        cout << "|" << setw(24) << left << info.nom << "|" << setw(20) << left << info.edad << "|" << setw(10) << left << info.peso << "|" << setw(13) << left << info.estatura << "|";
        color(hConsole, 4);
        cout << setw(14) << left << info.sangre;
        color(hConsole, 7);
        cout << "|" << setw(19) << left << info.cel << "|" << setw(25) << left << info.correo << "|" << endl;
        cout << "\t\t\t\t" << "____________________________________________________________________________________________________________________________________________________" << endl;
        color(hConsole, 7);
        cout << endl << endl << "\t\t\t\t LOS DATOS SON CORRECTOS? (Si/No/Salir): ";
        cin >> x;
        system("cls");
        if (list.contador == MAX)//en caso de estar maximo el numero de paceintes
        {
            color(hConsole, 4);
            cout << "\n\n\n\n\n\n ";
            cout << "\t\t\t\t\t\t\t\t\t\t\t--------------------------------" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t|MAXIMO DE PERSONAS REGISTRADAS |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t--------------------------------" << endl << endl;
            color(hConsole, 7);
        }
        else {
            if (x == "si" || x == "Si" || x == "SI" || x == "sI")
            {
                system("cls");
                bool comprobar = false;
                for (int i = 0; i < list.contador; i++) {//comprobar si ya no esta registrado
                    if ((info.id == list.datoslista[i].id)) {
                        comprobar = true;
                    }
                }
                if (comprobar == true) {//en caso de estar registrado
                    color(hConsole, 4);
                    cout << "\n\n\n\n\n\n ";
                    cout << "\t\t\t\t\t\t\t\t\t\t    ------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t    |PACIENTE YA REGISTRADO|" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t    ------------------------" << endl << endl;
                    color(hConsole, 7);
                }
                else {//en caso de estar todo en orden
                    color(hConsole, 10);
                    cout << "\n\n\n\n\n\n ";
                    cout << "\t\t\t\t\t\t\t\t\t\t    -------------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t    |DATOS GUARDADOS CORRECTAMENTE|" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t    -------------------------------" << endl << endl;
                    list.datoslista[list.contador] = info;
                    list.contador++;
                    color(hConsole, 7);
                }
            }
            else {//volver a pedir los datos en caso de no estar correctos
                if (x == "No" || x == "nO" || x == "NO" || x == "no") {
                    system("cls");
                    color(hConsole, 4);
                    cout << "\n\n\n\n\n\n ";
                    cout << "\t\t\t\t\t\t\t\t\t\t    -----------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t    |VUELVE A INGRESAR LOS DATOS|" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t    -----------------------------" << endl << endl;
                    color(hConsole, 7);
                }
            }
        }

    } while (x == "no" || x == "No" || x == "NO" || x == "nO");
}

//pedir el numeo de cedula oara buscar el paciente
int buscarpaciente() {
    system("cls");
    int x;
    cout << "\n\n\n\n ";
    color(hConsole, 11);
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|         BUSCAR PACIENTES            |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
    color(hConsole, 7);
    cout << endl << endl << endl << "\t\t\t\tINGRESA EL NUMERO DE CEDULA DEL PASCIENTE: ";
    cin >> x;
    return x;
}


//cargar del archivo la informacion de citas
void cargarcita(tDatospas& lista, bool& ok) {
    tHos hospital;
    ifstream archivo;
    char aux;
    lista.contador = 0;
    archivo.open("pascientes.txt");
    if (!archivo.is_open()) {
        ok = false;
    }
    else {
        ok = true;
        getline(archivo, hospital.nom);
        while ((hospital.nom != "XXX") && (lista.contador < MAX)) {
            archivo >> hospital.id;
            archivo >> hospital.edad;
            archivo >> hospital.peso;
            archivo >> hospital.estatura;
            archivo >> hospital.sangre;
            archivo >> hospital.cel;
            archivo >> hospital.correo;
            archivo.get(aux);
            lista.datoslista[lista.contador] = hospital;
            lista.contador++;
            getline(archivo, hospital.nom);
        }
        archivo.close();
    }
}

//funcion desarrollada para mostrar ingresados datos por el usuario
void mostrarpasientes(tDatospas list, int contador) {
    system("cls");
    color(hConsole, 14);
    cout << "\n\n\n\n\n\n ";
    cout << "\t\t\t\t" << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t|" << setw(15) << left << "CEDULA" << setw(25) << left << "|NOMBRE" << setw(21) << left << "|EDAD" << setw(11) << left << "|PESO (kg)" << setw(14) << left << "|ESTATURA (m)" << setw(15) << left << "|T. SANGRE" << setw(20) << left << "|N. CELULAR" << setw(25) << left << "|CORREO" << " |" << endl;
    cout << "\t\t\t\t" << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < list.contador; i++) {
        color(hConsole, 7);
        cout << "\t\t\t\t|";
        color(hConsole, 2);
        cout << setw(15) << left << list.datoslista[i].id;
        color(hConsole, 7);
        cout << "|" << setw(24) << left << list.datoslista[i].nom << "|" << setw(20) << left << list.datoslista[i].edad << "|" << setw(10) << left << list.datoslista[i].peso << "|" << setw(13) << left << list.datoslista[i].estatura << "|";
        color(hConsole, 4);
        cout << setw(14) << left << list.datoslista[i].sangre;
        color(hConsole, 7);
        cout << "|" << setw(19) << left << list.datoslista[i].cel << "|" << setw(25) << left << list.datoslista[i].correo << "|" << endl;
        cout << "\t\t\t\t" << "____________________________________________________________________________________________________________________________________________________" << endl;
    }
}

//funcion desarrollada para guardar datos por el usuario
void guardar(const tDatospas& list) {
    ofstream archivo;
    archivo.open("pascientes.txt");
    for (int i = 0; i < list.contador; i++) {
        archivo << list.datoslista[i].nom << endl;
        archivo << list.datoslista[i].id << endl;
        archivo << list.datoslista[i].edad << endl;
        archivo << list.datoslista[i].peso << endl;
        archivo << list.datoslista[i].estatura << endl;
        archivo << list.datoslista[i].sangre << endl;
        archivo << list.datoslista[i].cel << endl;
        archivo << list.datoslista[i].correo << endl;
    }
    archivo << "XXX" << endl;
    archivo.close();
}



//funcion desarrollada para eliminar datos por el usuario
void elimina(tDatospas& list, int& contador, int pos)
{
    for (int i = pos; i < contador; i++) {
        list.datoslista[i] = list.datoslista[i + 1];
    }
    color(hConsole, 10);
    system("cls");
    cout << "\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t|           PACIENTE ELIMINADO CORRECTAMENTE             |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------";
    color(hConsole, 7);
    list.contador--;
}
//funcion desarrollada para obtener un resultado que permitirra que la funcion anterio elimine datos
int datoelim(tDatospas list) {
    system("cls");
    int buscar;
    int pos;
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t    ------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t    |ELIMINAR/MODIFICAR PACIENTE |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t    ------------------------------" << endl << endl;
    color(hConsole, 7);
    cout << endl << endl << "\t\t\t\t\t\t\t INGRESE EL NUMERO DE CEDULA DEL PASCIENTE:  ";
    cin >> buscar;
    bool a = false;
    for (int i = 0; i < list.contador; i++) {
        if (list.datoslista[i].id == buscar) {
            return i;
            a = true;
        }
    }
    if (a == false) {
        return -1;
    }
}


//funcion desarrollada para consultar datos por el usuario
void consultarpaciente(const tDatospas& lista, int buscar) {
    bool a = false;
    system("cls");
    cout << "\n\n\n\n\n\n ";
    for (int i = 0; i < lista.contador; i++) {
        if (lista.datoslista[i].id == buscar) {
            color(hConsole, 14);
            cout << "\t\t\t\t" << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t\t|" << setw(15) << left << "CEDULA" << setw(25) << left << "|NOMBRE" << setw(21) << left << "|EDAD" << setw(11) << left << "|PESO" << setw(14) << left << "|ESTATURA" << setw(15) << left << "|T. SANGRE" << setw(20) << left << "|N. CELULAR" << setw(26) << left << "|CORREO" << "|" << endl;
            cout << "\t\t\t\t" << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            color(hConsole, 7);
            cout << "\t\t\t\t|";
            color(hConsole, 2);
            cout << setw(15) << left << list.datoslista[i].id;
            color(hConsole, 7);
            cout << "|" << setw(24) << left << list.datoslista[i].nom << "|" << setw(20) << left << list.datoslista[i].edad << "|" << setw(10) << left << list.datoslista[i].peso << "|" << setw(13) << left << list.datoslista[i].estatura << "|";
            color(hConsole, 4);
            cout << setw(14) << left << list.datoslista[i].sangre;
            color(hConsole, 7);
            cout << "|" << setw(19) << left << list.datoslista[i].cel << "|" << setw(25) << left << list.datoslista[i].correo << "|" << endl;
            cout << "\t\t\t\t" << "_____________________________________________________________________________________________________________________________________________________" << endl;

            a = true;

        }
    }
    if (a == false) {//en caso de no existeir en paciente
        color(hConsole, 4);
        string op;
        cout << "\t\t\t\t\t\t\t\t\t\t--------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t| EL PASCIENTE NO EXISTE |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t--------------------------" << endl << endl;
        color(hConsole, 7);
        cout << "\t\t\t\t\t\t\t DESEAS AGREGAR UN PACIENTE? (Si/No): ";
        cin >> op;
        system("cls");
        if (op == "si" || op == "Si" || op == "SI" || op == "sI") {
            agendarpaciente(list, info);
        }
    }
}


//funcion desarrollada para ordenar datos por el usuario
void ordenarBurburjapaciente(tDatospas& list, tHos& nom) {
    int i = 0;
    bool inter = true;
    tHos temp;
    if (list.contador == 0) {
        cout << endl << "ERROR! No existen productos en el registro" << endl << endl;
    }
    else {
        while ((i < list.contador - 1) && inter) {
            inter = false;
            for (int j = list.contador - 1; j > i; j--) {
                if (list.datoslista[j].nom < list.datoslista[j - 1].nom) {
                    temp = list.datoslista[j];
                    list.datoslista[j] = list.datoslista[j - 1];
                    list.datoslista[j - 1] = temp;
                    inter = true;
                }
            }
            if (inter) {
                i++;
            }
        }
    }
}
//funcion booleana que retornara un resultado para que la funcion anterior ordene los datos
bool operator<(tHos opIzq, tHos opDer) {
    return (opIzq.nom < opDer.nom);
}
