#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    int i = 0;
    while (true)
    {
        i++;
        cin >> a;
        if (a == 0)
            break;
        cin >> b >> c;
        int m = max(b, c);
        if (2 * a > m)
            cout << "Pizza " << i << " fits on the table.\n";
        else
        {
            cout << "Pizza " << i << " does not fit on the table.\n";
        }
    }
    return 0;
}