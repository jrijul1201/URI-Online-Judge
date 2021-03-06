#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,c;
    cin>>t>>c;
    string s;
    for(int i=0;i<c;i++)
    {
        cin>>s;
        if(s=="fechou")
        t++;
        if(s=="clicou")
        t--;
    }
    cout<<t<<"\n";
    return 0;
}