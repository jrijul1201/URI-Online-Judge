#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        n++;
    for (int i = 0; i < 11; i += 2)
    {
        cout << n + i << "\n";
    }
    return 0;
}