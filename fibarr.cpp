#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    unsigned long long f[61] = {0};
    f[1] = 1;
    for (int i = 2; i < 61; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << "Fib(" << n << ") = " << f[n] << "\n";
    }
    return 0;
}