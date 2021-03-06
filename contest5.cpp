#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        float x[n], y[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[n] >> y[n];
        }
        float minx, miny;
        minx = *min_element(x, x + n);
        miny = *min_element(y, y + n);
        float maxx, maxy;
        maxx = *max_element(x, x + n);
        maxy = *max_element(y, y + n);
        float rx, ry;
        rx = sqrt(maxx*maxx + minx*minx) / 2.000;
        ry = sqrt(maxx*maxx + minx*minx) / 2.000;
        float cx, cy;
        cx = (maxx + minx) / 2.000;
        cy = (maxy + miny) / 2.000;
        if (rx < 0)
            rx = -rx;
        if (ry < 0)
            ry = -ry;
        float r;
        r = max(rx, ry);
        cout << r << "\n"
             << cx << " " << cy;
    }

    return 0;
}