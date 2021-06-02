#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{

    if (a > b && a > c && a > d)
    {
        cout << a;
    }
    else if (b > a && b > c && b > d)
    {
        cout << b;
    }
    else if (c > b && c > a && c > d)
    {
        cout << c;
    }
    else
    {
        cout << d;
    }
    return 0;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    return max_of_four(a, b, c, d);
}

// #include <iostream>
// #include <cstdio>

// using namespace std;

// int maximum(int a, int b, int c, int d)
// {
//     int ans;
//     if (a > b && a > c && a > d)
//     {
//         ans = a;
//     }
//     else if (b > a && b > c && b > d)
//     {
//         ans = b;
//     }
//     else if (c > a && c > b && c > d)
//     {
//         ans = c;
//     }
//     else
//     {
//         ans = d;
//     }
//     return ans;
// }

// int main()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;

//     return maximum(a, b, c, d);

// }

// #include <iostream>
// #include <cstdio>
// using namespace std;

// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */
//     int maximum(int a,int b,int c,int d){
//         if((a>b)&&(a>c)){
//             if(a>d){
//                     return a;            }
//             else {
//                 if((d>a)&&(d>b)){
//                     if(d>c){
//                         return d;
//                     }
//                     else{
//                         if((b>a)&&(b>d)){
//                             if(b>c){
//                                 return b;
//                             }else{
//                                 return c;
//                                 // if((c>a)&&(c>b)){
//                                 //     if(c>d){
//                                 //         cout<<c<<"is the largest no."<<endl;
//                                 //     }
//                                 //     else{
//                                 //         cout<<
//                                 //     }
//                                 // }
//                             }
//                     }
//                     }
//                 }
//             }
//         }

//     }

// int main() {
//     int a, b, c, d;
//     cin>>a>>b>>c>>d;

//     return maximum(a,b,c,d);
// }