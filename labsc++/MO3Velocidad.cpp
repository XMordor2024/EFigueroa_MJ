#include <iostream>
using namespace std;

int main()
{
    // variables 
    int distancia, velocidad, tiempo;
    

    cout<< "Ingrese el velocidad: ";
    cin>> velocidad;

    cout<< "Ingrese la tiempo: ";
    cin>> tiempo;

    distancia = velocidad * tiempo;
    
    cout<< "El promedio final es "<<distancia<<"."<<endl;

    return 0;
}