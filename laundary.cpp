#include <bits/stdc++.h>
using namespace std;
int main()
{
    int la, lb, sa, sb;
    int n;
    cin >> n;
    cin >> la >> lb >> sa >> sb;
    int l = max(la, sa);
    int s = min(lb, sb);
    if (n >= l && n <= s)
        cout << "possivel\n";
    else
    {
        cout << "impossivel\n";
    }

    return 0;
}