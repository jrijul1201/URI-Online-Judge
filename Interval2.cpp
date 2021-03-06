#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin >> t;
int i=0,o=0;
while (t--)
{
    int a;
    cin>>a;
    if(a<=20&&a>=10)
    i++;
    else
    {
        o++;
    }
    
}
cout<<i<<" in\n";
cout<<o<<" out\n";
 return 0;
}