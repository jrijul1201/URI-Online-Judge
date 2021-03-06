#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    while (cin.getline(s, 100))
    {
        int l = strlen(s);
        int ob = 0, oi = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] != '*' && s[i] != '_')
                cout << s[i];
            else if (s[i] == '*' && ob == 0)
            {
                cout << "<b>";
                ob = 1;
            }
            else if (s[i] == '*' && ob == 1)
            {
                cout << "</b>";
                ob = 0;
            }
            else if (s[i] == '_' && ob == 0)
            {
                cout << "<i>";
                oi = 1;
            }
            else if (s[i] == '_' && ob == 1)
            {
                cout << "</i>";
                oi = 0;
            }
        }
    }
    return 0;
}