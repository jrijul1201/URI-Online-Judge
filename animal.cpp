#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    if (a == "vertebrado")
    {
        if (b == "ave")
        {
            if (c == "carnivoro")
                d = "aguia";
            else
                d = "pomba";
        }
        else
        {
            if (c == "onivoro")
                d = "homem";
            else
                d = "vaca";
        }
    }
    else
    {
        if (b == "inseto")
        {
            if (c == "herbivoro")
                d = "lagarta";
            else
                d = "pulga";
        }
        else
        {
            if (c == "onivoro")
                d = "minhoca";
            else
                d = "sanguessuga";
        }
    }
    cout << d << "\n";
    return 0;
}