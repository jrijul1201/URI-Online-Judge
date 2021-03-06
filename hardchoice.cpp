#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,ans=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(a<d)
    ans+=d-a;
    if(b<e)
    ans+=e-b;
    if(c<f)
    ans+=f-c;
    cout<<ans<<"\n";
 return 0;
}