#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l;
    while (cin >> s)
    {
        l = s.length();
        int e = 0;
        stack<char> p;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '(')
                p.push(s[i]);
            else if (s[i] == ')' && p.size() != 0)
                p.pop();
            else if (s[i] == ')' && p.size() == 0)
                e = 1;
        }
        if (p.size() == 0 && e == 0)
            cout << "correct\n";
        else
        {
            cout << "incorrect\n";
        }
    }
    return 0;
}