namespace Cap4
{
    public class program
    {
        public static void Main()
        {
            int numeroUno;
            int numeroDos;

            console.writeline("Digite el numero mayor: ");
            numeroUno = int.parse(console.readline());

            console.writeline("Digite el numero menor: ");
            numeroDos = int.parse(console.readline());

            if (numeroUno % numeroDos == 0)
            {
                console.writeline(numeroDos + " es divisor de " + numeroUno);
            }
        }
    }
}