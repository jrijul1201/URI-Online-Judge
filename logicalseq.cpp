#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; t > 0; i++, t--)
    {
        cout << i << " " << i * i << " " << i * i * i << " \n";
        cout << i << " " << i * i + 1 << " " << i * i * i + 1 << " \n";
    }
    return 0;
}