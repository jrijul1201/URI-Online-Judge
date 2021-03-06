#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
   while(t--)
   {
       float x,y;
       cin>>x>>y;
       if(y==0)
       cout<<"divisao impossivel\n";
       else
       {
           float k;
           k=x/y;
           cout<<fixed<<setprecision(1)<<k<<"\n";
       }
       
   }
 return 0;
}