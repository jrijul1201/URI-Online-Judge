#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int dec;
    while (true)
    {
        cin >> dec;
        if (dec == 0)
        {
            break;
            cout << "0\n";
        }
        int rem = 0;
        int i = 0;
        char s[100];
        while (dec > 0)
        {
            rem = dec % 32;
            if (rem < 10)
                s[i] = rem + 48;
            else
            {
                s[i] = rem + 55;
            }

            i++;
            dec = dec / 32;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << s[j];
        }
        cout << "\n";
    }
    return 0;
}