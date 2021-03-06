#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a1, b1, b2, a2;
        char h;
        cin >> a1 >> h >> b1 >> b2 >> h >> a2;
        if ((a1 + a2) > (b1 + b2))
            cout << "Time 1"
                 << "\n";
        else if ((a1 + a2) < (b1 + b2))
            cout << "Time 2"
                 << "\n";
        else
        {
            if (a2 > b1)
            {
                cout << "Time 1"
                     << "\n";
            }
            else if (a2 < b1)
            {
                cout << "Time 1"
                     << "\n";
            }
            else
            {
                cout << "Penaltis"
                     << "\n";
            }
        }
    }
    return 0;
}