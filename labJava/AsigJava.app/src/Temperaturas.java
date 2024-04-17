import java.util.Scanner;

public class Temperaturas.java {
    public static void main(String[] args) throws
    Exception{
        Scanner scanner = new Scanner(System.in);

        //Variables a utilizar en el programa
        int i = 1;
        double promedio;
        double temp = 0;
        double sumaTemp = 0;

        while(i <= 12){
            System.out.println("Temperatura"+ i);
            System.out.print("Ingrese la temperatura: ");
            temp = scanner.nextDouble();
            i++;

            sumaTemp = sumaTemp + temp;
        }
        promedio = sumaTemp/12; //Se divide el total de la suma por doce

        System.out.println("El promedio de las temperaturas del año es:" + promedio + "o");
        scanner.close();
    }
}