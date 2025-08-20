#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the value of n: ";cin>>n;
    for(i=n-1;i>=0;i--){
        for(j=0;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }

}