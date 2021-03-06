#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
 int sum = 0;
    for (int i = a; i < b + 1; i++)
    {
        if (i % 13 != 0)
            sum += i;
    }
    cout<<sum<<"\n";
    return 0;
}