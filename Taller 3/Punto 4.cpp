#include <iostream>
#include <vector>
#include <random>

using namespace std;
// Se añade una funcion que calcule los factoriales
int fact(int x)
{
    int prod = 1, i;
    for (i = 1; i <= x; i++)
    {
        prod = prod * i;
    }
    return prod;
}

int main()
{
    int n, factorial = 0, i;
    cout << "Escriba la cantida de numeros: ";
    cin >> n;
    vector<int> numeros(n);
    // Se usa lo siguiente para asignar numeros aleatorios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 10);
    // Se recorre la matriz añadiendo los numeros y calculando a su vez su factorial con la funcion anterior
    for (i = 0; i < n; i++ )
    {
        numeros[i] = dis(gen);
        cout << numeros[i] << " ";
        factorial = fact(numeros[i]);
        cout << "Factorial de " << numeros[i] << " es: " << factorial << endl; 
    }
}