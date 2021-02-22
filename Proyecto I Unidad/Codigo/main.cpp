#include <iostream>
#include "startShip.h"
#include "snake.h"
#include <string>

using namespace std;

string juegos [2][2] = {
    {"1", "starShip()"},
    {"2", "snake()"},
};

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true) {
        
        system ("cls");

        cout << "Menu de Videojuegos" << endl;
        cout <<"*********************" << endl;
        cout << endl;
        cout << "Elige un videojuego y diviertete" << endl;
        cout << endl;
        cout << "1 - StarShip" << endl;
        cout << "2 - Snake" << endl;
        cout << "3 - Salir" << endl;
        cout << endl;
        cout << "Escoge la el numero que esta junto al video juego que deseas jugar:";
        cout << endl;
        cin >> opcion;
        
        switch (opcion)
        {
        case 1:
            starShip();
            break;
        
        case 2:
            snake();
            break;
         
        default:

        break;
        }

        system ("pause");

        cout << endl;

        if (opcion == 0)
        {
            break;
        }
    }

    return 0;
}