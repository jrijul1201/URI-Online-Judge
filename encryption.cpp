#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    getchar();
    while (n--)
    {
        getline(cin, s);
        reverse(s.begin(), s.end());
        int l = s.length();
        for (int i = 0; i < l; i++)
        {
            if (s[i] > 64 && s[i] < 91)
                s[i] += 3;
            else if (s[i] > 96 && s[i] < 123)
                s[i] += 3;
            if (i >= l / 2)
                s[i]--;
        }
        cout << s << "\n";
    }
    return 0;
}