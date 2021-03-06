#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t,id,c=0;
   cin>>t>>id;
   while(t--)
   {
       int a,b;
       cin>>a>>b;
       if(a==id && b==0)
       c++;
   }
   cout<<c<<"\n";
    return 0;
}