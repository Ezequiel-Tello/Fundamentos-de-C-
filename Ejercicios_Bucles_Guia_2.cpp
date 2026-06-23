#include <iostream>
using namespace std;

// 1. REALIZAR UN PROGRAMA QUE MUESTRE LOS NUMEROS DEL 1 AL 50 USANDO UN BUCLE WHILE
int main()
{
    int numero = 1; // Variable para almacenar el número actual

    cout << "Números del 1 al 50:" << endl;

    while (numero <= 50) // Condición para continuar el bucle
    {
        cout << numero << " "; // Imprimir el número actual
        numero++;              // Incrementar el número para la siguiente iteración
    }

    return 0;
}
// 2. REALIZAR UN PROGRAMA QUE MUESTRE TODOS LOS NUMEROS PARES ENTRE 1 Y 100 USANDO UN BUCLE FOR
int main()
{
    cout << "Números pares entre 1 y 100:" << endl;

    for (int numero = 1; numero <= 100; numero++) // Bucle for para iterar del 1 al 100
    {
        if (numero % 2 == 0) // Verificar si el número es par
        {
            cout << numero << " "; // Imprimir el número par
        }
    }

    return 0;
}
// 3. REALIZAR UN PROGRAMA QUE SOLICITE 5 NÚMEROS AL USUARIO Y MUESTRE LA SUMA TOTAL UTILIZANDO UN BUCLE.
int main()
{
    int suma = 0; // Variable para almacenar la suma total
    int numero;   // Variable para almacenar el número ingresado por el usuario

    cout << "Ingrese 5 números:" << endl;

    for (int i = 0; i < 5; i++) // Bucle for para solicitar 5 números
    {
        cout << "Número " << (i + 1) << ": ";
        cin >> numero;  // Leer el número ingresado por el usuario
        suma += numero; // Agregar el número a la suma total
    }

    cout << "La suma total es: " << suma << endl; // Mostrar la suma total

    return 0;
}
// 4. REALIZAR UN PROGRAMA QUE SOLICITE UN NUMERO Y DEMUESTRE SU TABLA DE MULTIPLICAR DEL 1 AL 10 UTILIZANDO UN BUCLE
int main()
{
    int numero; // Variable para almacenar el número ingresado por el usuario

    cout << "Ingrese un número para mostrar su tabla de multiplicar: ";
    cin >> numero; // Leer el número ingresado por el usuario

    cout << "Tabla de multiplicar del " << numero << ":" << endl;

    for (int i = 1; i <= 10; i++) // Bucle for para iterar del 1 al 10
    {
        cout << numero << " x " << i << " = " << (numero * i) << endl; // Mostrar la multiplicación
    }

    return 0;
}
// 5. REALIZAR UN PROGRAMA QUE SOLICITE NUMEROS AL USUARIO HASTA QUE INGRESE EL NUMERO 0. AL FINALIZAR, MOSTRAR CUANTOS NUMEROS FUERON INGRESADOS UTILIZANDO UN BUCLE DO WHILE
int main()
{
    int numero;       // Variable para almacenar el número ingresado por el usuario
    int contador = 0; // Variable para contar la cantidad de números ingresados

    cout << "Ingrese números (ingrese 0 para finalizar):" << endl;

    do
    {
        cin >> numero;   // Leer el número ingresado por el usuario
        if (numero != 0) // Verificar si el número es diferente de 0
        {
            contador++; // Incrementar el contador si el número es diferente de 0
        }
    } while (numero != 0); // Continuar el bucle mientras el número sea diferente de 0

    cout << "Cantidad de números ingresados: " << contador << endl; // Mostrar la cantidad de números ingresados

    return 0;
}
// 6. REALIZAR UN PROGRAMA QUE SOLICITE 10 EDADES Y MUESTRE CUANTAS PERSONAS SON MAYORES DE EDAD UTILIZANDO UN BUCLE
int main()
{
    int edad;                // Variable para almacenar la edad ingresada por el usuario
    int contadorMayores = 0; // Variable para contar la cantidad de personas mayores de edad

    cout << "Ingrese 10 edades:" << endl;

    for (int i = 0; i < 10; i++) // Bucle for para solicitar 10 edades
    {
        cout << "Edad " << (i + 1) << ": ";
        cin >> edad;    // Leer la edad ingresada por el usuario
        if (edad >= 18) // Verificar si la persona es mayor de edad
        {
            contadorMayores++; // Incrementar el contador si la persona es mayor de edad
        }
    }

    cout << "Cantidad de personas mayores de edad: " << contadorMayores << endl; // Mostrar la cantidad de personas mayores de edad

    return 0;
}
// 7. REALIZAR UN PROGRAMA QUE MUESTRE LOS NUMEROS DEL 100 AL 1 EN ORDEN DESCENDENTE  UTILIZANDO UN BUCLE
int main()
{
    cout << "Números del 100 al 1 en orden descendente:" << endl;

    for (int numero = 100; numero >= 1; numero--) // Bucle for para iterar del 100 al 1
    {
        cout << numero << " "; // Imprimir el número actual
    }

    return 0;
}