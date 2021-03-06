#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0;
    int k = s.length();
    for (int i = 0; i < k; i++)
    {
        if (s[i] == '1')
            c++;
    }
    cout << s;
    if (c % 2 == 0)
        cout << "0\n";
    else
    {
        cout << "1\n";
    }

    return 0;
}