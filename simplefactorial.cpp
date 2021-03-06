#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n, f = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        f = f * i;
    cout  << f << "\n";
    return 0;
}