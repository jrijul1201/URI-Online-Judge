#include <bits/stdc++.h>
using namespace std;
void sep(long int a, int arr[])
{
    for (int i = 9; i >= 0; i--)
    {
        arr[i] = a % 10;
        a = a / 10;
    }
}
int main()
{

    while (true)
    {
        long int a, b;
        int sum = 0, c = 0, k = 0;
        cin >> a >> b;
        if (b == 0 && a == 0)
            break;
        int arr[10], brr[10];
        sep(a, arr);
        sep(b, brr);
        for (int i = 9; i >= 0; i--)
        {
            sum = k + arr[i] + brr[i];
            if (sum >= 10)
            {
                c++;
                k = 1;
            }
            else
                k = 0;
        }
        if (c == 0)
            cout << "No carry operation."
                 << "\n";
        if (c == 1)
            cout << "1 carry operation."
                 << "\n";
        if (c > 1)
            cout << c << " carry operations."
                 << "\n";
    }
    return 0;
}