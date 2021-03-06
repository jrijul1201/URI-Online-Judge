#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long suma, sumb;
    suma = a * (a - 1) / 2;
    sumb = b * (b + 1) / 2;

    cout << sumb - suma << "\n";
    return 0;
}