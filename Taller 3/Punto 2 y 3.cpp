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
    vector<int> numbers(n);
    vector<int> mayoresPromedio;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 10);
    for (i = 0; i < n; i++)
    {
        numbers[i] = dis(gen);
        suma = suma + numbers[i];
        cout << numbers[i] << " ";
    }
    cout << endl;
    promedio = (float)suma / n;
    cout << "El promedio es: " << promedio << endl;
    cout << "Numeros mayores al promedio: ";
    for (i = 0; i < n; i++)
    {
        if (numbers[i] > promedio)
        {
            mayoresPromedio.push_back(numbers[i]);
            cout << numbers[i] << " ";
        }
    }
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
    cout << endl;
    cout << "Numeros mayores al promedio ordenados: ";
    for (i = 0; i < mayoresPromedio.size(); i++)
    {
        cout << mayoresPromedio[i] << " ";
    }
}   