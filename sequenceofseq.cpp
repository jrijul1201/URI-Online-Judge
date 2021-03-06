#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t = 1;
    while (cin >> n)
    {
        int k = (n * (n + 1) / 2) + 1;
        if (k == 1)
            cout << "Caso " << t << ": " << k << " numero\n";
        else
            cout << "Caso " << t << ": " << k << " numeros\n";
        cout << "0";
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " " << i;
            }
        }
        t++;
        cout << "\n\n";
    }
    return 0;
}