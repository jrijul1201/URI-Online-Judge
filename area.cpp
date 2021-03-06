#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double tri, cir, tra, qua, ret;
    tri = a * c / 2.0;
    cir = 3.14159 * c * c;
    tra = (a + b) * c / 2.0;
    qua = b * b;
    ret = a * b;
    cout << "TRIANGULO: " << fixed << setprecision(3) << tri << "\n";
    cout << "CIRCULO: " << fixed << setprecision(3) << cir << "\n";
    cout << "TRAPEZIO: " << fixed << setprecision(3) << tra << "\n";
    cout << "QUADRADO: " << fixed << setprecision(3) << qua << "\n";
    cout << "RETANGULO: " << fixed << setprecision(3) << ret << "\n";
    return 0;
}