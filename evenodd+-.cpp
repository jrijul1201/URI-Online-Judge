#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    int e=0,o=0,p=0,n=0;
    for(int i = 0; i < 5; i++)
    {
      cin>>a[i];
      if(a[i]>0)
      p++;
      if(a[i]<0)
      n++;
      if(a[i]%2==0)
      e++;
      else
      o++;
    }
    cout<<e<<" valor(es) par(es)\n";
    cout<<o<<" valor(es) impar(es)\n";
    cout<<p<<" valor(es) positivo(s)\n";
    cout<<n<<" valor(es) negativo(s)\n";

 return 0;
}