#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Digite tres numeros enteros : " << endl;
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a > c && a < b))
        cout << "El numero de medio es " << a << endl;
    else if ((b > a && b < c) || (b > c && b < a))
        cout << "El numero de medio es " << b << endl;
    else
        cout << "El numero de medio es " << c << endl;

    return 0;
}
