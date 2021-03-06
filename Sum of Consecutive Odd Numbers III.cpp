#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int out[t], k = 0;
    while (t--)
    {
        int x, y;
        int sum = 0;
        cin >> x >> y;
        for (int i = 0; i < y; i++, x += 2)
        {
            if (x % 2 == 0)
            {
                sum = sum + x + 1;
            }
            else
            {
                sum = sum + x;
            }
        }

        out[k] = sum;
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        cout << out[i] << "\n";
    }
    return 0;
}