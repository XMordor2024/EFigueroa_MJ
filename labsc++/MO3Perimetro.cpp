#include <iostream>
using namespace std;

int main()
{
    // variables//
    int base, altura, area, perimetro;
    

    cout<< "Ingrese la base del rectangulo: "; //Aqui se ingresa la base de el rectangulo//
    cin>> base;

    cout<< "Ingrese la altura del rectangulo: "; // Aqui se ingresa la altura de el rectangulo//
    cin>> altura;

    area = base * altura;
    
    cout<< "El area del rectangulo es: "<<area<< endl; //Este end es para terminar este codigo//

    cout<< "Ingrese la altura del rectangulo: ";
    cin>> altura;

    cout<< "Ingrese la base del rectangulo: ";
    cin>> base;

    perimetro = altura + base;

    cout<< "El perimetro del rectangulo es: "<<perimetro<< endl;

    return 0;
}