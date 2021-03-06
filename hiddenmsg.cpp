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
        if (s[0] != '·')
            cout << s[0];
        for (int i = 1; i < l; i++)
        {
            if (s[i] != '·' && s[(i - 1)] == '·')
                cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}
