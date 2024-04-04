#include <iostream>
using namespace std;

int main()
{
    int tipo_instrumento;

    cout <<"1. Guitarras"<<endl;
    cout <<"2. Pianos"<<endl;
    cout <<"3. Baterias"<<endl;
    cout <<"4. Violines"<<endl;
    cout <<"5. Flautas"<<endl;
    cout <<"Ingrese el tipo de instrumento"<<endl;
    cin >> tipo_instrumento;


    switch(tipo_instrumento)
    {
        case 1: //Guitarras
            cout <<"El descuento es del 10%"<<endl;
            break;

        case 2: //Pianos
            cout <<"El descuento es del 15%"<<endl;
            break;

        case 3: //Baterías
            cout <<"El descuento del 20%"<<endl;
            break;

        case 4: //Violín
            cout <<"El descuento es del 12%"<<endl;
            break;

        case 5: //Flauta
            cout <<"El descuento es del 8%"<<endl;
            break;

        default: //Si el instrumento ingresado no esta en la lista
            cout <<"Instrumento NO reconocido. Intente denuevo."<<endl;
    }

    return 0;
}