#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    float dist;
    dist=sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
    cout<<fixed<<setprecision(4)<<dist<<"\n";
 return 0;
}