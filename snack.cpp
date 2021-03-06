#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    float t=0;
    cin>>x>>y;
    switch (x)
    {
    case 1: t+=4.00;
        break;
    case 2: t+=4.50;
        break;
    case 3: t+=5.00;
        break;
    case 4: t+=2.00;
        break;
    case 5: t+=1.50;
        break;
    default:
        break;
    }
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<t*y<<"\n";
    return 0;
}