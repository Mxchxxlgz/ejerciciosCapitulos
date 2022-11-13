namespace Ejercicio2_2_3
{
    public class program
    {
        public static void Main()
        {
            int numero;
            int resultado;
            int doblado;

            console.writeLine("Por favor ingrese un numero");
            numero = Convert.ToInt32(Console.Readline())
            doblado = numero * 2;
            resultado = doblado * 25;
            Console.writeLine($" El resultado de la operacion es: {resultado}");
            
        }
    }
}