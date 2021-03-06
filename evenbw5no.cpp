#include <bits/stdc++.h>
using namespace std;
int main()
{
    signed int n[5];
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (n[i] % 2 == 0)
            c++;
    }
    cout << c << " valores pares\n";
    return 0;
}