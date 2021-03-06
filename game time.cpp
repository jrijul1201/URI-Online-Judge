#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, h;
    cin >> a >> b;
    if (a >= b)
        h = 24 - a + b;
    else
        h = b - a;
    cout << "O JOGO DUROU " << h << " HORA(S)\n";
    return 0;
}