#include <iostream>
#include <string>

using namespace std;

int digitos(string clave)
{
    int contador = 0;
    if (clave.length() >= 8)
    {
        contador++;
    }
    return contador;
}

int letras(string clave)
{
    int contador = 0;
    int contMayus = 0;
    int contMinus = 0;
    int contDigitos = 0;
    for (int i = 0; i < clave.length(); i++)
    {
        if (isupper(clave[i]))
        {
            contMayus++;
        }
        if (islower(clave[i]))
        {
            contMinus++;
        }
        if (isdigit(clave[i]))
        {
            contDigitos++;
        }
    }
    if (contMayus > 0)
    {
        contador = contador + 1;
    }
    if(contMinus > 0)
    {
        contador = contador + 1;
    }
    if (contDigitos > 0)
    {
        contador = contador + 1;
    }
    
    return contador;
}

int main ()
{
    string clave;
    cout << "Ingrese una contraseña: ";
    cin >> clave;
    int contador = letras(clave) + digitos(clave);
    if (contador < 2)
    {
        cout << "La contraseña es debil. " << endl;
    }
    else if (contador >= 2 && contador < 4)
    {
        cout << "La contraseña es media. " << endl;
    }
    else if (contador == 4)
    {
        cout << "La contraseña es fuerte. " << endl;
    }
    return 0;
}