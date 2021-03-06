#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char s[20];
    while (t--)
    {
        cin >> s;
        int l = strlen(s);
        if (l != 20)
        {
            cout << "INVALID DATA\n";
            continue;
        }
        if (!(s[0] == 'R' || s[0] == 'r'))
        {
            cout << "INVALID DATA\n";
            continue;
        }
        if (!(s[1] == 'A' || s[1] == 'a'))
        {
            cout << "INVALID DATA\n";
            continue;
        }
        for (int i = 0; i < l; i++)
        {
            //     if (s[i] < 48 || s[i] > 60)
            //     {
            //         cout << "INVALID DATA\n";
            //         break;
            //     }
            //     else
            //     {
            if (s[i] > 48 && s[i] < 60)
            {
                for (int j = i; j < l; j++)
                {
                    cout << s[j];
                    i = l;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}