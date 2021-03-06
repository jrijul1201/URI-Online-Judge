#include <bits/stdc++.h>
using namespace std;
int main()
{
    float r, vol;
    cin >> r;
    vol = 4 * r * r * r * 3.14159 / 3;
    cout << "VOLUME = " << fixed << setprecision(3) << vol << "\n";
    return 0;
}