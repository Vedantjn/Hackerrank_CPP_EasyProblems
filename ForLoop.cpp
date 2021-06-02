
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    string num[10] = {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> a>>b;
    for (int n = a; n <= b; n++)
    {
        if (n <= 9)
        {
            cout << num[n]<<endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << "even"<<endl;
            }
            else
            {
                cout << "odd"<<endl;
            }
        }
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, n;

//     string num[10] = {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//     cin >> a;
//     cout << endl;
//     cin >> b;

//     for (int n = a; n <= b; n++)
//     {
//         if (1<=n <= 9)
//         {
//             cout << num[n];
//         }
//         else if ((n >= 10) && (n % 2 == 0))
//         {
//             cout << "even";
//         }
//         else
//         {
//             cout << "odd";
//         }
//         cout << endl;
//     }

//     return 0;
// }
