#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        int sum = 1;
        for (int i = 1; i < n; i++)
        {
            sum += (n - i + 1) * (n - i + 1) ;
        }
        cout << sum << "\n";
    }
    return 0;
}