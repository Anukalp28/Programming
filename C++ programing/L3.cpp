#include<iostream>
using namespace std;
int main(){
    // int a,b;
    // cout<<"Enter 1st no:";
    // cin>>a;
    // cout<<"Enter 2ns no:";
    // cin>>b;
    // cout<<a+b;
    // for (int i=1;i<10;i++){
    //     cout<<i;
    // }
    int n = 5;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            // cout<<"(%d %d),",i,j;
            printf("(%d %d)",i,j);
        }
        printf("\n");
    }
}