#include <iostream>
using namespace std;

int main()
{
    int sumaCalificaciones = 0;
    int promedio;
    string nombreEstudiante;
    int calificacionestudiante;
    int cantidadestudiantes;

    cout <<"Ingrese la cantidad total de estudiantes (no mas de 10): ";
    cin >> cantidadestudiantes;

    if(cantidadestudiantes > 10 || cantidadestudiantes <= 0) {
        cout <<"La cantidad de estudiantes debe ser un numero menor a 10";

        return 1;
    }
}