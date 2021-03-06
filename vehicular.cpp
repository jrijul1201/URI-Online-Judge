#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int e = 0;
        cin >> s;
        int l = s.length();
        if (l != 8)
            e = 1;
        else
        {
            if (s[3] != '-')
                e = 1;
            for (int i = 0; i < 3; i++)
            {
                if (s[i] >= 65 && s[i] < 92)
                    e = 0;
                else
                    e = 1;
            }
            for (int i = 4; i < 8; i++)
            {
                if (s[i] >= 48 && s[i] < 58)
                    e = 0;
                else
                    e = 1;
            }
        }
        if (e == 1)
            cout << "FAILURE\n";
        else if (e == 0)
        {
            switch (s[7])
            {
            case 49:
                cout << "MONDAY\n";
                break;
            case 50:
                cout << "MONDAY\n";
                break;
            case 51:
                cout << "TUESDAY\n";
                break;
            case 52:
                cout << "TUESDAY\n";
                break;
            case 53:
                cout << "WEDNESDAY\n";
                break;
            case 54:
                cout << "WEDNESDAY\n";
                break;
            case 55:
                cout << "THURSDAY\n";
                break;
            case 56:
                cout << "THURSDAY\n";
                break;
            case 57:
                cout << "FRIDAY\n";
                break;
            case 48:
                cout << "FRIDAY\n";
                break;

            default:
                break;
            }
        }
    }
    return 0;
}