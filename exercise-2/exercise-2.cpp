#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Ingrese dos enteros: ";
    cin >> a;
    cin >> b;

    if (a % b == 0)
    {
        cout << a << " Es multiplo de " << b << endl;
    }
    else
    {
        cout << a << " No es multiplo de " << b << endl;
    }

    cout << "Ingrese un numero: ";
    cin >> c;
    if (c % 2 == 0)
    {
        cout << "El numero " << c << " es par" << endl;
    }
    else
    {
        cout << "El numero " << c << " es impar" << endl;
    }

    cout << 73 % 22 << endl;
    cout << 0 % 100 << endl;
    // cout << 100 % 0;
    cout << -3 % 3 << endl;
    // cout << 9 % 4.5;
    cout << 16 % 2 << endl;
    return 0;
}