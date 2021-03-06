#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0)
        cout << "Impossivel calcular\n";
    double D;
    D = (b * b) - (4 * a * c);
    if (D < 0)
        cout << "Impossivel calcular\n";
    double r1, r2;
    if (a != 0 && D >= 0)
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        cout << "R1 = " << fixed << setprecision(5) << r1 << "\n";
        cout << "R2 = " << fixed << setprecision(5) << r2 << "\n";
    }
    return 0;
}