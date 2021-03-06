#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int o = 0, z = 0;
    int ans = 0;
    for (int i = 0; i < r; i++)
    {
        z = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] != 0)
                z++;
        }
        if (z == c)
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}