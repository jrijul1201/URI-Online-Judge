#include <bits/stdc++.h>
using namespace std;
int main()

{
    int x = 1;
    while (true)
    {
        cin >> x;
        if (x == 0)
            break;
        int sum = 0;
        if (x % 2 != 0)
            x++;
        for (int i = 0; i < 5; i++)
        {
            sum += x;
            x += 2;
        }
        cout << sum << "\n";
    }
    return 0;
}