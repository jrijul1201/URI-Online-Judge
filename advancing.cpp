#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        int l = x.length();
        int sum = 0;
        if (x == y)
            sum = 0;
        else
        {
            for (int i = 0; i < l; i++)
            {
                if (y[i] < x[i])
                    x[i] -= 26;
                sum += (y[i] - x[i]);
            }
        }
        cout << sum << "\n";
    }
    return 0;
}