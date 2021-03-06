#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (cin >> t)
    {
        while (t--)
        {
            string c;
            getline(cin, c);
            int s = 0, d = 0;
            int l = c.length();
            for (int i = 0; i < l; i++)
            {
                if (c[i] == '.')
                    d++;
                else
                    s++;
            }
            cout << d << " " << s << "\n";
        }
    }
    return 0;
}