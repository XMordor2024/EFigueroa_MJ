#include <iostream>
using namespace std;

//Definicion de la funcion Sumar que recibe dos parametros de tipo int y retorna un valor int
int Sumar(int a, int b)
{
    return a + b; //Retorna la suma de a y b
}
int main()
{
    //Llama a la funcion Sumar con los argumentos 5 y 7
    int resultado = Sumar(5,7);

    //imprime el resultado de la suma
    cout <<"La suma es:"<<resultado<<endl;
    return 0;
}