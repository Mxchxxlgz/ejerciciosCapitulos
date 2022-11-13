namespace Cap3_3_5
{
    public class program
    {
        public static void Main()
        {
            double factura;
            double descuento;
            int cantidadProduct;        
            double precio;
            double precioBruto;
            double iva = 0.12;
            double ivaCompra;

            console.writeline("Digite el precio del Producto");
            precio = double.parse(console.readline());

            console.writeline("Digite la cantidad que va a llevar");
            cantidadProduct = int.parse(console.readline());

            ivaCompra = (precio * cantidadProduct) * 0.12;
            
            console.writeline("El iva da un valor de: " + ivaCompra);

            precioBruto = (precio * cantidadProduct) + ivaCompra;

            if (precioBruto > 50000)
            {
                descuento = precioBruto * 0.05;
                factura = precioBruto - descuento;
            }
            else
            {
                factura = precioBruto;
            }

            console.writeline("El precio de la factura es: " + factura)
        }
    }
}