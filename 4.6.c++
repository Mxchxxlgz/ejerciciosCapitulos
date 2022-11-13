namespace Ejercicio4.6
{
    internal class program
    {
        static void Main()
        {
            double cantidad, cantidadAño=0, ahorroMes;
            
            for (int i = 1; i < 13 ; i++)
            
            console.writeline("Proceso " + i);
            console.writeline("Digite el valor a depositar");

            cantidad = double.parse(Console.readline());
            cantidadAño = cantidadAño + cantidad;
            ahorroMes = cantidadAño;

            console.writeline("El valor de la cantidad del mes es de " + ahorroMes);
        }
        console.writeline("El ahorro de un año es de " + cantidadAño);
    }
}