#include <iostream>
using namespace std;

int main()
{
    int n;

    //Se le pide al usuario que coloque el tamaño del arreglo
    cout <<"Ingrese el tamano de N para determinar el elemento del arreglo :" <<endl;
    cin >> n;

    int arreglo[n];
    //Aqui se le solicitan los elementos del arreglo

    cout <<"Ingrese los elementos del arreglo: " <<endl;
    for(int i = 0; i < n; i++) {
        cout <<"Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    //Aqui se calcula la suma de todos los elementos
    int suma = 0;
    for(int i = 0; i < n; i++) {
        suma += arreglo[i];
    }

    //Se imprime el resultado de la suma de todos los elementos
    cout <<"La suma de los elementos de el arreglo es: " << suma << endl;

    return 0;
}