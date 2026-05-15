#include <iostream>
#include <random>
#include <vector>

using namespace std;

int main()
{
    cout << "Escribe el tamaño de la matriz cuadrada: ";
    int n, i, num;
    cin >> n;
    vector<int> M(n * n);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 50);

    for(i = 0; i < n * n; i++)
    {
        M[i] = dis(gen);
        cout << M[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        int indice = (i * n) + i;
        cout << M[indice] << " ";
    }
    cout << endl;
    for (i = n - 1; i >= 0; i--)
    {
        int indice = (i * n) + (n - 1 - i);
        cout << M[indice] << " ";
    }
    cout << endl;
    return 0;
}