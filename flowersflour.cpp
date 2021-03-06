#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (true)
    {
        getline(cin, s);
        if (s == "*")
            break;
        int l = s.length();
        int ans = 0;
        char y = s[0];
        for (int i = 0; i < l; i++)
        {
            if (isspace(s[i]))
            {
                if (islower(y))
                {
                    if (s[i + 1] != y && s[i + 1] != y - 32)
                    {
                        ans = -1;
                        break;
                    }
                }
                if (isupper(y))
                {
                    if (s[i + 1] != y && s[i + 1] != y + 32)
                    {
                        ans = -1;
                        break;
                    }
                }
            }
        }
        if (ans == -1)
            cout << "N\n";
        else
        {
            cout << "Y\n";
        }
    }
    return 0;
}