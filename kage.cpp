#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int k = 1;
        int i;
        for (i = 0; i < n; i++)
        {
            if (n == k)
                break;
            k = k * 2;
        }
        cout << i << "\n";
    }
    return 0;
}