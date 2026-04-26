#include <iostream>
#include <string>

using namespace std;

char censura(char letra)
{
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' )
    {
        return '*';
    }
    else
    {
        return letra;
    }
}

int main()
{
    int i;
    string frase, fraseCorregida;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    for (i = 0; i < frase.length(); i++)
    {
       frase[i] = censura(frase[i]);
       fraseCorregida = fraseCorregida + frase[i];
    }
    cout << "Frase censurada: " << fraseCorregida;
}