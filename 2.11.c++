namespace Ejer5
{
    public class program
    {
        public static void Main()
        {
            double pago, metrosP, La, Lb, Lc, preciosCm, totPrec;

            console.writeline("Digite el lado ancho de la alberca");
            La = double.parse(Console.Readline());

            console.writeline("Digite el largo de la alberca");
            Lb = double.parse(Console.Readline());

            console.writeline("Digite la altura de la alberca");
            Lc = double.parse(Console.Readline());

            console.writeline("Digite el precio del agua para llenar la alberca por metro cubico");
            preciosCm = double.parse(Console.Readline());

            metrosP = La * Lb * Lc;
            totPrec = metrosP * preciosCm;

            console.writeline($"La cantidad de metros cubicos sera {metrosP}cm3");
            console.writeline($"La cantidad de metros cubicos sera {totPrec}cm3");
        }
    }
}