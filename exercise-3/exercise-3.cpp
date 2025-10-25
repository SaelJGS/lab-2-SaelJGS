#include <iostream>

using namespace std;

int main()
{
    char numerosJuntos[5];

    cout << "Ingrese un numero de 5 digitos: ";
    cin >> numerosJuntos;

    cout << numerosJuntos[0] << " " << numerosJuntos[1] << " " << numerosJuntos[2] << " " << numerosJuntos[3] << " " << numerosJuntos[4] << endl;

    cout << "24 / 5 = " << 24 / 5 << endl;
    cout << "18 % 3 = " << 18 % 3 << endl;
    cout << "13 % 9 = " << 13 % 9 << endl;
    cout << "3 / 2 % 2 = " << 3 / 2 % 2 << endl;

    int numerosSeparados[3];
    cout << "=== Ingrese Tres digitos Enteros === " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingre el " << i + 1 << "º valor : ";
        cin >> numerosSeparados[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << numerosSeparados[i] << "";
    }
    return 0;
}