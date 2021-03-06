#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    n=123;
    while((n=getchar())!=EOF)
    {
        cin>>n;
        if(n>360)
        n=n-360;
        if(n>=0 && n<90)
        cout<<"Bom Dia!!\n";
        if(n>=90 && n<180)
        cout<<"Boa Tarde!!\n";
        if(n>=180 && n<270)
        cout<<"Boa Noite!!\n";
         if(n>=270 && n<360)
        cout<<"De Madrugada!!\n";
    }
 return 0;
}