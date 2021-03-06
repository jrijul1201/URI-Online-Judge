#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; t > 0; i += 4, t--)
    {
        cout << i << " " << i + 1 << " " << i + 2 << " PUM\n";
    }
    return 0;
}