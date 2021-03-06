#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    int y=0,m=0,d=0;
    y = n / 365;
    n = n % 365;
    m = n / 30;
    n = n % 30;
    d = n / 1;
    n = n % 1;
    cout<<y<<" ano(s)\n"<<m<<" mes(es)\n"<<d<<" dia(s)\n";
 return 0;
}