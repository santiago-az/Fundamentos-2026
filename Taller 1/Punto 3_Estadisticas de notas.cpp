#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int conttotal = 0, contaprob = 0, contreprob = 0;
    float prom = 0.0, nota = 0.0, suma = 0.0, notamax = 0.0, alta = 0.0, notamin = 5.0, baja = 5.0;
    cout << "Ingrese las notas en un rango de (0.0 - 5.0): ";
    while(nota != -1)
    {
        cin >> nota;
        if (nota >= 0.0 && nota <= 5.0)
        {
            conttotal = conttotal + 1;
            suma = suma + nota;
            if (nota >= 3.0)
            {
                contaprob = contaprob + 1;
            }
            if (alta > notamax)
            {
                notamax = alta;
            }
            if (baja < notamin)
            {
                notamin = baja;
            }
            baja = nota;
            alta = nota;
        }
        else if (nota != -1)
        {
            cout << "Debe ingresar un valor entre el rango" << "\n";
        }
    }
    if (alta > notamax)
        {
            notamax = alta;
        }
            
    if (baja < notamin)
        {
            notamin = baja;
        }
    contreprob = conttotal - contaprob;
    prom = suma / conttotal;
    cout << "Cantidad de notas ingresadas: " << conttotal << "\n";
    cout << "Promedio del grupo: " << setprecision(3) << prom << "\n";
    cout << "Nota maxima: " << notamax << "\n";
    cout << "Nota minimia: " << notamin << "\n";
    cout << "Estudiantes aprobados: " << contaprob << "\n";
    cout << "Estudiantes reprobados: " << contreprob << "\n";
}