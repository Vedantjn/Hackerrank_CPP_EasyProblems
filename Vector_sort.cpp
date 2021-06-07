#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i, n;
    int size;

    vector<int> v;

    cin >> size;

    for (i = 0; i < size; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}