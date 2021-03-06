#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int k = b * log10(a) + 1;
        cout << k << "\n";
    }
    return 0;
}