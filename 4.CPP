// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"enter the number n: ";
//     cin>>n;
//     for(i=n-1;i<=0;i--){
//         for(j=1;j<=i;j++){
//             cout<<"*"<<" ";

//         }
//         cout<<endl;

//     // }
// }
// C++ program to demonstrate
// inverted half triangle using Digits
using namespace std;

#include <iostream>
int main()
{
    int n=4; // took a default value
    for (int i = n; i >= 1; --i) { // loop for iterating
        for (int j = 1; j <= i; ++j) { // loop for printing
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}