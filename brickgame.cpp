#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int i = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
          cin>>a[i];
        }
        n = (n / 2);
        cout << "Case " << i << ": " << a[n] << "\n";
        i++;
    }
    return 0;
}