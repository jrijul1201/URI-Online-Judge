#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (a >= b)
        {
            if ((a - b) % 10 == 0)
                cout << "encaixa\n";
            else
                cout << "nao encaixa\n";
        }
        else
            cout << "nao encaixa\n";
    }
    return 0;
}