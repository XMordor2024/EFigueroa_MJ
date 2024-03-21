#include <iostream>
using namespace std;

int main()
{
    // variables 
    int yearact, yearborn, edadaprox;
    

    cout<< "Ingrese el year actual: ";
    cin>> yearact;

    cout<< "Ingrese el year en que nacio: ";
    cin>> yearborn;

    edadaprox = yearact - yearborn;
    
    cout<< "La edad aproximada es: "<<edadaprox<<"."<<endl;

    return 0;
}