#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "partida.h"

using namespace std;

// 1. Solicita la cantidad de jugadores
int CantidadDeJugadores()
{
    int cantidad;
    cout << "Ingrese la cantidad de jugadores para la partida: ";
    cin >> cantidad;
    return cantidad;
}

// 2. Muestra los grupos
void GruposDeJugadores(int cantidad)
{
    int g1 = cantidad / 2;
    int g2 = cantidad - g1;
    cout << "\n=== DISTRIBUCION DE GRUPOS ===" << endl;
    cout << "Grupo 1: " << g1 << " jugadores." << endl;
    cout << "Grupo 2: " << g2 << " jugadores." << endl;
    cout << "================================" << endl;
}

// 3. Pide y muestra en pantalla los datos guardados en la estructura.
vector<Jugador> KDAporJugador(int cantidad)
{
    vector<Jugador> lista(cantidad);
    int mitad = cantidad / 2;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "\n--- REGISTRO JUGADOR " << (i + 1) << " ---" << endl;
        cout << "Nombre: ";
        cin.ignore(); // Limpia el buffer del teclado
        getline(cin, lista[i].nombre);

        cout << "Kills: ";
        cin >> lista[i].kills;
        cout << "Deaths: ";
        cin >> lista[i].deaths;
        cout << "Assists: ";
        cin >> lista[i].assists;

        // Asignación interna del grupo
        lista[i].group = (i < mitad) ? 1 : 2;
    }

    // Dibujamos la tabla alineada usando <iomanip>
    cout << "\n=======================================================" << endl;
    cout << "           ESTADISTICAS DE LA PARTIDA          " << endl;
    cout << "=======================================================" << endl;

    cout << left << setw(15) << "Jugador"
         << setw(8) << "Grupo"
         << right << setw(5) << "K"
         << setw(6) << "D"
         << setw(6) << "A" << endl;
    cout << "=======================================================" << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << left << setw(15) << lista[i].nombre;

        string txtGrupo = "[G" + to_string(lista[i].group) + "]";
        cout << setw(8) << txtGrupo;

        cout << right << setw(5) << lista[i].kills
             << setw(6) << lista[i].deaths
             << setw(6) << lista[i].assists << endl;
    }
    cout << "=======================================================" << endl;

    return lista;
}

// 4. Calcula y muestra el rendimiento individual de cada jugador
void RendimientoIndividual(const vector<Jugador> &listaJugadores)
{
    cout << "\n=======================================================" << endl;
    cout << "          RENDIMIENTO INDIVIDUAL (K+A)/D               " << endl;
    cout << "=======================================================" << endl;

    cout << left << setw(23) << "Jugador" << right << setw(15) << "Rendimiento" << endl;
    cout << "=======================================================" << endl;

    for (size_t i = 0; i < listaJugadores.size(); i++)
    {
        double K = listaJugadores[i].kills;
        double D = listaJugadores[i].deaths;
        double A = listaJugadores[i].assists;

        // Evitamos la división por cero si el jugador tiene 0 muertes
        double rendimiento = (D == 0) ? (K + A) : (K + A) / D;

        cout << left << setw(23) << listaJugadores[i].nombre
             << right << setw(15) << fixed << setprecision(2) << rendimiento << endl;
    }
    cout << "=======================================================" << endl;
}

// 5. Calcula y muestra el KDA total acumulado de cada equipo
void KDAEquipos(const vector<Jugador> &listaJugadores)
{
    // Variables para acumular las estadísticas del Grupo 1
    int totalK_G1 = 0;
    int totalD_G1 = 0;
    int totalA_G1 = 0;

    // Variables para acumular las estadísticas del Grupo 2
    int totalK_G2 = 0;
    int totalD_G2 = 0;
    int totalA_G2 = 0;

    // Recorremos los jugadores y sumamos sus estadísticas según su grupo
    for (size_t i = 0; i < listaJugadores.size(); i++)
    {
        if (listaJugadores[i].group == 1)
        {
            totalK_G1 += listaJugadores[i].kills;
            totalD_G1 += listaJugadores[i].deaths;
            totalA_G1 += listaJugadores[i].assists;
        }
        else
        {
            totalK_G2 += listaJugadores[i].kills;
            totalD_G2 += listaJugadores[i].deaths;
            totalA_G2 += listaJugadores[i].assists;
        }
    }

    // Dibujamos la tabla de equipos con formato alineado
    cout << "\n=======================================================" << endl;
    cout << "             ESTADISTICAS TOTALES POR EQUIPO           " << endl;
    cout << "=======================================================" << endl;

    cout << left << setw(15) << "Equipo"
         << right << setw(10) << "K Totales"
         << setw(11) << "D Totales"
         << setw(11) << "A Totales" << endl;
    cout << "========================================================" << endl;

    // Fila del Grupo 1
    cout << left << setw(15) << "Grupo 1"
         << right << setw(10) << totalK_G1
         << setw(11) << totalD_G1
         << setw(11) << totalA_G1 << endl;

    // Fila del Grupo 2
    cout << left << setw(15) << "Grupo 2"
         << right << setw(10) << totalK_G2
         << setw(11) << totalD_G2
         << setw(11) << totalA_G2 << endl;

    cout << "=======================================================" << endl;
}
