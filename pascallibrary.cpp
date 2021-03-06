#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    while (true)
    {
        cin >> n >> d;
        if (n == 0 && d == 0)
            break;
        int o = 0;
        int ans = 0;
        int arr[d][n];
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            o = 0;
            for (int j = 0; j < d; j++)
            {
                if (arr[j][i] == 1)
                    o++;
            }
            if (o == d)
            {
                ans++;
                break;
            }
        }
        if (ans == 0)
            cout << "no\n";
        else
        {
            cout << "yes\n";
        }
    }
    return 0;
}