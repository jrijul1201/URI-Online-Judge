#include <bits/stdc++.h>
using namespace std;
int main()
{
    int di, hi, mi, si, df, hf, mf, sf;
    string tmp;
    int d = 0, h = 0, m = 0, s = 0;
    cin >> tmp >> di;
    cin >> hi >> tmp >> mi >> tmp >> si;
    cin >> tmp >> df;
    cin >> hf >> tmp >> mf >> tmp >> sf;
    d = df - di;
    if (hi > hf)
    {
        h = 24 - hi + hf;
        d--;
    }
    else
        h = hf - hi;
    if (mi > mf)
    {
        m = 60 - mi + mf;
        h--;
    }
    else
        m = mf - mi;

    if (si > sf)
    {
        s = 60 - si + sf;
        m--;
    }
    else
        s = sf - si;
    if (d < 0)
        d = 0;
    if (h < 0)
        h = 0;
    if (m < 0)
        m = 0;
    if (s < 0)
        s = 0;
    cout << d << " dia(s)"
         << "\n";
    cout << h << " hora(s)"
         << "\n";
    cout << m << " minuto(s)"
         << "\n";
    cout << s << " segundo(s)"
         << "\n";

    return 0;
}