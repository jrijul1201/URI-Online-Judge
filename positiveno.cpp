#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    float a;
    for(int i = 0; i < 6; i++)
    {
      cin>>a;
      if(a>0)
      c++;
    }
    cout<<c<<" valores positivos\n";
 return 0;
}