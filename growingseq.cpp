#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    while (true)
    {
        cin >> t;
        if (t == 0)
            break;
        for (int i =1 ; i <= t; i++)
        {
            cout << i;
            if (i != t)
                cout << " ";
            else
                cout << "\n";
        }
    }
    return 0;
}