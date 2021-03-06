#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        long double sum = 0;
        for (float i = 1, j = 0; j < n; i = i * 2, j++)
        {
            sum = sum + i / 12;
        }
        cout << fixed << setprecision(0) << sum/1000 << " kg\n";
    }
    return 0;
}