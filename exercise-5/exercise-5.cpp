#include <iostream>

using namespace std;

int main()
{
    cout << "==== {f(x) = x^3 − x^2 + 5 para x = {0, 1, 2, 3, 4, 5} ====" << endl;
    cout << "***********" << endl;
    cout << "x  f(x)" << endl;
    cout << "***********" << endl;
    int arr[6] = {0, 1, 2, 3, 4, 5};
    for (int i = 0; i < 6; i++)
    {
        cout << i << "   " << (arr[i] * arr[i] * arr[i]) - (arr[i] * arr[i]) + 5 << endl;
    }
    cout << "***********" << endl;
    return 0;
}