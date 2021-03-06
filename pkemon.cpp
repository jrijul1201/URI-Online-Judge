#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin >> b;
        int g[3], d[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> g[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> d[i];
        }
        int da, ga;
        da = (d[0] + d[1]) / 2;
        ga = (g[0] + g[1]) / 2;
        if (d[2] % 2 == 0)
            da += b;
        if (g[2] % 2 == 0)
            ga += b;
        if (ga == da)
            cout << "Empate\n";
        else if (ga < da)
            cout << "Guarte\n";
        else if (ga > da)
            cout << "Dabriel\n";
    }

    return 0;
}