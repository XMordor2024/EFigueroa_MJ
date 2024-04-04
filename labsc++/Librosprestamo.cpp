#include <iostream>
using namespace std;

int main()
{
    string letra, a; //Variables a utilizar

    cout <<"Ingrese un numero (a) para verificar validacion: "<<endl; //Se le pide al usuario que verifique si su tarjeta es valida
    cin >> a;

    if(a == "a"){
        cout <<"Su tarjeta es valida."<<endl;
    }

    else{
        cout <<"Su tarjeta es invalida."<<endl; //Si el usuario no ingresa la letra adecuada para validacion saldra un mensaje diciendo que la tarjeta no es valida
    }

    return 0;
}