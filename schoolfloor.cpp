#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,c;
    int t1,t2;
    cin>>l>>c;
    t1=(l*c)+((l-1)*(c-1));
    t2=2*(l+c-2);
    cout<<t1<<"\n";
    cout<<t2<<"\n";
    return 0;
}