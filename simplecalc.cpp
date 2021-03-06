#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, d, e;
    float c, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (b * c + e * f) << "\n";
    return 0;
}