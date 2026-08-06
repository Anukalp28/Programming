
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

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number ";
//     cin>>n;
//     if(n%3==0){
//         if(n%5==0){
//             cout<<"Divisible by both 3 and 5"<<endl;
//         }
//         else{
//             cout<<"Divisible by both 3 but not by 5"<<endl;
//         }
//     }
//     else cout<<"Not Divisible by both 3 and 5"<<endl;
// }

// Q13. Given the number of sides n of a simple polygon and the sum of all its interior angles
// S, write a program to check if the user has provided valid dimensional specifications. Use the
// structural formula:
// S = (n − 2) × 180◦
// Sample — Input: Sides = 3, Sum = 180 ⇒ Output: Valid Polygo

// #include<iostream>
// using namespace std;
// int main(){
//     int n,ang,s;
//     cout<<"Enter sides:";
//     cin>>n;
//     cout<<"Enter Angles:";
//     cin>>ang;

//     s = (n-2)*180;
//     if(s==180 || s==360) cout<<"Valid polygon"<<endl;


// }


// Q14. Take two integers as input. If exactly one of them is odd, print "One is odd". If
// both are odd, print "Both are odd". If neither of them is odd, print "None is odd". Use
// conditional constructs effectively.
// Sample — Input: 4 7 ⇒ Output: One is odd
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two number:";
    cin>>n1;
    cin>>n2;
    if(n1%2!=0 || n2%2!=0){
        cout<<"One is odd"<<endl;
    }
    else if(n1%2!=0 && n2%2!=0){
        cout<<"both are odd"<<endl;
    }
    else cout<<"NOne is odd"<<endl;

}