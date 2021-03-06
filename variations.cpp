#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 1;
        int k = 0;
        int l = s.length();
        for (int i = 0; i < l; i++)
        {
            k = 0;
            switch (s[i])
            {
            case 'A':
            {
                sum *= 3;
                k = 1;
            }
            break;
            case 'E':
            {
                sum *= 3;
                k = 1;
            }
            break;
            case 'I':
            {
                sum *= 3;
                k = 1;
            }
            break;
            case 'O':
            {
                sum *= 3;
                k = 1;
            }
            break;
            case 'S':
            {
                sum *= 3;
                k = 1;
            }
            break;
            case 'a':
            {
                sum *= 3;
                k = 1;
            }
            break;
            case 'e':
            {
                sum *= 3;
                k = 1;
            }
            break;
            case 'i':
            {
                sum *= 3;
                k = 1;
            }
            break;
            case 'o':
            {
                sum *= 3;
                k = 1;
            }
            break;
            case 's':
            {
                sum *= 3;
                k = 1;
            }
            break;

            default:
                break;
            }
            if (k == 0)
                sum *= 2;
        }
        cout << sum << "\n";
    }
    return 0;
}