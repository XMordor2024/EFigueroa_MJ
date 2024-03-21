#include <iostream>
using namespace std;

int main()
{
    // variables//
    int base, altura, area;
    

    cout<< "Ingrese la base del rectangulo: "; //Aqui se ingresa la base de el rectangulo//
    cin>> base;

    cout<< "Ingrese la altura del rectangulo: "; // Aqui se ingresa la altura de el rectangulo//
    cin>> altura;

    area = base * altura;
    
    cout<< "El area del rectangulo es: "<<area<< endl;

    return 0;
}