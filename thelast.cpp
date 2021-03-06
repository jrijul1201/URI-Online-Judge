#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    while (cin >> r)
    {

        cin >> c;
        int ashx, ashy, pikx, piky;
        int m[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> m[i][j];
                if (m[i][j] == 1)
                {
                    ashx = i;
                    ashy = j;
                }
                if (m[i][j] == 2)
                {
                    pikx = i;
                    piky = j;
                }
            }
        }
        int tim1 = pikx - ashx;
        int tim2 = piky - ashy;
        if (tim1 < 0)
            tim1 = -tim1;
        if (tim2 < 0)
            tim2 = -tim2;
        int time = tim1 + tim2;

        cout << time << "\n";
    }

    return 0;
}