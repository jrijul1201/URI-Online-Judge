#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin >> l;
    l--;
    char a;
    cin >> a;
    float m[12][12], ans = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
            if (i == l)
                ans += m[i][j];
        }
    }
    if (a == 'M')
        ans = ans / 12.0;
    cout << fixed << setprecision(1) << ans << "\n";

    return 0;
}