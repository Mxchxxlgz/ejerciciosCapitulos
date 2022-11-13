namespace ejercicio32
{
   class program
    {
        static void Main(String[] args)
        {
            Console.WriteLine("Digite un numero");
            int numero = int.Parse(Console.ReadLine());
            if (numero == 0)
            {
                Console.WriteLine("El numero"  + numero +   "es un numero neutro");
            }
            else if (numero > 0)
            {
                Console.WriteLine("El numero"  + numero +   "es un numero positivo");
            }
            else
            {
                Console.WriteLine("El numero"  + numero +   "es un numero negativo");
            }
            Console.ReadKey();
        }
    }
}