// Funciones con su bloque de codigo para Analisis_de_KDA.cpp
#include <iostream>

int CantidadDeJugadores()
{
    int cantidadJugadores = 0;
    std::cin >> cantidadJugadores;
    return cantidadJugadores;
}

int KDAporJugador(int K, int D, int A)
{
    if (D == 0)
        return K + A; // Evitar división por cero
    return (K + A) / D;
}

int RendimientoIndividual(int K, int D, int A)
{
    return KDAporJugador(K, D, A);
}

int KDAEquipos(int K, int D, int A)
{
    if (D == 0)
        return K + A; // Evitar división por cero
    return (K + A) / D;
}