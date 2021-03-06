#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m;
    while (cin >> h)
    {
        cin >> m;
        h = h / 30;
        m = m / 6;
        if (h < 10)
            cout << "0" << h << ":";
        else
            cout << h << ":";
        if (m < 10)
            cout << "0" << m << "\n";
        else
            cout << m << "\n";
    }
    return 0;
}