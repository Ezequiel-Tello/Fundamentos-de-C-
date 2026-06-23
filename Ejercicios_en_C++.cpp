// CLASE: Miercoles 6 de mayo
#include <iostream>
using namespace std;

// 1. INGRESAR UN NUMERO, DETERMINAR SI ES POSITIVO, NEGATIVO O CERO.
int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "El numero es positivo." << endl;
    }
    else if (numero < 0)
    {
        cout << "El numero es negativo." << endl;
    }
    else
    {
        cout << "El numero es cero." << endl;
    }

    return 0;
}
// 2. PEDIR UN NUMERO, DETERMINAR SI ES PAR O IMPAR
int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "El numero es par." << endl;
    }
    else
    {
        cout << "El numero es impar." << endl;
    }

    return 0;
}
// 3. INGRESAR DOS NUMEROS Y MOSTRAR CUAL ES MAYOR

int main()
{
    int numero1, numero2;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2)
    {
        cout << "El primer numero es mayor." << endl;
    }
    else if (numero2 > numero1)
    {
        cout << "El segundo numero es mayor." << endl;
    }
    else
    {
        cout << "Ambos numeros son iguales." << endl;
    }

    return 0;
}
// 4. INGRESAR TRES NUMEROS Y MOSTRAR CUAL ES EL MAYOR
int main()
{
    int numero1, numero2, numero3;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    if (numero1 > numero2 && numero1 > numero3)
    {
        cout << "El primer numero es el mayor." << endl;
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        cout << "El segundo numero es el mayor." << endl;
    }
    else if (numero3 > numero1 && numero3 > numero2)
    {
        cout << "El tercer numero es el mayor." << endl;
    }
    else
    {
        cout << "Hay numeros iguales." << endl;
    }

    return 0;
}
// 5. INGRESAR UNA NOTA (0 A 10) Y MOSTRAR SI APRUEBA (>= 6) O REPRUEBA (< 6)
int main()
{
    float nota;
    cout << "Ingrese una nota (0 a 10): ";
    cin >> nota;

    if (nota >= 6 && nota <= 10)
    {
        cout << "Aprueba." << endl;
    }
    else if (nota >= 0 && nota < 6)
    {
        cout << "Reprueba." << endl;
    }
    else if (nota > 10)
    {
        cout << "Nota invalida." << endl;
    }

    return 0;
}
// 6. PEDIR EL PRECIO DE UN PRODUCTO . SI ES MAYOR QUE 1000, APLICAR 10% DE DESCUENTO Y MOSTRAR EL PRECIO FINAL, SI ES MENOR O IGUAL A 1000 MOSTRAR EL PRECIO SIN DESCUENTO
int main()
{
    float precio, precioFinal;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    if (precio > 1000)
    {
        precioFinal = precio * 0.9; // Aplicar 10% de descuento
        cout << "El precio final con descuento es: " << precioFinal << endl;
    }
    else
    {
        cout << "El precio final sin descuento es: " << precio << endl;
    }

    return 0;
}
// 7. INGRESAR UN NUMERO Y VERIFICAR SI ESTA ENTRE EL 10 Y EL 20
int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero >= 10 && numero <= 20)
    {
        cout << "El numero esta entre 10 y 20." << endl;
    }
    else
    {
        cout << "El numero no esta entre 10 y 20." << endl;
    }

    return 0;
}
// 8. PEDIR USUARIO Y CONTRASEÑA, SI SON CORRECTOS, MOSTRAR "INGRESO CON EXITO", "USUARIO O CONTRASEÑA INVALIDA"
int main()
{
    string usuario, contrasena;
    cout << "Ingrese el usuario: ";
    cin >> usuario;
    cout << "Ingrese la contraseña: ";
    cin >> contrasena;

    if (usuario == "admin" && contrasena == "1234")
    {
        cout << "Ingreso con exito." << endl;
    }
    else
    {
        cout << "Usuario o contraseña invalida." << endl;
    }

    return 0;
}
// 9. Ingresar temperatura y definir si es frio (< 10), templado (10 a 25) o caliente (> 25)
int main()
{
    float temperatura;
    cout << "Ingrese la temperatura: ";
    cin >> temperatura;

    if (temperatura < 10)
    {
        cout << "Hace frio." << endl;
    }
    else if (temperatura >= 10 && temperatura <= 25)
    {
        cout << "Hace templado." << endl;
    }
    else
    {
        cout << "Hace caliente." << endl;
    }

    return 0;
}
// 10. Pedir un numero y decir si es mayor, mnor o igual a 100
int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 100)
    {
        cout << "El numero es mayor a 100." << endl;
    }
    else if (numero < 100)
    {
        cout << "El numero es menor a 100." << endl;
    }
    else
    {
        cout << "El numero es igual a 100." << endl;
    }

    return 0;
}
// 11. Ingresar sueldo, si sueldo < 50000 aplicar aumento del 20%, si sueldo >= 50000 aplicar aumento del 10%
int main()
{
    float sueldo, sueldoFinal;
    cout << "Ingrese el sueldo: ";
    cin >> sueldo;

    if (sueldo < 50000)
    {
        sueldoFinal = sueldo * 1.2; // Aplicar aumento del 20%
        cout << "El sueldo final con aumento es: " << sueldoFinal << endl;
    }
    else
    {
        sueldoFinal = sueldo * 1.1; // Aplicar aumento del 10%
        cout << "El sueldo final con aumento es: " << sueldoFinal << endl;
    }

    return 0;
}
// 12. Calculadora basica, pedir dos numeros y la operacion a realizar (+, -, *, /), mostrar el resultado usando if y else if
int main()
{
    float numero1, numero2, resultado;
    char operacion;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese la operacion a realizar (+, -, *, /): ";
    cin >> operacion;

    if (operacion == '+')
    {
        resultado = numero1 + numero2;
        cout << "El resultado de la suma es: " << resultado << endl;
    }
    else if (operacion == '-')
    {
        resultado = numero1 - numero2;
        cout << "El resultado de la resta es: " << resultado << endl;
    }
    else if (operacion == '*')
    {
        resultado = numero1 * numero2;
        cout << "El resultado de la multiplicacion es: " << resultado << endl;
    }
    else if (operacion == '/')
    {
        if (numero2 != 0)
        {
            resultado = numero1 / numero2;
            cout << "El resultado de la division es: " << resultado << endl;
        }
        else
        {
            cout << "Error: No se puede dividir por cero." << endl;
        }
    }
    else
    {
        cout << "Operacion invalida." << endl;
    }

    return 0;
}