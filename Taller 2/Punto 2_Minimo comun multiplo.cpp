#include <iostream>

using namespace std;

int mcd(int num1, int num2)
{
    int residuo;
    while (num2 != 0)
    {
    residuo = num1 % num2;
        num1 = num2;
        num2 = residuo;
    }
    return num1;
}

int mcm(int num1, int num2)
{
    return (num1 * num2) / mcd(num1, num2);
}

int main()
{
    int num1, num2;
    cout << "Escriba dos numeros: ";
    cin >> num1;
    cin >> num2;
    cout << "Este es el mcm de los dos numeros: " << mcm(num1, num2);
    return 0;
}