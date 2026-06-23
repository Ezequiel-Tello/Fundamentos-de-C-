#include <iostream>
using namespace std;

// 1. Crear una función llamada saludar() que muestre un mensaje en pantalla.
void saludar()
{
    cout << "¡Hola! Bienvenido a la programación en C++." << endl;
}

// 2. Crear una función llamada mostrarNombre() que reciba un nombre y lo muestre.
void mostrarNombre(string nombre)
{
    cout << "Tu nombre es: " << nombre << endl;
}
// 3. Crear una función llamada sumar() que reciba dos números y devuelva la suma.
void sumar(int a, int b)
{
    cout << "La suma es: " << a + b << endl;
}
// 4. Crear una función llamada restar() que reciba dos números y devuelva la resta.
void restar(int a, int b)
{
    cout << "La resta es: " << a - b << endl;
}
// 5. Crear una función llamada multiplicar() que reciba dos números y devuelva el resultado.
void multiplicar(int a, int b)
{
    cout << "La multiplicación es: " << a * b << endl;
}
// 6. Crear una función llamada esPar() que reciba un número y devuelva si es par o impar.
bool esPar(int n)
{
    return n % 2 == 0; // Retorna 1 si es par, 0 si es impar
}
// 7. CREAR UNA FUNCION LLAMADA MAYOR() QUE RECIBA DOS NUMEROS Y DEVUELVA EL MAYOR.
int mayor(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
// 8 . CREAR UNA FUNCION LLAMADA CALCULARCUADRO() QUE RECIBA UN NUMERO Y DEVUELVA SU CUADRADO.
int calcularCuadrado(int n)
{
    return n * n;
}
// 9. CREAR UNA FUNCION LLAMADA MOSTRARTABLA() QUE RECIBA UN NUMERO Y MUESTRE SU TABLA DE MULTIPLICAR HASTA EL 10.
void mostrarTabla(int n)
{
    cout << "Tabla de multiplicar del " << n << ":" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
// 10. CREAR UNA FUNCION LLAMADA PROMEDIO() QUE RECIBA 3 NOTAS Y DEVUELVA EL PROMEDIO.
float promedio(float nota1, float nota2, float nota3)
{
    return (nota1 + nota2 + nota3) / 3.0f; // La 'f' indica que el 3.0 es float
}
