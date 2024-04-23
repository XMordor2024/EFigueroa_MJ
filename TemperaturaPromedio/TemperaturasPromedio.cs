using System;
namespace TemperaturasPromedio
{
    class program
    {
        static void Main(string[]args)
        {
            //Se identifican las variables a utilizar
            int i = 1;
            double promedio;
            double temp = 0;
            double sumaTemp = 0;

            //En esta linea de codigo se comienza el ciclo de el ejercicio
            do{

                Console.WriteLine("Temperatura" + i);
                Console.WriteLine("Ingrese la temperatura: ");
                temp = double.Parse(Console.ReadLine());
                i++;

                sumaTemp = sumaTemp + temp;

                promedio = sumaTemp/12;
            }
            while(i <= 12);

            Console.WriteLine("La temperatura promedio es: "+promedio+"o");
        }
    }
}