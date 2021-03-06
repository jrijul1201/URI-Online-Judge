#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, c;
    char b;
    cin >> t;
    int ans = 0;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a != c)
        {
            if (isupper(b))
                ans = c - a;
            else
            {
                ans = c + a;
            }
        }
        else
        {
            ans = a * c;
        }
        cout << ans << "\n";
    }

    return 0;
}