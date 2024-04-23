#include <iostream>
using namespace std;

int sumaRango(int inicio, int fin); //Definir funcion

int main() {
    int inicio, fin, resultado;

    cout <<"Introduce el numero inicial del rango: ";
    cin >> inicio;

    cout <<"Introduce el numero final del rango: ";
    cin >> fin;

    resultado = sumaRango(inicio, fin);//Llamada a la funcion

    cout <<"La suma de todos los numeros enteros en el rango ["<<inicio <<", "<< fin <<"] es: "<< resultado <<endl;

    return 0;
}

int sumaRango(int inicio, int fin)//Funcion
{
    int suma = 0;

    for(int i = inicio; i <= fin; i++)//Ciclo que se ejecutara mientras i sea menor al valor entrado como numero final
    {
        //suma += i;
        suma = suma + i;
    }
    return suma;
}