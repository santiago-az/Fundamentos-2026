#include <iostream>
#include <string>

using namespace std;

bool perfecto(int n, string &sumados)
{
    int suma = 0;
    for (int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            suma = suma + i;
            if (sumados != "")
            {
                sumados = sumados + " + " + to_string(i);
            }
            else
            {
                sumados = to_string(i); 
            }
        }
    }
    return (suma == n);
}

int main()
{
    int n = -1;
    string sumados = "";
    cout << "Escribe un numero: ";
    
    while (n != 0)
    {
        cout << "Escribe un numero diferente de 0, o 0 para finalizar : ";
        cin >> n;
        if (n != 0)
        {
            if (perfecto(n, sumados))
            {
                cout << n << " es un numero perfecto porque: " << sumados << " = " << n << endl;
            }
        else
            {
                cout << n << " no es un numero perfecto" << endl;
            }
        }
    }
    return 0; 
}