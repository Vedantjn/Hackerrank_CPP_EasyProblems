#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;

        /* Enter your code here */

        // for A
        cout << hex << left << showbase << nouppercase;
        cout << (long long)A << endl;

        // for B;
        cout << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
        cout << B << endl;

        // for C;
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << C << endl;
    }
    return 0;
}