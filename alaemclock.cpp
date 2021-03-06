#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1, h2, m1, m2;
    while (true)
    {
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == h2 && h2 == m1 && m1 == m2 && m2 == 0)
            break;
        int hd = 0, md = 0;
        hd = h2 - h1;
        md = m2 - m1;
        if (hd < 0)
            hd += 24;
        if (hd == 0 && md < 0)
            hd += 24;

        if (md < 0)
        {
            hd--;
            md += 60;
        }
        int ans = (hd * 60) + md;
        cout << ans << "\n";
    }
    return 0;
}