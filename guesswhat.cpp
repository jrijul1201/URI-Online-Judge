#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    int g;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> g;
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            s[i] -= g;
            if (s[i] < 0)
                s[i] = -s[i];
        }

        int ans = 0;
        int mx = *min_element(s, s + n);
        for (int i = 0; i < n; i++)
        {
            if (mx == s[i])
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}