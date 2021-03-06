#include <bits/stdc++.h>
using namespace std;
int tri(int a, int b, int c)
{
    if ((a < b + c) && (b < a + c) && (c < b + a))
        return 1;
    else
        return 0;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = 0;
    while (true)
    {
        e += tri(a, b, c);
        if (e > 0)
            break;
        e += tri(a, b, d);
        if (e > 0)
            break;
        e += tri(a, d, c);
        if (e > 0)
            break;
        e += tri(d, b, c);
        if (e > 0)
            break;
        if (e == 0)
            break;
    }
    if (e > 0)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}