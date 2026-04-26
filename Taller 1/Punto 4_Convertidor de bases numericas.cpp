#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, num2, i = 0, i2 = 0, numorg;
    string result = "", result2 = "", istring = "";
    cout << "Ingrese un numero entre [1 - 255]: ";
    cin >> num;
    num2 = num;
    numorg = num;
    while (num < 1 || num > 255)
    {
        cout << "El numero ingresado es erroneo, ingrese otro: ";
        cin >> num;
    }
    while (num != 0)
    {
        i = num % 2;
        num = num / 2;
        result = to_string(i) + result;
    }

    while (num2 != 0)
    {
        i2 = num2 % 16;
        num2 = num2 / 16;
        istring = to_string(i2);
        if (istring == "10")
        {
            istring = 'A';
        }
        else if (istring == "11")
        {
            istring = 'B';
        }
        else if (istring == "12")
        {
            istring = 'C';
        }
        else if (istring == "13")
        {
            istring = 'D';
        }
        else if (istring == "14")
        {
            istring = 'E';
        }
        else if (istring == "15")
        {
            istring = 'F';
        }
        result2 = istring + result2;
    }
    cout << numorg << " en base 2: " << result << "\n";
    cout << numorg << " en base 16: " << result2 << "\n";
    
}