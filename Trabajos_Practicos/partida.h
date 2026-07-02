#ifndef PARTIDA_H
#define PARTIDA_H
#include <string>
#include <vector>  // Para crear y usar una lista de jugadores
#include <iomanip> // para darle mejor formato a la tabla

using namespace std;

// Estructura para guardar los datos de cada jugador
struct Jugador
{
    string nombre;
    int kills;
    int deaths;
    int assists;
    int group;
};

// 1. Solicita la cantidad de jugadores
int CantidadDeJugadores();

// 2. Muestra los grupos
void GruposDeJugadores(int cantidad);

// 3. Pide y muestra en pantalla los datos guardados en la estructura.
vector<Jugador> KDAporJugador(int cantidad);

// 4. Calcula y muestra el rendimiento individual de cada jugador
void RendimientoIndividual(const vector<Jugador> &listaJugadores);

// 5. Calcula y muestra el KDA total acumulado de cada equipo
void KDAEquipos(const std::vector<Jugador> &listaJugadores);

#endif
