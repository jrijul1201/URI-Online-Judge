#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        int acm = 0, f = 1;
        if (n == 0)
            break;
        for (int i = 1; i < 6; i++)
        {
            f = f * i;
            acm += (n % 10) * f;
            n = n / 10;
        }
        cout << acm << "\n";
    }
    return 0;
}