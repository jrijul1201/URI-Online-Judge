#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=1,m=1;
    long int exp=0;
    while(x!=0){
    cin>>x>>m;
    exp=exp+x*m;
    if(x!=0)
    cout<<exp<<"\n";
    }

 return 0;
}