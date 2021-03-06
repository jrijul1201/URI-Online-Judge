#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dec;
        cin >> dec;
        int rem;
        int i = 0;
        char s[10000];
        while (dec > 0)
        {
            rem = dec % 2;
            if (rem == 1)
                s[i] = '1';
            else
                s[i] = '0';
            i++;
            dec = dec / 2;
        }
        int c = 0, max = 0;

        for (int j = i - 1; j >= 0; j--)
        {
            if (s[j] == '1')
            {
                c++;
            }
            else
                c = 0;
            if (max < c)
                max = c;
        }
        cout << max << "\n";
    }
    return 0;
}