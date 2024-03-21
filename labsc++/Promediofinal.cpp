#include <iostream>
using namespace std;

int main()
{
    // Definir variables
    int Examen1, Examen2, Examen3, Examen4, promediofinal;
    

    cout<< "Ingrese el promedio de el primer examen: ";
    cin>> Examen1;

    cout<< "Ingrese el promedio de el segundo examen: ";
    cin>> Examen2;

    cout<< "Ingrese el promedio de el tercer examen: ";
    cin>> Examen3;

    cout<< "Ingrese el promedio de el cuarto examen: ";
    cin>> Examen4;
    
    promediofinal = Examen1 + Examen2 + Examen3 + Examen4 /4;
    
    cout<< "El promedio final es "<<promediofinal<<"."<<endl;

    return 0;
}