#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int f[n] = {0};
    f[1] = 1;
    for (int i = 2; i < n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << f[i];
        if (i != n - 1)
            cout << " ";
        else
            cout << "\n";
    }
    return 0;
}