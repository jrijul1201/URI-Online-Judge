#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n % 10 == 0)
            n = n - 100;
        n = (n / 100) + 1;
        cout << n << "\n";
    }
    return 0;
}