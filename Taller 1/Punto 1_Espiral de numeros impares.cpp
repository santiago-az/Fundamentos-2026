#include <iostream>
using namespace std;
int main()
{
    int n, j, i = 0, r = 0;
    cout << "Ingrese un numero entre  1 y 9: ";
    cin >> n;
    if (n > 9 || n < 1)
    {
        cout << "El numero ingresado no se encuentra dentro del rango";
        return 0;
    }
    for (j = 0; j < n; j++)
    {
        for (i; i <= j;i++)
        {
           cout << 2 * r + 1 << " ";
            r = r + 1;
        }
        i = 0;
        cout << endl;
    }
}