#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long w, u, l;
        cin >> w;
        int i = sqrt(w);
        while (true)
        {
            u = (i + 1) * (i + 2) / 2;
            l = (i + 1) * (i) / 2;
            if (w >= l && w < u)
            {
                cout << i << "\n";
                break;
            }
            i++;
        }
    }

    return 0;
}