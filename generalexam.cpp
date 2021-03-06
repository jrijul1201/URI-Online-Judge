#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int g[n], p[q];
    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> p[i];
    }
    sort(g, g + n, greater<int>());
    int k;
    if (n >= q)
        k = q;
    else
        k = n;
    for (int j = 0; j < k; j++)
    {
        cout << g[p[j] - 1] << "\n";
    }
    return 0;
}