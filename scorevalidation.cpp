#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    int n = 0;
    float ans=0;
    while (n != 2)
    {
        cin>>a;
        if(a<=0 || a>10)
        cout<<"nota invalida\n";
        else
        {
            n++;
            ans+=a;
        }
        
    }
    cout<<"media = "<<fixed<<setprecision(2)<<ans/2<<"\n";
    return 0;
}