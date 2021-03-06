#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while (cin >> a)
    {
        int b;
        cin >> b;
        long long f1 = 1, f2 = 1, sum = 0;
        for (int i = 1; i <= a; i++)
        {
            f1 *= i;
        }
        for (int i = 1; i <= b; i++)
        {
            f2 *= i;
        }
        sum = f1 + f2;
        cout << sum << "\n";
    }
    return 0;
}