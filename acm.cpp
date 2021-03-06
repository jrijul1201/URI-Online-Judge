#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5], b[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] != b[i])
            ans++;
    }
    if (ans == 5)
        cout << "Y\n";
    else
    {
        cout << "N\n";
    }

    return 0;
}