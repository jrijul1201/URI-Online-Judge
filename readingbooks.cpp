#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, d, p;
    while (true)
    {
        cin >> q;
        if (q == 0)
            break;
        cin >> d >> p;
        int ans = (d * p * q) / (p - q);
        if (ans > 1)
            cout << ans << " paginas\n";
        else
        {
            cout << ans << " pagina\n";
        }
    }
    return 0;
}