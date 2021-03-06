#include <bits/stdc++.h>
using namespace std;
int main()
{
    double arr[100];
    double k;
    cin >> k;
    arr[0]=k;
    for(int i = 1; i < 100; i++)
    {
       arr[i]=arr[i-1]/2.0000;
    }
    for(int i = 0; i < 100; i++)
    {
       cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<arr[i]<<"\n";
    }
    return 0;
}