#include <iostream>
#include <string> //incluimos la biblioteca para manejar objetos de tipo string
using namespace std;

// Definicion de la funcion Saludar que recibe un parametro de tipo string
void Saludar(string nombre)
{
    cout <<"Hola"<<nombre<< "!" <<endl;
}
int main()
{
    //Llamada a la funcion Saludar con el argumento "Juan"
    Saludar("Juan");
    return 0;
}