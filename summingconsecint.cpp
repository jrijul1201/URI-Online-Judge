#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int n, sum = 0;
    cin >> a;
    cin >> n;
    while (n <= 0)
    {
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        sum += a;
        a++;
    }
    cout << sum << "\n";
    return 0;
}