#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({a, b, c}, comp) << " eh o maior\n";
    return 0;
}