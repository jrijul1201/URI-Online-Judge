#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int h[n];
        char c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (h[i] < 3 && c[i] == 'S')
                h[i] = 1;
            else if (h[i] > 2 && c[i] == 'J')
                h[i] = 1;
            else
            {
                h[i] = 0;
            }
            sum += h[i];
        }
        cout << sum << "\n";
    }
    return 0;
}