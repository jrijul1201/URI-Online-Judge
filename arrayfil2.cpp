#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int k;
    cin >> k;
    for (int j = 0; j < 1000; j += k)
    {
        for (int i = 0; i < k,(j+i)<1000; i++)
        {
            arr[j + i] = i;
        }
    }
    for(int i = 0; i < 1000; i++)
    {
       cout<<"N["<<i<<"] = "<<arr[i]<<"\n";
    }
    return 0;
}