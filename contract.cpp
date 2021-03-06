#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        int a;
        string b;
        cin >> a >> b;
        if (a == 0 && b == "0")
            break;
        int l = b.length();
        for (int i = 0; i < 100; i++)
        {
            if (b[i] == a + 48)
            {
                b.erase(b.begin() + i);
            }
        }
        l = b.length();
        int y = 0;
        for (int i = 0; i < l; i++)
        {
            if (b[i] != '0')
            {
                for (int j = i; j < l; j++)
                {
                    cout << b[j];
                    i++;
                }
                cout << "\n";
                y = 1;
            }
        }
        if (y == 0)
            cout << "0\n";
    }
    return 0;
}