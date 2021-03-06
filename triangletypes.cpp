#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i];
    }
    sort(x, x + 3, greater<int>());
    double a, b, c;
    a = x[0];
    b = x[1];
    c = x[2];

    if (a >= b + c)
        cout << "NAO FORMA TRIANGULO"
             << "\n";
    else
    {
        if (a * a == b * b + c * c)
            cout << "TRIANGULO RETANGULO"
                 << "\n";
        if (a * a > b * b + c * c)
            cout << "TRIANGULO OBTUSANGULO"
                 << "\n";
        if (a * a < b * b + c * c)
            cout << "TRIANGULO ACUTANGULO"
                 << "\n";
        if (a == b && b == c)
            cout << "TRIANGULO EQUILATERO"
                 << "\n";
        else if (a == b && b != c)
            cout << "TRIANGULO ISOSCELES"
                 << "\n";
        else if (b == c && a != c)
            cout << "TRIANGULO ISOSCELES"
                 << "\n";
        else if (a == c && b != c)
            cout << "TRIANGULO ISOSCELES"
                 << "\n";
    }
    return 0;
}