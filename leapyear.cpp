#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while (cin >> n)
    {
        int l = 0, f = 0;
        if (n % 400 == 0)
        {
            cout << "This is leap year.\n";
            l = 1;
        }
        else if (n % 4 == 0 && n % 100 != 0)
        {
            cout << "This is leap year.\n";
            l = 1;
        }
        if (n % 15 == 0)
        {
            cout << "This is huluculu festival year.\n";
            f = 1;
        }
        if (l == 1 && n % 55 == 0)
        {
            cout << "This is bulukulu festival year.\n";
            f = 1;
        }
        if (l == 0 && f == 0)
            cout << "This is an ordinary year.\n";
        cout << "\n";
    }
    return 0;
}