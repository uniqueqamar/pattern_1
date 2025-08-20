#include<iostream>
using namespace std;
int main(){
    int i,j,row,column;
    int num=0;
    cout<<"enter the row :"<<endl;
    cin>>row;
    for(i=0;i<=row-1;i++){
        for(j=0;j<=i;j++){
            cout<<num<< " ";
            num++;
        }
    
        cout<<endl;

    }

}