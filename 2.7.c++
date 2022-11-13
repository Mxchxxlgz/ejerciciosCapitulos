namespace Ejercicios
{
    public class Galones
    {
        public static void Main()
        {
            double lv, pg, cg, vv;
            double lpg = 3.785;

            Console.WriteLine("Ingrese los litros que va a vender");
            lv = double.Parse(Console.ReadLine());

            cg = lv / lpg;

            Console.WriteLine("Ingrese el valor del Galon");
            pg = double.Parse(Console.ReadLine());

            vv = cg * pg;

            Console.WriteLine($"El valor de la venta es {vv}");
            Console.WriteLine($"la cantidad de galones es {cg}");
        }
    }
}