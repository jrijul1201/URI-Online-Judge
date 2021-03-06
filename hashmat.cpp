#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while (cin >> a)
    {
        int b;
        cin >> b;
        if (b > a)
            cout << b - a << "\n";
        else
            cout << a - b << "\n";
    }
    return 0;
}