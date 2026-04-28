#include <iostream>

using namespace std;

string palabra(string frase)
{
    for (int i = 0; i < frase.length(); i++)
    {
        if (i == 0 || frase[i - 1] == ' ')
        {
            frase[i] = toupper(frase[i]);
        }
    }
    return frase;
}
int main()
{
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    string resultado = palabra(frase);
    cout << "Frase con la primera letra de cada palabra en mayuscula: " << resultado << endl;
    return 0;
}