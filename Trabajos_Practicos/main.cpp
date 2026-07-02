#include <iostream>
#include <vector>
#include "partida.h"

using namespace std;

int main()
{
    // 1. Solicita la cantidad de jugadores
    int totalJugadores = CantidadDeJugadores();

    // 2. Muestra los grupos
    GruposDeJugadores(totalJugadores);

    // 3. Pide y muestra en pantalla los datos guardados en la estructura.
    vector<Jugador> datosPartida = KDAporJugador(totalJugadores);

    // 4. Calcula y muestra el rendimiento individual de cada jugador
    RendimientoIndividual(datosPartida);

    // 5. Calcula y muestra el KDA total acumulado de cada equipo
    KDAEquipos(datosPartida);

    return 0;
}
