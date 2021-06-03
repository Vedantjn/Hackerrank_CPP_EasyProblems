#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int q;
    cin >> n >> q;
    vector<int> a[n];
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        int y;
        for(int j = 0; j < k; j++){
            cin >> y;
            a[i].push_back(y);
        }
    }
    
    int r, s;
    for(int p = 1; p <= q; p++){
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
    return 0;
}