#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if ((a < b + c) && (b < a + c) && (c < b + a))
        cout << "Perimetro = " << fixed << setprecision(1) << (a + b + c) << "\n";
    else
        cout << "Area = " << fixed << setprecision(1) << (a + b) * c / 2 << "\n";
    return 0;
}