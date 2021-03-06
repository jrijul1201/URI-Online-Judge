#include <bits/stdc++.h>
using namespace std;
int ap(char c)
{
    int i = c - 65;
    return i;
}
int main()
{
    string s;
    int t, a;
    cin >> a;
    while (a--)
    {
        cin >> t;
        int n = 0;
        int sum = 0;
        while (t--)
        {
            cin >> s;
            int l = s.length();
            for (int i = 0; i < l; i++)
            {
                sum += ap(s[i]);
                sum += n;
                sum += i;
            }
            n++;
        }
        cout << sum << "\n";
    }
    return 0;
}