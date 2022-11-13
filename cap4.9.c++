namespace Cap4_7
{
    public class program
    {
        public static void Main()
        {
            int N3;
            int N4;
            String SoR;
            int result;

            console.writeline("Digite el Primer Numero: ");
            N3 = int.parse(console.readline());
            
            console.writeline("Digite el Segundo Numero: ");
            N4 = int.parse(console.readline());

            console.writeline("Para sumar escriba S y para restar R ");
            SoR = console.readline();

            switch (SoR)
            {
            case "s":
                result = N3 + N4;
                console.writeline($"El resultado es: {result}");
                break;

            case "r":
                result = N3 - N4;
                console.writeline($"El resultado es: {result}");
                break;
            
            default:
                console.writeline($"El resultado es: {result}");
                break;
            }
            
        }
    }
}