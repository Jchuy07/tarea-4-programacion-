#include <iostream>
#include "Archivo.h"

using namespace std;
int main() {
    int opcion;
    cout << "Ingrese la opcion" ;
    cin >> opcion;


    switch (opcion) {
        case 1:
            ejercicio1();
            break;

        case 2:
            ejercicio2();
            break;


        case 3:
            ejercicio3();
            break;

        case 4:
            ejercicio4();
            break;

        case 5:
            ejercicio5();
            break;
    }
    return 0;
}
