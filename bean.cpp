#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b[4], ans;
    for (int i = 0; i < 4; i++)
    {
        cin >> b[i];
        if (b[i] == 1)
            ans = i+1;
    }
    cout<<ans<<"\n";

    return 0;
}