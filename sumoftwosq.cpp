#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sq[101];
    for (int i = 0; i < 101; i++)
    {
        sq[i] = (i) * (i);
    }
    while (cin >> n)
    {
        int ans = 0;
        for (int i = 1; i * i < n; i++)
        {
            for (int j = 1; j * j < n; j++)
            {
                if ((sq[i] + sq[j]) == n)
                    ans = 1;
            }
        }
        if (ans == 0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}