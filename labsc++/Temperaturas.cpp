#include <iostream>
using namespace std;

int main()
{
    //Variables a utilizar
    int i;
    double promedio, temp, sumaTemp;

    for(i = 1; i <= 12; i++){
        cout <<"Temperatura"<< i <<endl;
        cout <<"Ingrese la temperatura: ";//Se le pide al usario que ingrese la temperatura
        cin >> temp;

        sumaTemp = sumaTemp + temp;
    }

    promedio = sumaTemp/12;
    cout <<"El promedio de las temperaturas del año es: "<<promedio<<"o"<<endl;

    return 0;
}