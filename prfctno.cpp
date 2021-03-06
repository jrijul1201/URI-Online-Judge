#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 1;
        for (int i = 2; i * i < n; i++)
        {
            if (n % i == 0)
                sum += i + (n / i);
        }
        if (sum == n && n != 1)
            cout << n << " eh perfeito\n";
        else
            cout << n << " nao eh perfeito\n";
    }
    return 0;
}