#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string,std::greater<>> yo = {"rijul", "vyom", "arnav", "aarav"};

    for (const auto& e : yo)
    {
        cout << e << "\n";
    }
    return 0;
}