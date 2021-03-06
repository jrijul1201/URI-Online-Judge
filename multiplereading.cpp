#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        int l = s.length();
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'W')
                sum++;
            else if (s[i] == 'R')
            {
                sum++;
                int t = i;
                for (int j = i; j < t + n; j++, i < l)
                {
                    if (s[j] == 'R')
                        i++;
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}