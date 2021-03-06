#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(true)
    {
        cin>>n;
       long long k=n-1;
        if(n==-1)
        break;
        if(n==0)
        cout<<"0\n";
        else
        cout<<k<<"\n";
    }
    return 0;
}