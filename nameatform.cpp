#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    int k;
    k = a.length();
    if (k <= 80)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}