#include <bits/stdc++.h>
using namespace std;
void sep(long int a, long int arr[])
{    for (int i = 5; i >= 0; i--)
    {        arr[i] = a % 10;
        a = a / 10;    }}
int prime(long int n)
{
    int c = 0;
    for (int i = 2; i * i <= n; i++)
    {        if (n % i == 0)
            c++;    }
    return c;
}
int main()
{    long int n;
    while (cin >> n)
    {        int p = prime(n);
        int dp[5], sum = 0;
        long int arr[5];
        for (int i = 0; i < 5; i++)
        {            sep(n, arr);
            dp[i] = prime(arr[i]);
            sum += dp[i];        }
        if (p == 0 && sum == 0)
            cout << "Super\n";
        else if (p == 0)            cout << "Primo\n";
        else            cout << "Nada\n";
    }    return 0;}