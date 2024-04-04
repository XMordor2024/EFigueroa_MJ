using System;

namespace ValidacionTarjeta{
    class Program{
        static void Main(string[]args){
            Console.WriteLine("Ingrese un 1 para tarjeta activa o 0 para tarjeta inactiva: "); //Aquí se le pide al usuario que iingrse un valor para verificar la validacion de su tarjeta//
            int tarjeta = int.Parse(Console.ReadLine());

            if(tarjeta == 1){
            Console.WriteLine("Su tarjeta es válida."); //En esta linea de codigo si el usuario ingresa el numero 1 un mensaje saldra diciendo que su tarjeta es valida.//
            }

            if(tarjeta == 0){
            Console.WriteLine("Su tarjeta no es válida.");
        }
    }
    } 
}