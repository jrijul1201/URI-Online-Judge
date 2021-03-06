#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> n;
        sum += n;
    }
    sum -= 3;
    cout << sum << "\n";
    return 0;
}