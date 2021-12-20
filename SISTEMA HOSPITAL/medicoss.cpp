#include "medicoss.h"


int menucitas_medi_pac() {
    int op;
    color(hConsole, 11);//CONSTANTE PARA CAMBIAR DE COLOR
    //presentamos el menu al usuario
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t-------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << "\t\t\t\t\t\t\t\t\t::::::::::::::::HOSPITAL CARLOS ANDRADE MARIN::::::::::::::::" << endl;
    cout << "\t\t\t\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout << "\t\t\t\t\t\t\t\t\t-------------------------------------------------------------" << endl;
    color(hConsole, 15);
    cout << "\t\t\t\t\t\t\t\t\t\t  :          1.-MENU CITAS              :" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  :                                     :" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  :          2.-MENU PACIENTES          :" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  :                                     :" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  :          3.-MENU MEDICOS            :" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  :                                     :" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  :          0.-SALIR                   :" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  ......................................." << endl;
    cout << "\t\t\t\t\t\t\t\t  Seleccione: ";
    //almacenamos la opcion que el usuario registro para poder ejecutar la tarea requerida segun el numero
    cin >> op;
    return op;

}


int buscarmedico() {
    int x;
    cout << "\n\n\n\n ";
    color(hConsole, 11);
    cout << "\t\t\t\t\t\t\t\t\t\t-----------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|         BUSCAR MEDICO           |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t-----------------------------------" << endl << endl;
    color(hConsole, 7);
    cout << "\t\t\t\tINGRESA EL NUMERO DE CEDULA DEL MEDICO: ";
    cin >> x;
    return x;
}



int menugeneralmedicos() {
    int op;
    //usamos un color para imrpimir nuestro menu
    color(hConsole, 11);
    //presentamos el menu al usuario
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|               MEDICOS               |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cout << "\t\t\t\t\t\t\t\t\t\t|    1.-REGISTRAR MEDICO              |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|    2.-MOSTRAR MEDICOS               |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|    3.-CONSULTAR MEDICOS             |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|    4.-MODIFICAR/ELIMINAR MEDICO     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|    0.-SALIR                         |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t  Seleccione: ";
    //almacenamos la opcion que el usuario registro para poder ejecutar la tarea requerida segun el numero
    cin >> op;
    return op;
}
//desarrollo de la funcion de agendar o agrerar un medico a l lista
void agendarmedico(tDatos1& lista1, tMedicos& datos1) {
    string x;
    do {
        cout << "\n\n\n\n\n";
        color(hConsole, 11);
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|          RESGISTRAR MEDICO          |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl << endl;
        color(hConsole, 7);
        //pedimos que el usuario ingrese los datos a utilizar
        //usamos los getline para que se puedan guardar datos con espacios en blanco
        cout << "\t\t\t\tINGRESE EL NUMERO DE CEDULA DEL DOCTOR:  ";
        cin >> datos1.cedula;
        cin.ignore(80, '\n');
        cout << "\t\t\t\tINGRESA EL NOMBRE COMPLETO DEL DOCTOR:  ";
        getline(cin, datos1.nombredoctor);
        cout << "\t\t\t\tINGRESE LA ESPECIALIDAD A LA QUE PERTENECE:  ";
        getline(cin, datos1.especialidad);
        cout << "\t\t\t\tINGRESE LA EDAD DEL MEDICO:  ";
        cin >> datos1.edad;
        cout << "\t\t\t\tINGRESE NUMERO TELEFONICO:  ";
        cin >> datos1.celular;
        cin.ignore(80, '\n');
        cout << "\t\t\t\tINGRESE EL CORRERO ELECTRONICO:  ";
        getline(cin, datos1.correo);

        cin.sync();
        //nos ayudara a limpiar la pantalla del programa
        system("cls");
        //en esta linea elegimos el color a usar en nuestro texto 
        color(hConsole, 14);
        //imprimimos la papeleta superior principal que nos dara la referencia de que dto s esta almacenando en cada persona
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t\t|" << setw(20) << left << "CEDULA" << "|" << setw(40) << left << "NOMBRE DOCTOR" << "|" << setw(25) << left << "ESPECIALIDAD" << "|" << setw(15) << left << "EDAD" << setw(21) << left << "|CELULAR" << setw(22) << left << "|CORREO ELECTRONICO" << "|" << endl;
        cout << "\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        color(hConsole, 7);
        cout << "\t\t\t\t|" << setw(20) << left << datos1.cedula << "|" << setw(40) << left << datos1.nombredoctor << "|" << setw(25) << left << datos1.especialidad << "|" << setw(15) << left << datos1.edad << "|" << setw(20) << left << datos1.celular << "|" << setw(21) << left << datos1.correo << "|" << endl;
        cout << "\t\t\t\t____________________________________________________________________________________________________________________________________________________" << endl;
        color(hConsole, 7);
        cout << endl << "\t\t\t\t\t\t\t¿LOS DATOS SON CORRECTOS?(Si/No/Salir): ";
        cin >> x;
        system("cls");
        //creamos condiciones, al momento de estar llena la lista el programa procedera a presentar el mensaje"maximo de medicos registrados", informandonos que ya no existe posibilidad de registrar mas medicos"
        if (lista1.contador == MAX)
        {
            //asignamos otro color a nuestro texto 
            color(hConsole, 4);
            cout << "\t\t\t\t\t----------------------------------" << endl;
            cout << "\t\t\t\t\t|  MAXIMO DE MEDICOS REGISTRADOS |" << endl;
            cout << "\t\t\t\t\t----------------------------------" << endl << endl;
            color(hConsole, 7);
        }
        else {
            bool com = true;
            if (x == "si" || x == "Si" || x == "SI" || x == "sI") {
                for (int i = 0; i < lista1.contador; i++) {//validar si ya esta o no registrado
                    if (lista1.datoslista1[i].cedula == datos1.cedula) {
                        com = false;
                    }
                }
                if (com == false) {//en caso de ya estar registrado
                    color(hConsole, 4);
                    cout << "\n\n\n\n\n\n ";
                    cout << "\t\t\t\t\t\t\t\t\t\t        ------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t        | MEDICO YA REGISTRADO |" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t        ------------------------" << endl << endl;
                    color(hConsole, 7);
                }
                else {//en caso de no estar registrado
                    color(hConsole, 10);
                    cout << "\n\n\n\n\n\n ";
                    cout << "\t\t\t\t\t\t\t\t\t\t    -------------------------------" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t    |DATOS GUARDADOS CORRECTAMENTE|" << endl;
                    cout << "\t\t\t\t\t\t\t\t\t\t    -------------------------------" << endl << endl;
                    lista1.datoslista1[lista1.contador] = datos1;
                    lista1.contador++;
                    color(hConsole, 7);
                }
            }
            else {//en caso de elegir no e ingresar denuevo los datos
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
        //esta condicion nos permitira almacenar con exito el medico si el usuario decide que los datos son correctos

    }//ceramos la condicion do 
    while (x == "no" || x == "No" || x == "NO" || x == "nO");
}
//desarrollo de la funcion de cargar un archivo
void cargarmedico(tDatos1& lista1, bool& ok) {
    tMedicos medico;
    ifstream archivo;
    char aux;
    lista1.contador = 0;
    //procedemos a abrir nuestro archivo de texto en el que se almacenaran los datos proporcionados
    archivo.open("medicos.txt");
    if (!archivo.is_open()) {
        ok = false;
    }
    else {
        ok = true;
       //extraemos la informacion del archivo
        getline(archivo, medico.nombredoctor);
        while ((medico.nombredoctor != "XXX") && (lista1.contador < MAX)) {
            getline(archivo, medico.especialidad);
            archivo >> medico.cedula;
            archivo >> medico.edad;
            archivo >> medico.celular;
            archivo >> medico.correo;
            archivo.get(aux);
            lista1.datoslista1[lista1.contador] = medico;
            lista1.contador++;
            getline(archivo, medico.nombredoctor);
        }
        //procedemos a cerrar nuestro archivo de texto  
        archivo.close();
    }
}

//desarrollo de la funcion que nos mostrara en pantalla los medicos que existen en el sistema
void mostrarmedico(tDatos1 lista1, int contador)
{
    //limpiamos la pantalla
    system("cls");
    cout << "\n\n\n\n\n\n ";
    //asignamos un color a nuestra impresion
    color(hConsole, 14);
    //imprimimos la papeleta superior principal que nos dara la referencia de que dto s esta almacenando en cada persona
    cout << "\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t|" << setw(20) << left << "CEDULA" << "|" << setw(40) << left << "NOMBRE DOCTOR" << "|" << setw(25) << left << "ESPECIALIDAD" << "|" << setw(15) << left << "EDAD" << setw(21) << left << "|CELULAR" << setw(22) << left << "|CORREO ELECTRONICO" << "|" << endl;
    cout << "\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    color(hConsole, 7);
    //a medida que se agreguen medicos el programa procedera a imprimirlos uno tras de otro
    for (int i = 0; i < lista1.contador; i++) {
        cout << "\t\t\t\t|" << setw(20) << left << lista1.datoslista1[i].cedula << "|" << setw(40) << left << lista1.datoslista1[i].nombredoctor << "|" << setw(25) << left << lista1.datoslista1[i].especialidad << "|" << setw(15) << left << lista1.datoslista1[i].edad << "|" << setw(20) << left << lista1.datoslista1[i].celular << "|" << setw(21) << left << lista1.datoslista1[i].correo << "|" << endl;
        cout << "\t\t\t\t____________________________________________________________________________________________________________________________________________________" << endl;
        color(hConsole, 7);
    }
}

//desarrrollo de la funcion guardar
void guardar(const tDatos1& lista) {
    ofstream archivo;
    //prodcedemos a abrir nuestro archivo de nuevo y procedemos a guardar la informacion 
    archivo.open("medicos.txt");
    //guardar los datos
    for (int i = 0; i < lista.contador; i++) {
        archivo << lista.datoslista1[i].nombredoctor << endl;
        archivo << lista.datoslista1[i].especialidad << endl;
        archivo << lista.datoslista1[i].cedula << endl;
        archivo << lista.datoslista1[i].edad << endl;
        archivo << lista.datoslista1[i].celular << endl;
        archivo << lista.datoslista1[i].correo << endl;
    }
    archivo << "XXX" << endl;
    //cerramos nuestro archivo de texto 
    archivo.close();
}

//desarrollo de la funcion consultar la informacion de un medico

void consultarmedico(tDatos1& lista1, int buscar) {
    //decalaracion de una variable boleana
    bool a = false;
    //limpiamos la pantalla
    system("cls");
    //buscar medico por medio de la cedula
    for (int i = 0; i < lista1.contador; i++) {
        if (lista1.datoslista1[i].cedula == buscar) {
            color(hConsole, 14);
            cout << "\n\n\n\n\n\n ";
            cout << "\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t\t|" << setw(20) << left << "CEDULA" << "|" << setw(40) << left << "NOMBRE DOCTOR" << "|" << setw(25) << left << "ESPECIALIDAD" << "|" << setw(15) << left << "EDAD" << setw(21) << left << "|CELULAR" << setw(22) << left << "|CORREO ELECTRONICO" << "|" << endl;
            cout << "\t\t\t\t----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            color(hConsole, 7);
            cout << "\t\t\t\t|" << setw(20) << left << lista1.datoslista1[i].cedula << "|" << setw(40) << left << lista1.datoslista1[i].nombredoctor << "|" << setw(25) << left << lista1.datoslista1[i].especialidad << "|" << setw(15) << left << lista1.datoslista1[i].edad << "|" << setw(20) << left << lista1.datoslista1[i].celular << "|" << setw(21) << left << lista1.datoslista1[i].correo << "|" << endl;
            cout << "\t\t\t\t____________________________________________________________________________________________________________________________________________________" << endl;
            color(hConsole, 7);
            a = true;
        }
    }
    if (a == false) {//en caso de no encontrar el medico
        string op;
        system("cls");
        cout << "\n\n\n\n";
        color(hConsole, 4);
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|        MEDICO NO ENCONTRADO         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl << endl;
        color(hConsole, 7);
        //nos permite preguntarle al usuario si desea agregar un medico y poder agendarlo de manera correcta
        cout << "\t\t\t\t\t\t\t ¿DESEAS REGISTRAR UN NUEVO MEDICO?(Si/No): ";
        //almacena la respuesta del usuario
        cin >> op;
        system("cls");
        if (op == "si" || op == "Si" || op == "SI" || op == "sI") {
            //ingresamos de nuevo a agregar el medico
            agendarmedico(lista1, datos1);
        }
    }
}

//ordenar priero pòr el nombre
void ordenarBurburjaaMedicos(tDatos1& lista, tMedicos& stock) {
    int i = 0;
    bool inter = true;
    tMedicos temp;
    if (lista.contador == 0) {
        cout << endl << "ERROR! No existen productos en el registro" << endl << endl;
    }
    else {
        while ((i < lista.contador - 1) && inter) {
            inter = false;
            for (int j = lista.contador - 1; j > i; j--) {
                if (lista1.datoslista1[j].nombredoctor < lista.datoslista1[j - 1].nombredoctor) {
                    temp = lista1.datoslista1[j];
                    lista1.datoslista1[j] = lista1.datoslista1[j - 1];
                    lista1.datoslista1[j - 1] = temp;
                    inter = true;
                }
            }
            if (inter) {
                i++;
            }
        }
    }
}
//ordenar segundamente por especialidad
void ordenarBurburjaaMedicos2(tDatos1& lista, tMedicos& stock) {
    int i = 0;
    bool inter = true;
    tMedicos temp;
    if (lista.contador == 0) {
        cout << endl << "ERROR! No existen productos en el registro" << endl << endl;
    }
    else {
        while ((i < lista.contador - 1) && inter) {
            inter = false;
            for (int j = lista.contador - 1; j > i; j--) {
                if (lista1.datoslista1[j].especialidad < lista.datoslista1[j - 1].especialidad) {
                    temp = lista1.datoslista1[j];
                    lista1.datoslista1[j] = lista1.datoslista1[j - 1];
                    lista1.datoslista1[j - 1] = temp;
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
bool operator<(tMedicos opIzq, tMedicos opDer) {
    return (opIzq.nombredoctor < opDer.nombredoctor);
}


//desarrollo de la funcion que permite eliminar a algun medico que ya se encontraba registradao
void elimina(tDatos1& lista1, int& contador, int pos)
{
    for (int i = pos; i < contador; i++) {
        lista1.datoslista1[i] = lista1.datoslista1[i + 1];
    }
    color(hConsole, 10);
    //limpiamos la pantalla
    system("cls");
    //nos permite verificar que el medico ha sido eliminado de forma correcta
    cout << "\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t|         MEDICO ELIMINADO CORRECTAMENTE             |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t------------------------------------------------------";
    color(hConsole, 7);
    lista1.contador--;
}
//esta funcion nos permite acceder al medico a eliminar a traves de su numero de cedula
int datoelim(tDatos1 list) {
    system("cls");
    int buscar;
    int pos;
    color(hConsole, 7);
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     MODIFICAR/ELIMINAR PACIENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl << endl;
    color(hConsole, 15);
    //solicitamos al usuario el numero de cedula del medico para poder verificar su informacion y si es el medico que realmente se desea eliminar
    cout << "\t\t\t\t\t\t\t INGRESE EL NUMERO DE CEDULA DEL MEDICO:  ";
    cin >> buscar;
    bool a = false;
    for (int i = 0; i < list.contador; i++) {
        if (lista1.datoslista1[i].cedula == buscar) {//retorna la posicion del medico buscardo
            return i;
            a = true;
        }
    }
    if (a == false) {//en caso de no haber el medico regresa - para imprimir que no existe
        return -1;
    }
}
int menumodificarmedico() {//MENU PARA SOLICITAR QUE MODIFCIAR
    int op;
    do {
        cout << endl << endl;
        color(hConsole, 4);
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR PACIENTE         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        color(hConsole, 15);
        cout << "\t\t\t\t\t\t\t\t\t\t|    1.-ELIMINAR MEDICO               |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    2.-MODIFICAR NOMBRE              |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    3.-MODIFICAR ESPECIALIDAD        |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    4.-MODIFICAR EDAD                |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    5.-MODIFICAR CELULAR             |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    6.-MODIFICAR CORREO              |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t|    0.-SALIR                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
        color(hConsole, 7);
        cout << "\t\t\t\t\t\t\t\t\t\t      Seleccione: ";
        cin >> op;
        if (op < 0 || op>6) {//VALIDAR OPCIONES
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
void modificarnombremedico(tDatos1& lista1, int pos) {//modifcar el nombre del medico a buscar
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR MEDICO           |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE EL NUEVO NOMBRE DEL MEDICO:  ";
    getline(cin, lista1.datoslista1[pos].nombredoctor);
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}
void modificarespecialidad(tDatos1& lista1, int pos) {//modificar la especialidad del medico a buscar
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR MEDICO           |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE LA NUEVA ESPECIALIDAD DEL MEDICO:  ";
    getline(cin, lista1.datoslista1[pos].especialidad);
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}
void modificaredadmedico(tDatos1& lista1, int pos) {//modificar la edad del medico a buscar
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR MEDICO           |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE LA NUEVA EDAD DEL MEDICO:  ";
    cin >> lista1.datoslista1[pos].edad;
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}
void modificarcelularmedico(tDatos1& lista1, int pos) {//modificar el celular del medico a buscar
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR MEDICO           |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE EL NUEVO NUMERO CELULAR DEL MEDICO:  ";
    cin >> lista1.datoslista1[pos].celular;
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}
void modificarcorreomedico(tDatos1& lista1, int pos) {//modifcar el correo del medico a buscar
    color(hConsole, 4);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|          MODIFICAR MEDICO           |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 15);
    cin.ignore(80, '\n');
    cout << "\t\t\t\t\t\t\t INGRESE EL NUEVO CORREO DEL MEDICO:  ";
    cin >> lista1.datoslista1[pos].correo;
    system("cls");
    color(hConsole, 10);
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|     DATO GUARDADO CORRECTAMENTE     |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t---------------------------------------" << endl;
    color(hConsole, 7);
}
