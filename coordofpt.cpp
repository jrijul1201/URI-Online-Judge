#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x = 1, y = 1;
    cin >> x >> y;
    if (x == 0 && y == 0)
        cout << "Origem\n";
    if (x == 0 && y != 0)
        cout << "Eixo Y\n";
    if (x != 0 && y == 0)
        cout << "Eixo X\n";
    if (x > 0 && y > 0)
        cout << "Q1\n";
    if (x > 0 && y < 0)
        cout << "Q4\n";
    if (x < 0 && y > 0)
        cout << "Q2\n";
    if (x < 0 && y < 0)
        cout << "Q3\n";

    return 0;
}