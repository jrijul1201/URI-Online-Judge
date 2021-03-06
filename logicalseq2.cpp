#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int i;
    for (i = 1; i <= b; i++)
    {
        cout << i;
        if (i % a == 0)
            cout << "\n";
        else if (i != b)
            cout << " ";
    }
    if (i % a != 0)
        cout << "\n";
    return 0;
}