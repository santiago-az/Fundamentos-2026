#include <iostream>
#include <string>

using namespace std;

int main()
{

    int num, primo = 2, numi, cantidadPrimos = 0;
    string i = "", descomposicion = "";
    cout << "ingrese un numero mayor que 1: ";
    cin >> num;
    numi = num;
    while (num < 1)
    {
        cout << "Ingrese un numero valido entero positivo: ";
        cin >> num;
    }
    while (num != 1)
    {
        while (num % primo == 0 )
        {
            if (descomposicion == "")
            {
                i = to_string(primo);
                descomposicion = descomposicion + i;
            }
            else
            {
                i = to_string(primo);
                descomposicion = descomposicion + "x" + i;
            }
            num = num/primo;
            cantidadprimos++;
        }
        primo++;
        
    }
    cout << numi << " = " << descomposicion;
    cout << "\nCantidad de factores primos: " << cantidadPrimos;
    return 0;
}