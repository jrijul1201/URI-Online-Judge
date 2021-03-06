#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int n;
    if (b % (b - a) != 0)
        n = (b / (b - a)) + 1;
    else
        n = (b / (b - a));
    cout << n << "\n";
    return 0;
}