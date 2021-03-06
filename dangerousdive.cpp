#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r;
    while (cin >> n)
    {
        cin >> r;
        int a[r];
        int y = 0;
        for (int i = 0; i < r; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            y = 0;
            for (int j = 0; j < r; j++)
            {
                if (i == a[j])
                    y++;
            }
            if (y == 0)
            {
                cout << i << " ";
            }
        }
        if (n == r)
            cout << "*";

        cout << "\n";
    }
    return 0;
}