#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n;
        int k = 0;
        cin >> n;
        for (int i = 2; i * i < n + 1; i++)
        {
            if (n % i == 0)
            {

                k = 1;
                break;
            }
        }
        if (k == 0)
            cout << "Prime\n";
        else
            cout << "Not Prime\n";
    }
    return 0;
}