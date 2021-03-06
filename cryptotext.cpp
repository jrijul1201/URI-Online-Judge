#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int l = s.length();
        vector<char> v;
        for (int i = l; i >= 0; i--)
        {
            if (s[i] > 96)
                v.push_back(s[i]);
        }
        for (auto j : v)
            cout << j;
        cout << "\n";
    }
    return 0;
}