#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, z;
    cin >> x;
    z = x - 1;
    while (z <= x)
        cin >> z;
    int sum = 0, c = 0;
    for (int i = x; sum <= z; i++)
    {
        sum += i;
        c++;
    }
    cout << c << "\n";
    return 0;
}