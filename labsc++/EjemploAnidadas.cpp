#include <iostream>
using namespace std;

int main()
{
    int miembroteatro;
    int numEntradas;

    cout <<"Eres miembro del teatro? ";
    cin >> miembroteatro;

    cout <<"Ingrese sus entradas: ";
    cin >> numEntradas;

    if(miembroteatro == 1) {
        if (numEntradas > 5){
            cout <<"Aplicar descuento de 15%"<<endl;
        }
        else {
            cout <<"Aplicar descuento de 10%"<<endl;
        }
    }
    
    else{
        if(numEntradas > 10) {
            cout <<"Aplicar descuento de 5%"<<endl;
        }
        else {
            cout <<"No aplicar descuento"<<endl;
        }
    }
        return 0;
}