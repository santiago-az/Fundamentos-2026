#include <iostream>

using namespace std;

int main()
{
    int i = 0, pacum = 0;
    while (i != 0 || i != 1)
    {
        cout << "ingrese valor (0-6): ";
        cin >> i;
        if (i < 0 || i > 6)
        {
        cout << "Ingrese otro numero que este dentro del rango" << "\n";
        }
        if (i == 2)
        {
            pacum = pacum + 2;
            cout << "Acumulado: " << pacum << "\n";
        }
        else if (i == 3)
        {
            pacum = pacum + 3;
            cout << "Acumulado: " << pacum << "\n";
        }
        else if (i == 4)
        {
            pacum = pacum + 4;
            cout << "Acumulado: " << pacum << "\n";
        }
        else if (i == 5)
        {
            pacum = pacum + 5;
            cout << "Acumulado: " << pacum << "\n";
        }
        else if (i == 6)
        {
            pacum = pacum + 6;
            cout << "Acumulado: " << pacum << "\n";
        }
        if (i == 0)
        {
            cout << "Estos son los puntos totales: " << pacum << "\n";
            return 0;
        }
        else if (i == 1)
        {
            cout << "Perdio todos los puntos. Fin del juego.";
            return 0;
        }  
    }
}