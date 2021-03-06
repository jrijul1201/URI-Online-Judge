#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    while (getline(cin, s))
    {
        k = s.length();
        int u = 0, l = 0, d = 0;
        for (int i = 0; i < k; i++)
        {
            if (isupper(s[i]))
                u++;
            if (islower(s[i]))
                l++;
            if (isdigit(s[i]))
                d++;
        }
        if (k != (l + d + u))
        {
            cout << "Senha invalida.\n";
        }
        else if (k < 6 || k > 32 || u == 0 || l == 0 || d == 0)
        {
            cout << "Senha invalida.\n";
        }
        else
        {
            cout << "Senha valida.\n";
        }
        getchar();
    }
    return 0;
}