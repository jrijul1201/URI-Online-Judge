#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0, y = 1;
    while (true)
    {
        cin >> x >> y;
        if (x == y)
            break;
        if (x > y)
            cout << "Decrescente\n";
        if (x < y)
            cout << "Crescente\n";
    }
    return 0;
}