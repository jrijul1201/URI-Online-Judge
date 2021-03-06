#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e=0;
    if(b>c)
    e++;
    if(d>a)
    e++;
    if((c+d)>(a+b))
    e++;
    if(c>0)
    e++;
    if(d>0)
    e++;
    if(a%2==0)
    e++;
    if(e==6)
    cout<<"Valores aceitos\n";
    else
    cout<<"Valores nao aceitos\n";
    return 0;
}