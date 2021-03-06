#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        getline(cin, s);

        int l = s.length();
        for (int i = (l / 2) - 1; i >= 0; i--)
        {
            cout << s[i];
        }
        for (int i = l - 1; i >= l / 2; i--)
        {
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}