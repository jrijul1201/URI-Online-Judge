#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    float m[12][12], sum = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
            if (i > j)
                sum += m[i][j];
        }
    }
    if (a == 'M')
        sum = sum / 66.00;
    cout << fixed << setprecision(1) << sum << "\n";
    return 0;
}