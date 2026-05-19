#include <iostream>
#include <random>
#include <vector>

using namespace std;

int main()
{
    cout << "Escribe el tamaño de la matriz cuadrada: ";
    int n, i, num, suma = 0, contPrimos = 0, repPrimos = 0, primo = 0, par = 0, impar = 0, Div3 = 0, sumaMatriz = 0;
    float promedioMatriz = 0;
    cin >> n;
    vector<int> M(n * n);
    vector<int> Fila1(n);
    vector<int> ColumnaUltima(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 50);

    for(i = 0; i < n * n; i++)
    {
        M[i] = dis(gen);
        cout << M[i] << " ";
        if (i < n)
        {
            Fila1[i] = M[i];
        }
        if (i % n == n - 1)
        {
            ColumnaUltima[i / n] = M[i];
        }
        if (i == n - 1 || (i + 1) % n == 0)
        {
            cout << endl;
        }
        for(repPrimos = 1; repPrimos <= M[i]; repPrimos++)
        {
            if (M[i] % repPrimos == 0)
            {
                contPrimos++;
            }
        }
        if (contPrimos == 2)
            {
                primo = primo + 1;
            }
        contPrimos = 0;
        if (M[i] % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
        if (M[i] % 3 == 0)
        {
            Div3 = Div3 + 1;
        }
        sumaMatriz += M[i];
    }
    for (i = 0; i < n * n; i++)
    {
        cout << "Promedio digito " << i << ": " << M[i] / promedioMatriz << endl; 
    }
    promedioMatriz = sumaMatriz / (n * n);
    cout << endl;
    cout << "Diagonal principal: ";
    for (i = 0; i < n; i++)
    {
        int indice = (i * n) + i;
        cout << M[indice] << " ";
        suma += M[indice];
    }
    cout << endl;
    cout << "La suma de la diagonal principal es: " << suma << endl;
    suma = 0;
    cout << "Diagonal secundaria: ";
    for (i = n - 1; i >= 0; i--)
    {
        int indice = (i * n) + (n - 1 - i);
        cout << M[indice] << " ";
        suma += M[indice];
    }
    cout << endl;
    cout << "La suma de la diagonal secundaria es: " << suma << endl;
    cout << "La primera fila es: ";
    for (i = 0; i < n; i++)
    {
        cout << Fila1[i] << " ";
    }
    cout << endl;
    cout << "La ultima columna es: ";
    for (i = 0; i < n; i++)
    {
        cout << ColumnaUltima[i] << " " << endl;
    }
    cout << "Cantidad de numeros primos: " << primo << endl;
    cout << "Cantidad de numeros pares: " << par << endl;
    cout << "Cantidad de numeros impares: " << impar << endl;
    cout << "Cantidad de numeros divisibles entre 3: " << Div3 << endl;
    return 0;
}