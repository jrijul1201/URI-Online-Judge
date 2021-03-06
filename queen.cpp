#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, y1, y2;
    while (true)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2 && x2 == y1 && y1 == y2 && y2 == 0)
            break;
        int ans = 0;
        int a, b;
        a = abs(x1 - x2);
        b = abs(y1 - y2);
        if (x1 == x2 && y1 == y2)
            ans = 0;
        else if (a == b || a == 0 || b == 0)
            ans = 1;
        else
        {
            ans = 2;
        }
        cout << ans << "\n";
    }
    return 0;
}