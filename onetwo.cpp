#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int one = 0, two = 0;
        cin >> s;
        int l = s.length();
        if (l == 5)
            cout << "3\n";
        else
        {

            if (s[0] == 'o')
                one++;
            if (s[1] == 'n')
                one++;
            if (s[2] == 'e')
                one++;

            if (s[0] == 't')
                two++;
            if (s[1] == 'w')
                two++;
            if (s[2] == 'o')
                two++;

            if (one >= 2)
                cout << "1\n";
            else
                cout
                    << "2\n";
        }
    }
    return 0;
}