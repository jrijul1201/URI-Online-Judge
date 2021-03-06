#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }
    int x = 0, y = 0;
    for (int i = 1; i < r-1; i++)
    {
        for (int j = 1; j < c-1; j++)
        {
            if (m[i][j] == 42)
            {
                if (m[i][j - 1] == 7 && m[i][j + 1] == 7 && m[i + 1][j - 1] == 7 && m[i + 1][j] == 7 && m[i + 1][j + 1] == 7 && m[i - 1][j - 1] == 7 && m[i - 1][j] == 7 && m[i - 1][j + 1] == 7)
                {
                    x = i+1;
                    y = j+1;
                    break;
                }
            }
        }
    }
    cout << x << " " << y << "\n";

    return 0;
}