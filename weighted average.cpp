#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    float out[t];
    int k = 0;
    while (t--)
    {
        float a, b, c, avg;
        cin >> a >> b >> c;
        avg = ((2 * a) + (3 * b) + (5 * c)) / 10;

        out[k] = avg;
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        cout << fixed << setprecision(1) << out[i] << "\n";
    }
    return 0;
}