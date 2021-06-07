#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1, n2, n3, n4;
    cin >> n1;

    vector<int> v;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> n2;
    cin >> n3 >> n4;

    v.erase(v.begin() + n2 - 1);
    v.erase(v.begin() + n3 - 1, v.begin() + n4 - 1);

    cout << v.size() << endl;

    for (int j = 0; j < v.size(); j++)
    {
        cout << v.at(j) << " ";
    }

    return 0;
}
