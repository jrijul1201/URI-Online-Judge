#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[9], sum = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int d;
    d = (sum % 9);
    if (d == 0)
        d = 9;
    switch (d)
    {
    case 1:
        cout << "Dasher\n";
        break;
    case 2:
        cout << "Dancer\n";
        break;
    case 3:
        cout << "Prancer\n";
        break;
    case 4:
        cout << "Vixen\n";
        break;
    case 5:
        cout << "Comet\n";
        break;
    case 6:
        cout << "Cupid\n";
        break;
    case 7:
        cout << "Donner\n";
        break;
    case 8:
        cout << "Blitzen\n";
        break;
    case 9:
        cout << "Rudolph\n";
        break;
    default:
        break;
    }
    return 0;
}