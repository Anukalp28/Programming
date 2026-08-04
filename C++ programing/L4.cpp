
// Conditionals 
// Q11. Take two integers as input from the user. Determine and print whether their multiplica-
// tion product is positive, negative, or zero without calculating the absolute numeric valuation
// value if possible.
// Sample — Input: -4 5 ⇒ Output: Product is Negativ

// #include<iostream>
// using namespace std;
// int main(){
//     int n1,n2;
//     cout<<"Enter 1st No.:";
//     cin>>n1;
//     cout<<"Enter 1st No.:";
//     cin>>n2;
//     if((n1>0&&n2>0) ||(n1<0&&n2<0)){
//         cout<<"Product is Positive"<<endl;
//     }
//     else if((n1>0&&n2<0) ||(n1<0&&n2>0)){
//         cout<<"Product is Positive"<<endl;
//     }
//     else{
//         cout<<"Product is Zero"<<endl;
//     }
        
// }

// Q12. Take a positive integer input from the user and check if it is divisible by both 3 and
// 5. Do not use the logical AND (&&) operator inside your conditional test statement. (Hint:
// Think about how mathematical properties like the Lowest Common Multiple (LCM) can reduce
// multi-step rules).

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            cout<<"Divisible by both 3 and 5"<<endl;
        }
        cout<<"Divisible by both 3 but not by 5"<<endl;
    }
    else cout<<"Not Divisible by both 3 and 5"<<endl;
}