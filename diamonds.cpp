#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int l = 0, r = 0;
        cin >> s;
        int k = s.length();
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '<')
                l++;
            else if (s[i] == '>')
                r++;
        }
        int ans = 0;
        ans = min(l, r);
        cout << ans << "\n";
    }
    return 0;
}