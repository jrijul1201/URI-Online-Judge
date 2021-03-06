#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    int i = 0;
    while (true)
    {
        i++;
        cin >> a >> b;
        int suffix=0;
        if (a == 0 && b == 0)
            break;
        cout << "Case " << i << ": ";
        if (a % b == 0)
            suffix = a / b - 1;
        else
        {
            suffix = a / b;
        }
        if (suffix > 26)
            cout << "impossible\n";
        else
        {
            cout << suffix << "\n";
        }
    }
    return 0;
}