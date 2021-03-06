#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    while (true)
    {
        cin >> r >> c;
        if (r == 0 && c == 0)
            break;
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
            o = 0;
            for (int j = 0; j < c; j++)
            {
                if (arr[i][j] == 1)
                    o++;
            }
            if (o == c)
            {
                ans++;
                break;
            }
        }
        for (int i = 0; i < r; i++)
        {
            z = 0;
            for (int j = 0; j < c; j++)
            {
                if (arr[i][j] == 0)
                    z++;
            }
            if (z == c)
            {
                ans++;
                break;
            }
        }
        for (int i = 0; i < c; i++)
        {
            o = 0;
            for (int j = 0; j < r; j++)
            {
                if (arr[j][i] == 1)
                    o++;
            }
            if (o == r)
            {
                ans++;
                break;
            }
        }
        for (int i = 0; i < c; i++)
        {
            z = 0;
            for (int j = 0; j < r; j++)
            {
                if (arr[j][i] == 0)
                    z++;
            }
            if (z == r)
            {
                ans++;
                break;
            }
        }
        cout << 4-ans << "\n";
    }
    return 0;
}