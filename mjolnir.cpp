#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string name;
    long int n;
    while (t--)
    {
        cin >> name >> n;
        if (name == "Thor")
            cout << "Y\n";
        else
        {
            cout << "N\n";
        }
    }
    return 0;
}