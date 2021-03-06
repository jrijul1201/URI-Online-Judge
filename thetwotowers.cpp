#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float x = a / (b + c);
    cout << fixed << setprecision(2) << x << "\n";
    return 0;
}