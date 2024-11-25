/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double usdPrecio = 48.69;
    double usdToCad = 1.32;
    double cadToUsd = 0.76;

    double importeEnCAD = usdPrecio * usdToCad;

    cout << fixed << setprecision(2);
    cout << "Necesitas cambio de " << importeEnCAD << " CAD al comprar el juego de Cull of Duty III de $48.69 USD." << endl;

    return 0;
}