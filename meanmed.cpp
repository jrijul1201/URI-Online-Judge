#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    while (true)
    {
        cin >> a >> b;
        if (a == b && a == 0)
            break;
        cout << (2 * a - b) << "\n";
    }

    return 0;
}