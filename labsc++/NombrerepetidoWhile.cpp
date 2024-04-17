#include <iostream>
using namespace std;

int main()
{
    int i = 1;//Variables a utilizar
    string nombre;

    cout <<"Ingrese su nombre: ";//Se le pide al usuario que ingrese su nombre
    cin >> nombre;

    while(i <= 10){
        cout <<"Hola,"<<nombre<<endl;
        i++;
    }
    return 0;
}