#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set<int> s;
    while (q--)
    {
        int y, x;
        cin >> y >> x;
        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            s.erase(x);
        }
        else if (y == 3)
        {
            set<int>::iterator itr = s.find(x);
            if (itr == s.end())
            {
                cout << "No\n";
            }
            else
            {
                cout << "Yes\n";
            }
        }
    }
    return 0;
}