#include<iostream>
#include "Hypermarket.h"
using namespace std;

void Hypermarket::menu()
{
    int opcion;

    do
    {

        cout << "+===================+" << endl;
        cout << "|     -HYPERMARKET-" << endl;
        cout << "| 1 - COMPRAR" << endl;
        cout << "| 2 - VENDER" << endl;
        cout << "| 3 - PAGOS" << endl;
        cout << "| 4 - INVENTARIO" << endl;
        cout << "| 5 -CIERRE Z" << endl;
        cout << "| 0 - SALIR" << endl;
        cout << "+===================+" << endl;

        cout << "QUE OPCION DESEA SELECCIONAR: ";
        cin >> opcion;
        cout << endl;

        while(opcion < 0 || opcion > 5)
        {

            cout << "ESE VALOR ES INEXISTENTE, POR FAVOR SELECCIONE OTRA OPCION: ";
            cin >> opcion;
            cout << endl;

        }

        switch(opcion)
        {

        case 1:
            /// Hypermarket::comprar();
            break;

        case 2:
            /// Hypermarket::vender();
            break;

        case 3:
            /// Hypermarket::pagos();
            break;

        case 4:
            /// Hypermarket::inventario();
            break;

        case 5:
            /// Hypermarket::cierreZ();
            break;

        }

    }
    while(opcion != 0);

}

