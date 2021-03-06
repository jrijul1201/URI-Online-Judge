#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, l, c;
    while (cin >> n)
    {
        cin >> l >> c;
        getchar();
        getline(cin, s);
        int k = s.length();
        int ans = k / c;
        ans = ans / l;
        ans++;
        cout << ans << "\n";
    }
    return 0;
}