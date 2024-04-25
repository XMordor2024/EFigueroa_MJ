#include <iostream>
using namespace std;

double calcularSueldo(double ventas) {
    double sueldoBase = ventas * 0.15;

    if(ventas >= 1500){
        sueldoBase += 125;
    }
    return sueldoBase;
}

int main() {
    double ventas;
    cout <<"Introduzca la cantidad de ventas: ";
    cin >> ventas;

    double sueldo = calcularSueldo(ventas);
    cout <<"El sueldo a pagar es: $"<< sueldo<< endl;

    return 0;
}