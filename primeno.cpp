#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        int c = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                c++;
        }
        if (c == 0)
            cout << n << " eh primo\n";
        else
            cout << n << " nao eh primo\n";
    }
    return 0;
}