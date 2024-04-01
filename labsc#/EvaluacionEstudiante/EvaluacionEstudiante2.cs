using System;
namespace EvaluacionEstudiante2
{
    class Program
    {
        static void Main(string[]args)
        {
            Console.Write("Ingrese la nota del estudiante (0-20): ");
            double nota = double.Parse(Console.ReadLine());

            if(nota >= 11)
            {
                Console.WriteLine("El estudiante aprobo la prueba.");
            }
            if(nota < 11)
            {
                Console.WriteLine("El estudiante no aprobo la prueba.");
            }
        }
    }
}