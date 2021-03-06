#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c, d;
    c = a / b;

    if (a < 0 && b > 0)
        c--;
    if (a < 0 && b < 0)
        c++;
    d = a - (b * c);
    if (b < 0)
        b = -b;
    while (d < 0)
        d += b;
    cout << c << " " << d << "\n";
    return 0;
}