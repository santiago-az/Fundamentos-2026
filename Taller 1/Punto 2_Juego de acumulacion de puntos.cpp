#include <iostream>

using namespace std;

int main()
{
    int i = -1, pacum = 0;
    while (i != 0 && i != 1)
    {
        cout << "Ingrese valor (0-6): ";
        cin >> i;
        if (i < 0 || i > 6)
        {
        cout << "Ingrese otro numero que este dentro del rango" << "\n";
        }
        else if (i >= 2 && i <= 6)
        {
            pacum = pacum + i;
            cout << "-> Acumulado: " << pacum << "\n";
        }
        if (i == 0)
        {
            cout << "Estos son los puntos totales: " << pacum << "\n";
        }
        else if (i == 1)
        {
            cout << "Perdio todos los puntos. Fin del juego.";
        }  
    }
}