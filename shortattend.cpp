#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int c = 0;
        cin >> n;
        string name[n];
        string atten[n];
        int s[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> name[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> atten[i];
        }
        int l[n];
        for (int i = 0; i < n; i++)
        {
            l[i] = atten[i].length();
            for (int j = 0; j < l[i]; j++)
            {
                int p = 0, m = 0, a = 0;
                switch (atten[i][j])
                {
                case 'P':
                    p++;
                    break;
                case 'A':
                    a++;
                    break;
                case 'M':
                    m++;
                    break;
                default:
                    break;
                }
                if ((p * 100 / (p + a)) >= 75)
                    s[i] = 0;
                else
                {
                    s[i] = 1;
                    c++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 1)
            {
                cout << name[i];
                c--;
                if (c != 0)
                    cout << " ";
                else
                {
                    cout << "\n";
                }
            }
        }
    }
    return 0;
}