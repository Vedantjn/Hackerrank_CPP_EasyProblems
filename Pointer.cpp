#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

void update(int *a, int *b)
{
    int x, y;

    x = *a + *b;
    y = *a - *b;
    *a = x;
    *b = abs(y);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    update(pa, pb);
    cout << a << endl;
    cout << b;

    return 0;
}