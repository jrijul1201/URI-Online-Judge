#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    float a, b;
    cin >> a >> b;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << (a + (b * 0.15)) << "\n";
    return 0;
}