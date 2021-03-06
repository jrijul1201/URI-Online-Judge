#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int k;
    k = a.length();
    if (k <= 140)
        cout << "TWEET\n";
    else
        cout << "MUTE\n";
    return 0;
}