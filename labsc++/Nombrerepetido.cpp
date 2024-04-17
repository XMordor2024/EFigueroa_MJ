#include <iostream>
using namespace std;

int main()
{
    //Aqui se utiliza el commando de string ya que se le pide al usuario el nombre
    string nombre;
    int numero = 10;

    cout <<"Ingrese su nombre: ";
    cin >> nombre;

    //En esta linea de codigo el for se utiliza para indicar cuantas veces se repetira el nombre
    for(int i = 1; i <= numero; i++)
    {
        cout <<"Hola, "<<nombre <<endl;//Un mensaje sale diciendo Hola con el nombre de el usuario
    }

    return 0;
}