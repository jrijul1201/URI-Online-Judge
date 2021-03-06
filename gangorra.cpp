#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (a * b == c * d)
        ans = 0;
    if (a * b > c * d)
        ans = -1;
    if (a *b < c * d)
        ans = 1;
    cout << ans << "\n";
    return 0;
}