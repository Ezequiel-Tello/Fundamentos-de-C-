// Clase: Lunes 4 de mayo
// TIPOS DE DATOS

int a = 10;                // Entero
float b = 3.14f;           // Número de punto flotante
string s = "Hola, mundo!"; // Cadena de texto
char c = 'A';              // Carácter
bool d = true;             // Booleano

// TODO EL PROGRAMA EN C++ SIGUE UNA ESTRUCTURA GENERAL

#include <iostream>
using namespace std;

int main()
{

    // Instrucciones del programa

    return 0;
}

// Include <iostream>: permite utilizar funciones de entrada y salida.
// using namespace std: simplifica la escritura de codigo al evitar tener que escribir std:: antes de cada función.
// int main(): es la función principal del programa, donde se ejecuta el código. El programa comienza a ejecutarse desde esta función.
// return 0: indica que el programa ha terminado correctamente. Es una convención en C++ para indicar que el programa se ejecutó sin errores.

// SALIDA DE DATOS (OUTPUT)

#include <iostream>
using namespace std;
int main()
{
    cout << "Hola, mundo!" << endl; // Imprime "Hola, mundo!" en la consola y luego hace un salto de línea.
    return 0;
}
// El operador "<<" se utiliza para enviar datos a la salida estándar (en este caso, la consola). El manipulador "endl" se utiliza para insertar un salto de línea después del mensaje

// ENTRADA DE DATOS (INPUT)

#include <iostream>
using namespace std;
int main()
{
    string nombre;
    cout << "ingrese su nombre: ";
    cin >> nombre;

    cout << "Hola, " << nombre << "!" << endl;
    return 0;
}

// El operador ">>" se utiliza para recibir datos desde la entrada estándar (en este caso, el teclado). En este ejemplo, se almacena el valor ingresado por el usuario en la variable "nombre". Luego, se utiliza "cout" para imprimir un saludo personalizado utilizando el valor almacenado en "nombre".

// ACTIVIDADES PRÁCTICAS
// 1. Desarrollar un programa que solicite el nombre y edad del usuario y luego muestre un mensaje con ambos datos.
// 2. Desarrollar un programa que solicite dos numeros enteros y muestre como resultado su suma.
// 3. Desarrollar un programa que solicite nombre, edad y altura, y muestre toda la información en una sola linea

// 1.
#include <iostream>
using namespace std;

int main()
{
    string nombre;
    int edad;
    cout << "ingrese su nombre: ";
    cin >> nombre;
    cout << "ingrese su edad: ";
    cin >> edad;

    cout << "Hola soy " << nombre << " y tengo " << edad << " años." << endl;
    return 0;
}
// 2.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    int suma = num1 + num2;
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;
    return 0;
}
// 3.
#include <iostream>
using namespace std;

int main()
{
    string nombre;
    int edad;
    float altura;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    cout << "Ficha tecnica" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Altura: " << altura << " cm" << endl;
    return 0;
}