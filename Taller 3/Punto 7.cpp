#include <iostream>
#include <vector>

using namespace std;
//funcion para la suma de filas
int sumarFila(vector<int> fila)
{
    int i, suma = 0;
    // se hace un ciclo para que sume cada fila
    for (i = 0; i < fila.size(); i++)
    {
        suma += fila[i];
    }
    return suma;
}

int main()
{
    int filaA, columnaA, filaB, columnaB, i, j, k;
    // Se verifica que la columnaA y filaB sean iguales de lo contrario no se podria llevar a cabo la multiplicacion
    while(columnaA != filaB)
    {
        cout << "introduzca el numero de filas de la matriz A: ";
            cin >> filaA;
            cout << "introduzca el numero de columnas de la matriz A: ";
            cin >> columnaA;
            cout << "introduzca el numero de filas de la matriz B: ";
            cin >> filaB;
            cout << "introduzca el numero de columnas de la matriz B: ";
            cin >> columnaB;
        if (columnaA != filaB)
        {
            cout << "Escriba nuevamente las dimensiones" << endl; 
        }
    }
    vector<int> matrizA(filaA * columnaA, 0);
    vector<int> matrizB(filaB * columnaB, 0);
    vector<int> matrizC(filaA * columnaB, 0);
    cout << "Escriba los numeros de la matriz A: ";
    // Se asignan valores a la matrizA manualmente
    for (i = 0; i < filaA; i++)
    {
        for (j = 0; j < columnaA; j++)
        {
            cin >> matrizA[i * columnaA + j];
        }
    }
    cout << "Escriba los numeros de la matriz B: ";
    // Se asignan valores a la matrizB manualmente
    for (i = 0; i < filaB; i++)
    {
        for (j = 0; j < columnaB; j++)
        {
            cin >> matrizB[i * columnaB + j];
        }
    }
    // multiplicacion de matrices, se usan 3 ciclos ya que la multiplicacion de las matrices es multiplicacion de fila A por columna B la suma de cada multiplicacion.
    for (i = 0; i < filaA; i++)
    {
        for (j = 0; j < columnaB; j++)
        {
            for(k = 0; k < columnaA; k++)
            {
                matrizC[i * columnaB + j] += matrizA[i * columnaA + k] * matrizB[k * columnaB + j];
            }
        }
    }
    // Se imprime cada Matriz
    cout << "Matriz A: " << endl;
    for(i = 0; i < filaA; i++)
    {
        for(j = 0; j < columnaB; j++)
        {
            cout << matrizA[i * columnaB + j] << " ";
        }
        cout << endl;
    }
    cout << "Matriz B: " << endl;
    for(i = 0; i < filaA; i++)
    {
        for(j = 0; j < columnaB; j++)
        {
            cout << matrizB[i * columnaB + j] << " ";
        }
        cout << endl;
    }
    cout << "Matriz C: " << endl;
    for(i = 0; i < filaA; i++)
    {
        for(j = 0; j < columnaB; j++)
        {
            cout << matrizC[i * columnaB + j] << " ";
        }
        cout << endl;
    }
    // Se imprime la suma de las filas usando la funcion
    cout << "Suma de las filas:" << endl;
    for(i = 0;i< filaA; i++)
    {
        vector<int> filaTemp;

        for(j = 0; j < columnaB; j++)
        {
            filaTemp.push_back(matrizC[i * columnaB + j]);
        }
        cout << "Fila " << i + 1 << ": " << sumarFila(filaTemp) << endl;
    }
}
    