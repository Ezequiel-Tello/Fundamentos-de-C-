#include <iostream>
using namespace std;

void CantidadJugadores()
{
    int cantidadJugadores;
    cout << "Ingrese la cantidad de jugadores: ";
    cin >> cantidadJugadores;
    cout << "La partida iniciara con " << cantidadJugadores << " jugadores." << endl;
    ;
}

int main()
{
    CantidadJugadores();
    return 0;
}