#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, am, b, bm, h, m;
    cin >> a >> am >> b >> bm;
    if (a >= b)
        h = 24 - a + b;
    else
        h = b - a;
    if (am > bm)
    {
        m = 60 - am + bm;
        h--;
    }
    else
        m = bm - am;
    if (h == 24 && m > 0)
        h = 0;
    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)\n";
    return 0;
}