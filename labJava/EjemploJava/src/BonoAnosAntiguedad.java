import java.util.Scanner;

public class BonoAnosAntiguedad{
    public static void main(String[]args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese la antiguedad del empeado (en años): "); //Aqui se ingresa la cantidad de años de antiguedad del empleado//
        int antiguedad = scanner.nextInt();

        if(antiguedad >= 5){
            System.out.println("Es elegible para el bono, recibirá $1000."); //En esta linea de codigo se deja saber si el empleado es elegible//
        }
        if(antiguedad < 5){
            System.out.println("El empleado no es elegible para el bono."); //En esta linea de codigo se deja saber si el empleado no es elegible para el bono//
        }
        scanner.close();
    }
}
