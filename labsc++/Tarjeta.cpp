#include <iostream>
using namespace std;

int main()
{
    string estadoTarjeta;

    cout<< "Ingrese el estado de su tarjeta (A para activa, I para inactiva): "; //Aqui se coloca la A o la I para dejarle saber al sistema si la tarjeta esta activa o inactiva//
    cin >> estadoTarjeta;

    if (estadoTarjeta == "A" || estadoTarjeta == "a") {
        cout <<"Su tarjeta esta activa, puede hacer un prestamo." <<endl; //Si el usuario ingresa la A un mensaje saldra diciendo que la tarjeta esta activa y cualifica para un prestamo//
    }

    else if (estadoTarjeta == "I" || estadoTarjeta == "i") {
        cout <<"Su tarjeta no esta activa, no puede hacer un prestamo." <<endl; //Si el usuario ingresa la letra I un mensaje saldra diciendo que la tarjeta no es valida y no cualifica para un prestamo//
    }

    else {
        cout <<"Su tarjeta no es valida para hacer un prestamo." <<endl;
    }

    return 0;
}