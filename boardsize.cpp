#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, r;
    while (cin >> x)
    {
        cin >> y >> r;
        int ar = x * y;
        while (r--)
        {
            int a, b;
            cin >> a >> b;
            if (ar >= a * b)
                cout << "Sim\n";
            else
                cout << "Nao\n";
        }
    }
    return 0;
}