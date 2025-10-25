#include <iostream>

using namespace std;

int main()
{
    int numeros[3];
    int sum = 0;
    int producto = 1;

    cout << "=== Ingrese tres valores enteros ===" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese el  " << i + 1 << "º valor :" << endl;
        cin >> numeros[i];
        sum += numeros[i];
        producto *= numeros[i];
    }

    int prom = sum / 3;
    int max = numeros[0];
    int min = numeros[0];
    for (int i = 0; i < 3; i++)
    {
        if (numeros[i] < min)
        {
            min = numeros[i];
        }
        if (numeros[i] > max)
        {
            max = numeros[i];
        }
    }
    cout << "La suma es : " << sum << endl;
    cout << "El promedio es : " << prom << endl;
    cout << "El producto es " << producto << endl;
    cout << "El numero mas pequeño es :" << min << endl;
    cout << "El numero mas grande es: " << max << endl;

    return 0;
}
