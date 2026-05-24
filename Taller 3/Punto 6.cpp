#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int fila, colum, tempMax, tempMin, max, min, i, j, filaMax, columMax, filaMin, columMin, aux;
    cout << "Escribe las filas de la matriz: ";
    cin >> fila;
    cout << "Escribe las columnas de la matriz: ";
    cin >> colum;
    vector<int> matriz(fila * colum, 0);
    vector<int> transpuesta(colum * fila, 0);
    vector<int> original(fila * colum, 0);
    // añadir datos a la matriz y calcular el minimo y maximo
    for (i = 0; i < fila * colum ; i++)
    {
        cin >> matriz[i];
        original[i] = matriz[i];
        // Se asignan valores a las variables para que no generen conflicto
        if (i == 0)
        {
            tempMax = matriz[0];
            tempMin = matriz[0];
            filaMax = 0;
            filaMin = 0;
            columMax = 0;
            columMin = 0;
        }
        // se asigna un else para el resto de casos en los que ya i no es = 0
        else
        {
            if (matriz[i] > tempMax)
            {
                tempMax = matriz[i];
                filaMax = (i / colum);
                columMax = (i % colum);
            }
            if (matriz[i] < tempMin)
            {
                tempMin = matriz[i];
                filaMin = (i / colum);
                columMin = (i % colum);
            }
        }
    }
    //sacar la matriz transpuesta
    for(i = 0; i < fila; i++)
    {
        for(j = 0; j < colum; j++)
        {
            transpuesta[j * fila + i] = matriz[i * colum + j];
        }
    }
    //intercambiar las filas de maximo y minimo
    for(j = 0; j < colum; j++)
    {
        //Se usa un auxiliar para evitar perder el primer dato
        aux = matriz[filaMax * colum + j];
        matriz[filaMax * colum + j] = matriz[filaMin * colum + j];
        matriz[filaMin * colum + j] = aux;
    }
    //imprimir la matriz intercambiada
    cout << "Matriz con las filas intercambiadas: " << endl;
    for(i = 0; i < fila; i++)
    {
        for(j = 0; j < colum; j++)
        {
            cout << matriz[i * colum + j] << " ";
        }
        cout << endl;
    }
    // imprimir la matriz original y la transpuesta
    cout << "La matriz original: " << endl;
    for(i = 0; i < fila; i++)
    {
        for(j = 0; j < colum; j++)
        {
            cout << original[i * colum + j] << " ";
        }
        cout << endl;
    }
    cout << "La matriz transpuesta: " << endl;
    for(i = 0; i < fila; i++)
    {
        for(j = 0; j < fila; j++)
        {
            cout << transpuesta[i * fila + j] << " ";
        }
        cout << endl;
    }
    // Las filas y columnas estan puestas como si iniciaran en 1
    cout << "El numero mayor de la matriz es: " << tempMax << " y esta ubicado en la fila " << filaMax + 1 << " columna " << columMax + 1 << endl;
    cout << "El numero menor de la matriz es: " << tempMin << " y esta ubicado en la fila " << filaMin + 1 << " columna " << columMin + 1 << endl;  
}