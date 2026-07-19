// ----------------------------Function ----------------------------
/*
#include<stdio.h>
void greet(){
    printf("Good morning\n");
    return;
}

int main(){
    greet();
    greet();
    return 0;
}
// void greet(){
    //     printf("Good morning\n");
    //     return;
// }
    
*/

// #include<stdio.h>

// void us(){
//     printf("You ar in us\n");
//     return printf("return of us\n");    
// }
// void japan(){
//     printf("You ar in japan\n");
//     us();
//     return printf("return of jp\n");
// }
// void india(){
//     printf("You ar in india\n");
//     japan();
//     return printf("return of in");
// }

// int main(){
//     india();
//     return 0;
// }

// sum of 2 number
// #include<stdio.h>

// int add(int a,int b){
//     return a+b;
// }

// int main(){
//     int a ,b;
//     printf("Enter two no.:");
//     scanf("%d %d",&a,&b);
//     int sum = add(a,b);
//     printf("%d",sum);
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("Enter a no.:");
//     scanf("%d",&a);
//     int root = sqrt(a);
//     printf("%d",root);
// }

// prototype

// #include<stdio.h>
// int main(){
//     void fun();
//     fun();
// }

// void fun(){
//     printf("hello");
// }



// 1:05:54 Problem 1 : print nCr using functions
// nCr = n!/r!(n-r)!
// #include<stdio.h>
// int fac(int n){
//     // int n=5,fac;
//     int fac = 1;
//     for (int i=1;i<=n;i++){
//         fac = fac*i;
//     }
//     // printf("%d\n",fac);
//     return fac;
// }
// int main(){
//     int n ,r;
//     printf("Enter no for nCe");
//     scanf("%d %d",&n,&r);
//     // nCr = n!/r!(n-r)!
//     int ncr = fac(n)/(fac(r)*fac(n-r));
//     printf("%d",ncr);
// }


// 1:24:27 Problem 2 : print PASCAL TRIANGLE using nCr function
// 1
// 1, 1
// 1, 2, 1
// 1, 3, 3, 1
// 1, 4, 6, 4, 1
// 1, 5, 10, 10, 5, 1 

// #include<stdio.h>
// int fac(int n){
//     // int n=5,fac;
//     int fac = 1;
//     for (int i=1;i<=n;i++){
//         fac = fac*i;
//     }
//     // printf("%d\n",fac);
//     return fac;
// }
// int nCr(int n,int r){
//     // nCr = n!/r!(n-r)!
//     int ncr = fac(n)/(fac(r)*fac(n-r));
//     // printf("%d",ncr);
//     return ncr;
// }
// int main(){
//     int n = 5;
//     for (int i=0;i<=n;i++){
        
//         for (int j=0;j<=i;j++){
//             // printf("(%d %d)",i,j);
//             printf("%d ",nCr(i,j));
//         }
//         printf("\n");
//     }
//     // printf("%d",nCr(0,0));
// }

// 1 
// 1_1
// 1_2_1
// 1_3_3_1
// 1_4_6_4_1
// 1_5_10_10_5_1

// 1:38:38 Homework 1 : print nPr using functions
// nPr = n!/(n-r)!
// #include<stdio.h>

// int fac(int n){
//     // int n=5,fac;
//     int fac = 1;
//     for (int i=1;i<=n;i++){
//         fac = fac*i;
//     }
//     // printf("%d\n",fac);
//     return fac;
// }
// int main(){
//     int n,r;
//     printf("Enter a no for nPr:");
//     scanf("%d %d",&n,&r);
//     // nPr = n!/(n-r)!
//     int npr = fac(n)/fac(n-r);
//     printf("%d",npr);
// }



// 1:40:22 *Problem 3 : WAP to print pascal triangle without using nCr function
// relation b/w nCr & nCr+1
// nCr+1=ncr*n-r/n+1

// #include<stdio.h>

// int main(){
//     int n = 5;
//     for (int i=0;i<=n;i++){
//         int first = 1;
//         for (int j=0;j<=i;j++){  // n-row>i  r-colum>j
//             printf("%d ",first);
//             first=first*(i-j)/(j+1);
//             // printf("(%d %d)",i,j);
//             // printf("%d ",nCr(i,j));
//         }
//         printf("\n");
//     }
//     // printf("%d",nCr(0,0));
// }

// sin of 1:56:50
// 1:56:19 Problem 4 : Swap two numbers
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     a=2;
//     b=3;
//     printf("a=%d and b=%d\n",a,b);
//     c=a;
//     a=b;
//     b=c;
//     printf("a=%d and b=%d",a,b);
// }

// 2:02:26 Problem 5 : Swap two numbers without using third variable
// #include<stdio.h>
// int main(){
//     int a,b;
//     a=2;
//     b=3;
//     printf("a=%d and b=%d\n",a,b);
//     a,b=b,a;
//     printf("a=%d and b=%d\n",a,b);
// }

// 2:07:12 Pass by Value 
// 2:15:53 Scope of Variable
// 2:18:22 Formal and Actual Parameters
// 2:19:14 **POINTERS
// 2:37:35 Pass by Reference
// 2:51:58 Double Pointer
// 3:01:26 Homework 2 : Print the prime factors of a given number n
// #include<stdio.h>
// int main(){

// }
// 3:01:29 Problem 6 : write a function to find the HCF of 2 given numbers
// 3:11:24 10 True or False questions
// 3:14:09 Homework 3 : print first n factorial numbers using functions
// #include<stdio.h>

// int fac(int n){
//     int temp = n;
//     int fac=1;
//     for (int i=1;i<=n;i++){
//         fac = fac*temp;
//         temp=temp-1;
//         // printf("%d ",fac);
//     }
//     return fac;
// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     printf("Factorial of a no :%d",fac(n));
// }

// 3:14:25 Homework 4 : print first n fibonacci numbers using functions

// #include<stdio.h>

// int prtfib(int n){
//     int a = 0,b=1,c;
//     // printf("Enter no of tarms:");
//     // scanf("%d",&n);
//     if (n>=1) printf("%d ",a);
//     if (n>=2) printf("%d ",b);
    
//     for (int i=1;i<n-1;i++){
//         c = a+b;
//         printf("%d ",c);
//         a=b;
//         b=c;
//     }

//     return b;
// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     printf("\n%dth fibonacci is %d",n,prtfib(n));
// }
