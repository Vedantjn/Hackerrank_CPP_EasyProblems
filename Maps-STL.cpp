#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q, y;
    string x;
    cin >> q;

    map<string, int> s;

    while (q--)
    {
        int q1;
        cin >> q1 >> x >> y;

        if (q1 == 1)
        {
            s.insert(make_pair(x, y));
        }
        else if (q1 == 2)
        {
            s.erase(x);
        }
        else
        {
            s[x];
        }
    }

    return 0;
}
