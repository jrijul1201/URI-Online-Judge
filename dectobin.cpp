#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dec;
    cin >> dec;
    int rem;
    int i = 0;
    char s[100];
    while (dec > 0)
    {
        rem = dec % 2;
        if (rem == 1)
            s[i] = '1';
        else
            s[i] = '0';
        i++;
        dec=dec/2;
    }
    for (int j = i-1; j >= 0; j--)
    {
        cout << s[j];
    }
    return 0;
}