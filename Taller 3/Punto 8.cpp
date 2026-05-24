#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // n es el numero de estudiantes y m el numero de asignaturas
    int n, m, i, j, estudiante, asignatura;
    float sumaF = 0, tempProm = 0, tempAsig = 5;
    cout << "Escriba el numero de estudiantes: ";
    cin >> n;
    cout << "Escriba el numero de asignaturas: ";
    cin >> m;
    vector<float> calificaciones(n * m, 0);
    vector<float> promedioEstudiante(n);
    vector<float> promedioAsignatura(m);
    for(i = 0; i < n * m; i++)
    {
        // las calificaciones deben estar entre 0.0 y 5.0
        // para que entre al ciclo uso -1
        calificaciones[i] = -1;
        while(calificaciones[i] < 0.0 || calificaciones[i] > 5.0)
        {
            cout << "ingrese una calificacion entre (0.0 y 5.0): ";
            cin >> calificaciones[i];
        }
    }
    cout << "notas organizadas: " << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cout << calificaciones[i * n + j] << " ";
        }
        cout << endl;
    }
    // Promedio para cada estudiante
    for(i = 0; i < n; i++)
    {
        sumaF = 0;
        for(j = 0; j < m; j++)
        {
            sumaF += calificaciones[i * m + j];
        }
        promedioEstudiante[i] = sumaF/m;
        if(promedioEstudiante[i] > tempProm)
        {
            tempProm = promedioEstudiante[i];
            estudiante = i;
        }
        // las filas estan iniciadas en 1 no en 0
        cout << "Promedio fila " << i + 1 << " : " << promedioEstudiante[i] << endl;
    }
    // Promedio para cada asignatura
    for(i = 0; i < m; i++)
    {
        sumaF = 0;
        for(j = 0; j < n; j++)
        {
            sumaF += calificaciones[j * n + i];
        }
        promedioAsignatura[i] = sumaF/n;
        if(promedioAsignatura[i] < tempAsig)
        {
            tempAsig = promedioAsignatura[i];
            asignatura = i;
        }
        // las filas estan iniciadas en 1 no en 0
        cout << "Promedio columna " << i + 1 << " : " << promedioAsignatura[i] << endl;
    }
    cout << "El estudiante " << estudiante + 1 << " tuvo el mayor promedio: " << tempProm << endl;
    cout << "La asignatura " << asignatura + 1 << " tuvo el promedio mas bajo: " << tempAsig << endl;
}