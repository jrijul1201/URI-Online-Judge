#include <bits/stdc++.h>
using namespace std;
bool gcd1(int a, int b)
{
    while (a > 0)
    {
        if (a > b)
        {

            a = a - b;
        }
        else
            swap(a, b);
    }
    if (a != 0)
        return true;
    else
        return false;
}
int main()
{
    int a;
    int b, c;
    cin >> a >> b;
    // while (cin >> a)
    // {

    //     cin >> b >> c;
    // }
    if (gcd1(a, b))
        cout << "yes";
    else
        cout << "no";

    return 0;
}