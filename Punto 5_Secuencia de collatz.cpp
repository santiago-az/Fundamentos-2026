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
    j = num;   
    for (i = 0; num != 1; i++) 
    {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num * 3 + 1;
        }
        cout << num;

        if (num != 1)
        {
            cout << " -> ";
        }
        if (num > j)
        {
            j = num;
        }
    }
    cout << "\nPasos: " << i << endl;
    cout << "Valor maximo: " << j << endl;
}