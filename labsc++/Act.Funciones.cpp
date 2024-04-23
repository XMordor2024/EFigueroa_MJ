#include <iostream>
using namespace std;

//Funcion para calcuar el sueldo del vendedor
double calcularSueldo(double ventas) {
    double sueldoBase = ventas * 0.15;

    if(ventas >= 1500) {
        sueldoBase += 125;
    }
    return sueldoBase;
}

int main() {
    double ventas;
    cout <<"Ingrese el cantidad de ventas realizadas por el vendedor: ";//Se le pide al usuario que ingrese la cantidad de
    cin >> ventas;                                                   //ventas del vendedor

    //Llamada a la funcion para calcular el sueldo y muestra el resultado
    double sueldo = calcularSueldo(ventas);
    cout <<"El sueldo a pagar al vendedor es: $" << sueldo << endl;

    return 0;
}