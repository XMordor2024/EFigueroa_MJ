#include <iostream>
using namespace std;

int main()
{
    //clasificando variables a utilizar
    int sumaCalificaciones = 0;
    int numeroEstudiante, promedio, calificacionEstudiante;
    string nombreEstudiante;

    //Se pide la cantidad de estudiantes al usuario
    cout <<"Ingrese la cantidad de estudiantes (no mas de 10) ";
    cin >> numeroEstudiante;


    if(numeroEstudiante <= 10) {
        //cuenta la cantidad de estudiantes

    //cuenta los 10 estudiantes y las calificaciones de ellos
    for(int i = 1; i <= numeroEstudiante; i++) {
        
        //Se le pide al usuario que coloque el nombre del estudiante
        cout <<"Estudiante # "<< i << ": ";
        cout <<"Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante;

        //Se le pide al usuario la puntuacion del estudiante
        cout <<"Ingrese la puntuacion de " <<numeroEstudiante <<": ";
        cin >> calificacionEstudiante;

        //Las calificaciones se acumulan
        sumaCalificaciones = sumaCalificaciones + calificacionEstudiante;

     }
    }
    else {
        cout <<"El numero de estudiante ingresado es mayor a 10"<<endl;
    }
    //El total de las calificaciones se divide por la cantidad de los estudiantes
    promedio = sumaCalificaciones/10;
    cout <<"El promedio de las calificaciones del grupo son "<<promedio;

    return 0;
}