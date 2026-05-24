#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main()
{
    int n, i, suma = 0;
    float promedio = 0;
    cout << "Escribe el tamaño del vector: ";
    cin >> n;
    vector<int> numeros(n);
    vector<int> mayoresPromedio;
    // Se usa lo siguiente para asignar numeros aleatorios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 10);
    // Se recorre la matriz asignando numeros
    for (i = 0; i < n; i++)
    {
        numeros[i] = dis(gen);
        suma = suma + numeros[i];
        cout << numeros[i] << " ";
    }
    cout << endl;
    // Se saca el promedio de la matriz
    promedio = (float)suma / n;
    cout << "El promedio es: " << promedio << endl;
    // Se recorre nuevamente la matriz para ver que numeros son mayores al promedio
    cout << "Numeros mayores al promedio: ";
    for (i = 0; i < n; i++)
    {
        if (numeros[i] > promedio)
        {
            mayoresPromedio.push_back(numeros[i]);
            cout << numeros[i] << " ";
        }
    }
    // Ordena los números mayores al promedio de menor a mayor con el Bubble Sort
    for (i = 0; i < mayoresPromedio.size(); i++)
    {
        for (int j = 0; j < mayoresPromedio.size() - 1; j++)
        {
            if (mayoresPromedio[j] > mayoresPromedio[j + 1])
            {
                    int temp = mayoresPromedio[j];
                    mayoresPromedio[j] = mayoresPromedio[j + 1];
                    mayoresPromedio[j + 1] = temp;
            }
        }
    }
    // Imprime los numeros mayores al promedio ordenados
    cout << endl;
    cout << "Numeros mayores al promedio ordenados: ";
    for (i = 0; i < mayoresPromedio.size(); i++)
    {
        cout << mayoresPromedio[i] << " ";
    }
}   