#include <iostream>
using namespace std;
int main() 
{
    int num, i, j = 0;
    cout << "Agrega un numero: ";
    cin >> num;
    while (num <= 0) 
    {
        cout << "Por favor, ingresa un numero positivo." << endl;
        cin >> num;
    }

    for (i = 0; num != 1; i++) 
    {
        if (num % 2 == 0) {
            num = num / 2;
            cout << num << " -> ";
        } else {
            num = num * 3 + 1;
            cout << num << " -> ";
        }
        if (num > j)
        {
            j = num;
        }
    }
    cout << "El numero de pasos necesarios para llegar a 1 es: " << i << endl;
    cout << "El numero mas grande de la secuencia es: " << j << endl;
}