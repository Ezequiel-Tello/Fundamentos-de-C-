#include <iostream>
#include <cmath>
using namespace std;

// 1. INGRESAR HORA DEL DIA (0 A 23)
// 6 a 12: MAÑANA // 12 A 19: TARDE // RESTO: NOCHE
int main()
{
    int hora;
    cout << "Ingrese la hora del dia (0 a 23): ";
    cin >> hora;

    if (hora >= 6 && hora < 12)
    {
        cout << "Es de mañana." << endl;
    }
    else if (hora >= 12 && hora < 19)
    {
        cout << "Es de tarde." << endl;
    }
    else
    {
        cout << "Es de noche." << endl;
    }

    return 0;
}
// 2 . PEDIR DOS NUMEROS Y MOSTRAR SI EL PRIMERO ES MULTIPLO DEL SEGUNDO
int main()
{
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num2 != 0 && num1 % num2 == 0)
    {
        cout << num1 << " es múltiplo de " << num2 << "." << endl;
    }
    else
    {
        cout << num1 << " no es múltiplo de " << num2 << "." << endl;
    }

    return 0;
}
// 3. INGRESAR EL STOCK DE UN PRODUCTO
// 0: SIN STOCK // < 5: POCO STOCK // >= 5: STOCK SUFICIENTE
int main()
{
    int stock;
    cout << "Ingrese el stock del producto: ";
    cin >> stock;

    if (stock == 0)
    {
        cout << "Sin stock." << endl;
    }
    else if (stock < 5)
    {
        cout << "Poco stock." << endl;
    }
    else
    {
        cout << "Stock suficiente." << endl;
    }

    return 0;
}
// 4. INGRESAR UN NUMERO Y MOSTRAR SI TIENE 1 , 2 O 3 CIFRAS
int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero >= 0 && numero < 10)
    {
        cout << "El numero tiene 1 cifra." << endl;
    }
    else if (numero >= 10 && numero < 100)
    {
        cout << "El numero tiene 2 cifras." << endl;
    }
    else if (numero >= 100 && numero < 1000)
    {
        cout << "El numero tiene 3 cifras." << endl;
    }
    else
    {
        cout << "El numero tiene mas de 3 cifras o es negativo." << endl;
    }

    return 0;
}
// 5. PEDIR DIA Y MES, VERIFICAR SI CORRESPONDE A NAVIDAD (NAVIDAD = 25/12)
int main()
{
    int dia, mes;
    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;

    if (dia == 25 && mes == 12)
    {
        cout << "¡Feliz Navidad!" << endl;
    }
    else
    {
        cout << "No es Navidad." << endl;
    }

    return 0;
}
// 6. INGRESAR DAD Y DECIR LA CATEGORIA
// MENOR DE 13: NIÑO // ENTRE 13 Y 17: ADOLESCENTE // MAYOR DE 17: ADULTO
int main()
{
    int edad;
    cout << "Ingrese la edad: ";
    cin >> edad;

    if (edad < 13)
    {
        cout << "Es un niño." << endl;
    }
    else if (edad >= 13 && edad <= 17)
    {
        cout << "Es un adolescente." << endl;
    }
    else
    {
        cout << "Es un adulto." << endl;
    }

    return 0;
}
// 7. PEDIR DOS NUMEROS Y MOSTRAR CUAL TIENE MAYOR VALOR ABSOLUTO
int main()
{
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (abs(num1) > abs(num2))
    {
        cout << "El numero con mayor valor absoluto es: " << num1 << endl;
    }
    else if (abs(num2) > abs(num1))
    {
        cout << "El numero con mayor valor absoluto es: " << num2 << endl;
    }
    else
    {
        cout << "Ambos numeros tienen el mismo valor absoluto." << endl;
    }

    return 0;
}
// 8. INGRESAR UNA COMPRA
// MAYOR A 2000: ENVIO GRATIS // MENOR A 2000: PAGA ENVIO
int main()
{
    double compra;
    cout << "Ingrese el monto de la compra: ";
    cin >> compra;

    if (compra > 2000)
    {
        cout << "¡Envío gratis!" << endl;
    }
    else
    {
        cout << "Paga envío." << endl;
    }

    return 0;
}
// 9. PEDIR UN NUMERO Y VERIFICAR SI TERMINA EN 0
int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 10 == 0)
    {
        cout << "El numero termina en 0." << endl;
    }
    else
    {
        cout << "El numero no termina en 0." << endl;
    }

    return 0;
}
// 10. PEDIR DOS EDADES Y MOSTRAR CUANTOS AÑOS DE DIFERENCIA TIENEN
int main()
{
    int edad1, edad2;
    cout << "Ingrese la primera edad: ";
    cin >> edad1;
    cout << "Ingrese la segunda edad: ";
    cin >> edad2;

    int diferencia = abs(edad1 - edad2);
    cout << "La diferencia de edades es: " << diferencia << " años." << endl;

    return 0;
}
