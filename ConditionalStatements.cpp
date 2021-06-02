#include<iostream>
using namespace std;

int main() {
int in;
string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

cin >> in;

if(in > 9){
    cout << num[0];
}
else{
    cout << num[in];
}

return 0;
}



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     string num[]={"one","two","three","four","five","six","seven","eight","nine"};

    
//      if (n==1)
//     {
//         cout<<num[0];
//     }
//     else if (n==2)
//     {
//         cout<<num[1];
//     }
//     else if (n==3)
//     {
//         cout<<num[2];
//     }
//     else if (n==4)
//     {
//         cout<<num[3];
//     }
//     else if (n==5)
//     {
//         cout<<num[4];
//     }
//     else if (n==6)
//     {
//         cout<<num[5];
//     }
//     else if (n==7)
//     {
//         cout<<num[6];
//     }
//     else if (n==8)
//     {
//         cout<<num[7];
//     }
//     else if (n==9)
//     {
//         cout<<num[8];
//     }
//     else{
//         cout<<"Greater than 9";
//     }
    

//     return 0;
// }