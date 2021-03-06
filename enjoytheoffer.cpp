#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin >> t;
while (t--)
{
int n,k,ans;
cin>>n>>k;
ans=(n/k)+(n%k);
cout<<ans<<"\n";
}
 return 0;
}