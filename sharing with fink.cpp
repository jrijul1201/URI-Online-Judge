#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        int a, b;
        for (int i = 0; i < n; i++)
        {
            a = i * (i + 1) / 2;
            if (a > n)
            {
                i--;
                a = i * (i + 1) / 2;
                break;
            }
            else if (a == n)
            {
                break;
            }
        }
        cout << a << " " << n - a << "\n";
    }
    return 0;
}