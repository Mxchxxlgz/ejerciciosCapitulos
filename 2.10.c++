namespace Ejercicios
{
    public class Clase
    {
        public static void Main()
        {
            int mts;

            Console.WriteLine("Escriba los metros");
            mts = Convert.ToInt32(Console.ReadLine());

            double pulgada = mts * 39.37;

            Console.WriteLine($"El valor en pulgadas es {pulgada}");
        }
    }
}