#include <iostream>
using namespace std;

bool palindromo(int num)
{
    int original = num, invertido = 0, ultimoDigito;

    while (num != 0)
    {
        ultimoDigito = num % 10;
        invertido = invertido * 10 + ultimoDigito;
        num = num / 10;
    }
    return original == invertido;
}

int main()
{
    int num;
    cout << "introduce un numero mayor o igual a 1: ";
    cin >> num;
    while (num < 1)
    {
        cout << "Digite un numero valido mayor a 1: ";
        cin >> num;
    }
    if (palindromo(num))
    {
        cout << num << " Es palindromo";
    }
    else
    {
        cout << num << " No es palindromo";
    }
    return 0;
}