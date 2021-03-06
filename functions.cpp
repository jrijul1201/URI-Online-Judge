#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        long int r, c, b, m;
        r = (9 * x * x) + (y * y);
        b = (2 * x * x) + (25 * y * y);
        c = (-100 * x) + (y * y * y);

        m = max(r, b, comp);
        m = max(m, c, comp);

        if (m == r)
            cout << "Rafael ganhou"
                 << "\n";
        if (m == b)
            cout << "Beto ganhou"
                 << "\n";
        if (m == c)
            cout << "Carlos ganhou"
                 << "\n";
    }
    return 0;
}