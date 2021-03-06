#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (cin >> t)
    {
        int n[t], c[t], sumnum = 0, sumden = 0;
        for (int i = 0; i < t; i++)
        {
            cin >> n[i] >> c[i];
            sumnum += (n[i] * c[i]);
            sumden += c[i];
        }
        float ans = sumnum / sumden / 100.00000;
        cout << fixed << setprecision(4) << ans << "\n";
    }
    return 0;
}