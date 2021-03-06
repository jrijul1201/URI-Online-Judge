#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,h,m,s;
    cin>>n;
    h=n/3600;
    m=(n%3600)/60;
    s=n-3600*h-60*m;
    cout<<h<<":"<<m<<":"<<s<<"\n";
    
 return 0;
}