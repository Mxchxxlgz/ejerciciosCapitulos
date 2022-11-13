namespace ejercicio2_4_
{
    public class clase
    {
        public static void Main()
        {
            int num1;
            int num2;
            int num3;
            int num4;

            int sum;
            double media;
            int produc;

            console.writeline("Digite el Primer numero");
            num1 = int.Parse(console.readline());

            console.writeline("Digite el Segundo numero");
            num2 = int.Parse(console.readline());

            console.writeline("Digite el Tercer numero");
            num3 = int.Parse(console.readline());

            console.writeline("Digite el Cuarto numero");
            num4 = int.Parse(console.readline());

            produc = num1 * num2 * num3* num4;
            sum = num1 + num2 + num3 + num4;
            media = sum/4;

            console.writeline($"El resultado de la suma es {sum}, el producto es {product}, y la media {media}");

        }
    }
}