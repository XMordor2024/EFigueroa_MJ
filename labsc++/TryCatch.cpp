#include <iostream>
using namespace std;

int main()
{
    float numero; // variable de tipo float
    int entero; // variable de tipo entero

    cout<< "Ingrese un numero: ";
    cin >> numero;

    entero = numero; //extracción valor entrado a entero

    try
    {
        
            if(numero != entero) //condicion si el numero ingresado no es igual a un entero
            {
                throw "El numero entero ingresado no es un numero entero: ";
            }
        

        cout<<"El numero entero ingresado es: "<<numero << endl;
    }
    catch(const char* mensaje)
    {
        cout<< "Excepcion capturada"<<mensaje<<endl;
    }

    return 0;
    
}