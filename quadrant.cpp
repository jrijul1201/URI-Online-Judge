#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 1, y = 1;
    while (true)
    {
        cin >> x >> y;
        if (x == 0 || y == 0)
            break;
        if (x > 0 && y > 0)
            cout << "primeiro\n";
        if (x > 0 && y < 0)
            cout << "quarto\n";
        if (x < 0 && y > 0)
            cout << "segundo\n";
        if (x < 0 && y < 0)
            cout << "terceiro\n";
    }
    return 0;
}