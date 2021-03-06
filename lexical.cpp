#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, ans1, ans2;
    cin >> a >> b;
    int i = 0;
    while (true)
    {
        if (a[i] < b[i])
        {
            ans1 = a;
            ans2 = b;
            break;
        }
        else if (a[i] > b[i])
        {
            ans1 = b;
            ans2 = a;
            break;
        }
        else
            i++;
    }
    cout << ans1 << "\n"
         << ans2 << "\n";
    return 0;
}