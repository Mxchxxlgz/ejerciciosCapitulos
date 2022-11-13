namespace Ejercicios
{
    public class Sueldo
    {
        public static void Main()
        {
            int ht, pg, sueldodia, sueldosemanal;
            int semana = 7;

            Console.WriteLine("Ingrese las horas que trabajo");
            ht = int.Parse(Console.ReadLine());

            Console.WriteLine("Ingrese valor de la hora de trabajo");
            pg = int.Parse(Console.ReadLine());

            sueldodia = ht * pg;

            sueldosemanal = sueldodia * semana;

            Console.WriteLine($"El sueldo semanal es {sueldosemanal}");

        }
    }
}