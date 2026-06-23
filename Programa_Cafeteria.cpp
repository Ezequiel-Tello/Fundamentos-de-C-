#include <iostream>
#include <vector>
#include <string>

using namespace std;
// ¡PROGRAMA PARA CAFETERIA!
struct Producto
{
    string nombre;
    int cantidad;
    float precio;
    int mesa;
};

// --- FUNCIÓN 1: CORREGIDA ---
void tomarPedido(vector<Producto> &productosVendidos, float &gananciasTotales)
{
    Producto nuevoPedido;

    cout << "\n--- NUEVO PEDIDO ---" << endl;
    cout << "Nombre del producto: ";

    // CORRECCIÓN: Usamos getline para aceptar espacios como "cafe con leche"
    cin.ignore(); // Limpia cualquier residuo anterior antes de leer texto
    getline(cin, nuevoPedido.nombre);

    cout << "Cantidad: ";
    cin >> nuevoPedido.cantidad;
    cout << "Precio por unidad: ";
    cin >> nuevoPedido.precio;
    cout << "Numero de mesa: ";
    cin >> nuevoPedido.mesa;

    productosVendidos.push_back(nuevoPedido);
    gananciasTotales += (nuevoPedido.cantidad * nuevoPedido.precio);
    cout << "Pedido registrado exitosamente." << endl;
}

// --- FUNCIÓN 2 ---
void aplicarDescuento(const vector<Producto> &productosVendidos, float &gananciasTotales)
{
    if (productosVendidos.empty())
    {
        cout << "\nNo hay pedidos registrados aún para aplicar descuento." << endl;
        return;
    }

    Producto ultimoPedido = productosVendidos.back();
    float subtotal = ultimoPedido.cantidad * ultimoPedido.precio;

    if (subtotal > 10000)
    {
        float descuento = subtotal * 0.10;
        gananciasTotales -= descuento;
        cout << "\n¡Descuento aplicado! El pedido supera los $10.000." << endl;
        cout << "Se descontaron: $" << descuento << endl;
    }
    else
    {
        cout << "\nEl pedido no supera los $10.000, no aplica descuento." << endl;
    }
}

// --- FUNCIÓN 3 ---
void verResumen(const vector<Producto> &productosVendidos, float gananciasTotales)
{
    cout << "\n--- RESUMEN DE VENTAS ---" << endl;
    cout << "Total de pedidos realizados: " << productosVendidos.size() << endl;

    cout << "Detalle de productos vendidos:" << endl;
    for (size_t i = 0; i < productosVendidos.size(); i++)
    {
        cout << "- " << productosVendidos[i].nombre
             << " (Mesa " << productosVendidos[i].mesa << "): "
             << productosVendidos[i].cantidad << " unidades." << endl;
    }

    cout << "Ganancias acumuladas hasta el momento: $" << gananciasTotales << endl;
}

int main()
{
    vector<Producto> pedidos;
    float gananciasAcumuladas = 0.0f;
    int opcion = 0;

    while (opcion != 4)
    {
        cout << "\n============================" << endl;
        cout << "      CAFE - MENU           " << endl;
        cout << "============================" << endl;
        cout << "1. Tomar pedido" << endl;
        cout << "2. Aplicar descuento al ultimo pedido" << endl;
        cout << "3. Ver resumen de ventas" << endl;
        cout << "4. Salir y Cerrar Caja" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (opcion == 1)
        {
            tomarPedido(pedidos, gananciasAcumuladas);
        }
        else if (opcion == 2)
        {
            aplicarDescuento(pedidos, gananciasAcumuladas);
        }
        else if (opcion == 3)
        {
            verResumen(pedidos, gananciasAcumuladas);
        }
        else if (opcion == 4)
        {
            cout << "\n============================" << endl;
            cout << "      CIERRE DE CAJA        " << endl;
            cout << "============================" << endl;
            cout << "El monto total de efectivo con el que se cierra la caja es: $" << gananciasAcumuladas << endl;
            cout << "Programa finalizado. ¡Hasta luego!" << endl;
        }
        else
        {
            cout << "Opcion invalida. Intente de nuevo." << endl;
            // Si el usuario mete una letra en el menú por error, esto evita otro bucle infinito:
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    return 0;
}
