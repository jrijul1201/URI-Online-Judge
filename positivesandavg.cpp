#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a[6];
    int c = 0;
    float sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > 0)
        {
            c++;
            sum += a[i];
        }
    }
    cout << c << " valores positivos\n";
    cout << fixed << setprecision(1) << sum / c << "\n";

    return 0;
}