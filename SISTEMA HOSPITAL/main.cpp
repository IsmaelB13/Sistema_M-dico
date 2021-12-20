
#include <iostream>
using namespace std;

int main()
{
    int vuelo[10], op, i, posicion;
    int asientos = 0;
    int otro = 0;

    for (i = 0; i < 10; i++)
        vuelo[i] = 0;

    do
    {
        cout << "--Sistema  de Reservaciones--" << endl << endl;
        cout << "Ingrese el numero 1 para primera clase" << endl;
        cout << "Ingrese el numero 2 para clase economica" << endl;
        cout << "Ingrese la opción a usar: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "--Bienvenido a primera clase--" << endl;
            for (i = 0; i < 5; i++)
            {
                cout << "Asiento " << (i + 1);
                if (vuelo[i] == 0)
                {
                    asientos++;
                    cout << " Desocupado"; \
                        cout << endl;
                }
                else  cout << " Ocupado";
                cout << endl;
            }
            if (asientos == 0)
            {
                cout << "no hay disponibles mas asientos en primera clase" << endl;
                cout << "desea un asiento de clase economica" << endl;
                cout << " digite 1)si  0)no : ";
                cin >> otro;
                cout << endl;
                if (otro == 0)
                    cout << "El siguiente vuelo parte en tres horas" << endl << endl;
            }
            else
            {
                do
                {
                    cout << "Introduzca el numero de asiento que desea usar :  ";
                    cin >> posicion;
                } while (posicion < 0 || posicion>5);
                if (vuelo[posicion - 1] == 1)
                    cout << "asiento ocupado";
                else
                {
                    vuelo[posicion - 1] = 1;
                    cout << "-----------------------------------" << endl;
                    cout << "\t\tAerolinea Tame" << endl << "\tAsiento numero : " << posicion << endl << "\tPrimera  clase" << endl;
                    cout << "-----------------------------------" << endl;
                }

            }
            break;
        case 2: asientos = 0;
            cout << "--Bienvenido a Clase economica--";
            cout << endl;
            for (i = 5; i < 10; i++)
            {
                cout << "asiento " << (i + 1);
                if (vuelo[i] == 0)
                {
                    asientos++;
                    cout << " Desocupado";
                    cout << endl;
                }
                else cout << " Ocupado";
                cout << endl;
            }
            if (asientos == 0)
            {
                cout << "no hay disponibles mas asientos en clase economica";
                cout << "desea un asiento de primera clase" << endl;
                cout << "1)si 0)no : ? ";
                cin >> otro;
                if (otro == 0)
                    cout << " El siguiente vuelo parte en tres otras" << endl;
            }
            else
            {
                do {
                    cout << "introduzca el numero de asiento que desea : ";
                    cin >> posicion;
                    cout << endl;
                    if (posicion < 5 || posicion>10)
                        cout << "la clase economica esta conformada por los asientos del numero 5 al 10";
                } while (posicion < 5 || posicion> 10);
                if (vuelo[posicion - 1] == 1)
                    cout << "asiento ocupado";
                else
                {
                    vuelo[posicion - 1] = 1;
                    cout << "-----------------------------------" << endl;
                    cout << "\t\tAerolinea Tame" << endl << "\tAsiento numero : " << posicion << endl << "\tClase economica" << endl;
                }   cout << "-----------------------------------" << endl;

            }
            break;
        case 0: cout << "Reservaciones llenas" << endl;
            break;
        default: cout << "Error. esta es una opción no valida";
        }

    } while (op != 0 || otro == 1);

    return 0;
}
