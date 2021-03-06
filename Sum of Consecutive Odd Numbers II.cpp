#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int x, y, tmp;
        cin >> x >> y;
        if (x > y)
        {
            tmp = x;
            x = y;
            y = tmp;
        }
        int sum = 0;
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << "\n";
    }

    return 0;
}