#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    while (cin >> n)
    {
        cin >> b;
        int go[n][2];
        int pt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> go[i][0] >> go[i][1];
            go[i][0] -= go[i][1];
        }
        sort(go,go+n);
        while (b--)
        {
            for (int i = 0; i < n; i++)
            {
                if (go[i][0] < 0)
                {
                    go[i][0]++;
                    b--;
                }
                if (b == 0)
                    break;
            }
        }
        while(b--)
        {
            for (int i = 0; i < n; i++)
            {
                if (go[i][0] == 0)
                {
                    go[i][0]++;
                    b--;
                }
                if (b == 0)
                    break;
            }
        }
         while(b--)
        {
            for (int i = 0; i < n; i++)
            {
                if (go[i][0] == 0)
                {
                    go[i][0]++;
                    b--;
                }
                if (b == 0)
                    break;
            }
        }
        for(int i = 0; i < n; i++)
        {
if(go[i][0]>)
        }

    }
    return 0;
}