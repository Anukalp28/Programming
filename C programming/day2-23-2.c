// if - else statements 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     if(n%2==0){
//         printf("Even number");
//     }
//     // if(n%2!=0){
//     //     printf("odd number");
//     // }
//     else{
//         printf("odd number");
//     }
     
//     return 0;
// }


// take no tels if it divisible by 5 or not 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     if (n%5==0){
//         printf("numer is divisible by 5");
//     }
//     else{
//         printf("numer is not divisible by 5");
//     }
// }

// leap year logic  //    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
// }
// absolute value ie maths.mod(x) -> |-x|=x
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     if(n<0){
//         n = n*(-1);
    
//     }
//     printf("The absolute value is %d",n);
// }

// q at 33:12

// #include<stdio.h>
// int main(){
//     float cp,sp;
//     printf("Enter a cost price :");
//     scanf("%f",&cp);
//     printf("Enter a selling price :");
//     scanf("%f",&sp);

//     if (sp>cp){
//         printf("profit of %f",sp-cp);
//     }
//     else if (sp<cp){
//         printf("lose of %f",cp-sp);
//     }
//     else{
//         printf("neutral");
//     }

// }

// Q at 41:00 area = lb peermeter = 2(l+b)

// #include<stdio.h>
// int main(){
//     float l,b;
//     printf("Enter length :");
//     scanf("%f",&l);
//     printf("Enter Breadth :");
//     scanf("%f",&b);

//     float ar,pei;
//     ar = l*b;
//     pei = 2*(l+b);
//     if(ar>pei){
//         printf("Area of rectangle is grater then perimeter");
//     }
//     else if (ar<pei){
//         printf("Area of rectangle is NOT grater then perimeter");
//     }
//     else{
//         printf("Area of rectangle is Equal to is perimeter");
//     }

// }

// multipal conditions 

// take +ve no as input and tell if its a 3 digit no


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);


//     if (n>0){
//         if (n>99 && n<1000){
//             printf("its a three digit number");
//         }
//         else{
//             printf("its NOT a three digit number");
//         }
    
//     }
//     else{
//         printf("Entered no is -ve");
//     }
    
// }

// Q take 3 no and Greatest of them

// #include<stdio.h>
// int main(){
//     int n1,n2,n3;
//     printf("Enter a 1st number :");
//     scanf("%d",&n1);
//     printf("Enter a 2nd number :");
//     scanf("%d",&n2);
//     printf("Enter a 3rd number :");
//     scanf("%d",&n3);

//     if (n1>n2 && n1>n3){
//         printf("1st no is greater %d",n1);
//     }
//     else if (n1<n2 && n2>n3){
//         printf("2nd no is greater %d",n2);
//     }
//     else if (n1>n2 && n2<n3){
//         printf("3st no is greater %d",n3);
//     }
//     else if (n1<n2 && n2<n3){
//         printf("3st no is greater %d",n3);
//     }
    
// }

// without logical operator 

// #include<stdio.h>
// int main(){
//     int a ,b ,c ;
//     printf("Enter A no.");
//     scanf("%d",&a);
//     printf("Enter B no.");
//     scanf("%d",&b);    
//     printf("Enter c no.");
//     scanf("%d",&c);

//     if (a>b){
//         if (a>c){
//             printf("A = %d is greatest",a);
//         }
//         else{
//             printf("C = %d is greatest",c);
//         }
//     }
//     else{ // b>a a out 
//         if (b>c){
//             printf("B = %d is greatest",b);
//         }
//         else{ // c>b 
//             printf("C = %d is greatest",c);
//         }
        
//     }

// }

// for 4 numbers
// smolest of 3 using logical operator and without  

// Q at 1:5


// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter a 1st side :");
//     scanf("%d",&a);
//     printf("Enter a 2nd side :");
//     scanf("%d",&b);
//     printf("Enter a 3rd side :");
//     scanf("%d",&c);
    
//     if (a+b>c && 
//         b+c>a &&
//         c+a>b){
//             printf("ABC is a triangle ");
//         }
//     else{
//         printf("ABC is not a triangle");
//     }
// }

// Q Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a 1st side :");
//     scanf("%d",&n);
//     // if (n%5==0 || n%3==0){
//     //     if (n%15!=0){
//     //         printf("number is divisible by 3 or 5 but not 15");
//     //     }
//     //     else{
//     //         printf("number is divisible by 15");
//     //     }

//     // }
//     if ((n%5==0 || n%3==0) && (n%15!=0)){
//         printf("number is divisible by 3 or 5 but not 15");
//     }
//     else{
//         printf("NOT divisible by 15");
//     }
    
// }

// Q: Take input percentage of a student and print the Grade according to marks:
//         90-100 Excellent
//         80-90 Very Good
//         70-80 Good
//         60-70 Can do better
//         50-60 Average
//         40-50 Below Average
//         <40 Fail

// Q: Given three points (x1, y1), (x2, y2) and (x3, y3),
//  write a program to check if all the three points fall on one straight line.

//A--------B-----------C
//  m of AB = m of BC {m is slope

// #include<stdio.h>
// int main(){

//     float x1,x2,x3,y1,y2,y3;
//     printf("Enter values of x1 y1 :");
//     scanf("%f %f",&x1,&y1);
//     printf("Enter values of x4 y2 :");
//     scanf("%f %f",&x2,&y2);
//     printf("Enter values of x3 y3 :");
//     scanf("%f %f",&x3,&y3);

//     float m1,m2;
//     m1 = (y2-y1)/(x2-x1);
//     m2 = (y3-y2)/(x3-x2);

//     if (m1 == m2){
//         printf("Three points is a straight line");
//     }
//     else{
//         printf("Three points is NOT a straight line");
//     }

// }

// Q: Given a point (x, y), write a program to find out if it lies on the x-axis,
// y-axis or at the origin, viz. (0,0).

// #include<stdio.h>
// int main(){

//     float x,y;
//     printf("Enter values of x y :");
//     scanf("%f %f",&x,&y);

//     if (x==0 && y==0){
//         printf("point is on origin");
//     }
//     else if (x==0){
//         printf("point is on Y-axis");
//     }
//     else if (y==0){
//         printf("point is on X-axis");
//     }
//     else{
//         printf("point not on aney axis");
//     }
// }

// ----------Ternary operator  (shortcut of if elif else)

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     // Ternary operator
//     // exp1 ? exp2 : exp3
//     // (condition) ? (if block) : (else block)

//     n%2==0 ? printf("Even number") : printf("odd number");

//     // if(n%2==0){
//     //     printf("Even number");
//     // }
//     // else{
//     //     printf("odd number");
//     // }
     
//     return 0;
// }

#include <stdio.h>
int main(){
    int x = 10,y = 20;
    if (x==y);
    printf("\n%d%d",x,y);
}