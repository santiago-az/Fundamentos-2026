#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, n, j;
    bool diagonal = true;
    bool triangularInf = true;
    bool triangularSup = true;
    cout << "Escriba el tamaño de la matriz: ";
    cin >> n;
    vector<int> matriz(n * n, 0);
    // Se recorre la matriz asignando numeros manualmente
    for(i = 0; i < n * n; i++ )
    {
        cin >> matriz[i];
    }
    // Nuevamente se recorre la matriz para verificar si es diagonal o triangular
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            // Se usa el siguiente if para verificar de si hay 0 en cada posicion diferente de la diagonal principal
            if(matriz[i * n + j] != 0)
            {
                if (i < j)
                {
                    triangularInf = false;
                    diagonal = false;
                }
                if (i > j)
                {
                    triangularSup = false;
                    diagonal = false;
                }
            }
        }
    }
    // Imprime la afirmacion correcta
    // Se usaron booleanos para impirmir las respuestas
    if (diagonal)
    {
        cout << "Es una matriz diagonal";
    }
    else if (triangularInf)
    {
        cout << "Es una matriz triangular inferior";
    }
    else if (triangularSup)
    {
        cout << "Es una matriz triangular superior";
    }
}



