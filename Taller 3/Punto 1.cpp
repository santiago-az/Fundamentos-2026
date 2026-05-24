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
    
    // Se coloca lo siguiente para generar numeros aleatorios
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 50);

    // Se agrega ciclo para asignar numeros a la matriz
    
    for(i = 0; i < n * n; i++)
    {
        // El dis(gen) coloca numeros al azar dentro del rango
        M[i] = dis(gen);
        cout << M[i] << " ";
        // Se usa el if para asignarle valores a la matriz de la primera fila
        if (i < n)
        {
            Fila1[i] = M[i];
        }
        // Si i % n == n - 1 el elemento pertenece a la ultima columna
        // Porque el residuo indica la posicion dentro de la fila
        if (i % n == n - 1)
        {
            ColumnaUltima[i / n] = M[i];
        }
        // Esto se hace para que cada linea que se acabe haga un salto
        if (i == n - 1 || (i + 1) % n == 0)
        {
            cout << endl;
        }
        // Cuenta cuantos divisores tiene el numero para saber si es primo
        for(repPrimos = 1; repPrimos <= M[i]; repPrimos++)
        {
            if (M[i] % repPrimos == 0)
            {
                contPrimos++;
            }
        }
        // Corrobora que si tiene mas de dos divisores no es primo, si tiene 2 es primo
        if (contPrimos == 2)
            {
                primo = primo + 1;
            }
        contPrimos = 0;
        // Cuenta cuantos numeros pares e impares hay
        if (M[i] % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
        // Cuenta cuantos numeros son divisibles por 3 
        if (M[i] % 3 == 0)
        {
            Div3 = Div3 + 1;
        }
        // Acumula la suma total de la matriz
        sumaMatriz += M[i];
    }
    // Se recorre toda la matriz para dividir cada elemento por el promedio de la matriz
    promedioMatriz = sumaMatriz / (n * n);
    for (i = 0; i < n * n; i++)
    {
        cout << "Promedio digito " << i << ": " << M[i] / promedioMatriz << endl; 
    }
    cout << endl;
    // Recorre la diagonal principal
    cout << "Diagonal principal: ";
    for (i = 0; i < n; i++)
    {
        int indice = (i * n) + i;
        cout << M[indice] << " ";
        suma += M[indice];
    }
    cout << endl;
    // muestra la suma de la diagonal principal
    cout << "La suma de la diagonal principal es: " << suma << endl;
    suma = 0;
    cout << "Diagonal secundaria: ";
    // Recorre la diagonal secundaria, usa el mismo metodo de la principal pero de adelante hacia atras
    for (i = n - 1; i >= 0; i--)
    {
        int indice = (i * n) + (n - 1 - i);
        cout << M[indice] << " ";
        suma += M[indice];
    }
    cout << endl;
    // Se imprimen el resto de valores ya calculados con anterioridad
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