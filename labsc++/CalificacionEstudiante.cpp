#include <iostream>
using namespace std;

int main()
{
    //clasificando variables a utilizar
    int sumaCalificaciones = 0;
    int promedio, calificacionEstudiante;
    string nombreEstudiante;

    //cuenta los 10 estudiantes y las calificaciones de ellos
    for(int i = 1; i <= 10; i++) {
        
        //Se le pide al usuario que coloque el nombre del estudiante
        cout <<"Estudiante # "<< i << ": ";
        cout <<"Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante;

        //Se le pide al usuario la puntuacion del estudiante
        cout <<"Ingrese la puntuacion de " <<nombreEstudiante <<": ";
        cin >> calificacionEstudiante;

        //Las calificaciones se acumulan
        sumaCalificaciones = sumaCalificaciones + calificacionEstudiante;

    }
    //El total de las calificaciones se divide por la cantidad de los estudiantes
    promedio = sumaCalificaciones/10;
    cout <<"El promedio de las calificaciones del grupo son "<<promedio;

    return 0;
}