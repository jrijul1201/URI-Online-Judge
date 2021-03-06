#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        int l = s.length();
        int i = 0;
        while (true)
        {
            while (s[i] < 64 && i < l)
            {
                i++;
            }
            if (i >= l)
                break;
            if (s[i] > 96 && i < l)
            {
                s[i] = s[i] - 32;
                i++;
            }
            else
                i++;
            if (i >= l)
                break;
            while (s[i] < 64 && i < l)
            {
                i++;
            }
            if (i >= l)
                break;
            if (s[i] < 96 && i < l)
            {
                s[i] = s[i] + 32;
                i++;
            }
            else
                i++;
            if (i >= l)
                break;
        }
        for (int j = 0; j < l; j++)
        {
            cout << s[j];
        }
        cout << "\n";
    }
    return 0;
}