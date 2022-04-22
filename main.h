// mysql_c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "proveedor.h"
#include <iostream>
#include <string>
using namespace  std;
int main() {
    int opc;
    string proveedor;
    //Proveedor p = Proveedor();
    //p.leer();
    while (1){
        cout << "Escoga el ejercicio que desee: " << endl;
    cout << "1.Ingreso: " << endl;
    cout << "2.Leer: " << endl;
    cout << "3.Actualizar: " << endl;
    cout << "4.Eliminar: " << endl;
    cin >> opc;

    switch (opc) {
    case 1:
        cout << "Ingrese proveedor:";
        getline(cin, proveedor);
        Proveedor p = Proveedor(proveedor);
        p.crear();
        system("pause");
    break;
    case 2:
        cout << "Lectura de proveedor:";
        Proveedor p = Proveedor(proveedor);
        p.leer();
        system("pause");
        break;
    case 3:
        cout << "Actualizacion de proveedor:";
        getline(cin, proveedor);
        Proveedor p = Proveedor(proveedor);
        p.actualizar();
        system("pause");
        break;
    case 4:
        cout << "Eliminar proveedor:";
        getline(cin, proveedor);
        Proveedor p = Proveedor(proveedor);
        p.eliminar();
        system("pause");
        break;

    }
    }
    return 0;
}


