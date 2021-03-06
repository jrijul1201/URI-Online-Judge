#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    float c = 0;
    char d;
    int sum = 0;
    while (cin >> s)
    {
        cin>>s;
       cin>>n;
        sum += n;
        c++;
    }
    float ans = sum / c;
    cout << ans << "\n";
    return 0;
}