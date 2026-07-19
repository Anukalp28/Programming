// --------------------------loops -------------------------


// #include<stdio.h>
// int main(){
    
//     for(int i=1;i<=7;i++){
        
//         printf("Hello world\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     int i;
//     printf("Enter a no. :");
//     scanf("%d",&n);
//     for(i=1;i<=n;i=i+1){
//         printf("Hello world\n");
//     }
//     // printf("%d",i);  // no scope of i out side for 
//     printf("%d",i);

//     return 0;
// }

// 30:15 Problem 1 : Print all numbers from 1 to 100

// #include <stdio.h>
// int main(){
//     for(int i=1;i<101;i++){
//         printf("%d \n",i);
//     }
// }

// 34:56 Problem 2 : Print all even numbers from 1 to 100

// #include <stdio.h>
// int main(){
//     for(int i=2;i<101;i=i+2){
//         printf("%d ",i);
//     }
// }

// 37:36 Homework 1 : Print all odd numbers from 1 to 100

// #include<stdio.h>
// int main(){
//     for(int i=1;i<101;i=i+2){
//         printf("%d ",i);
//     }
// }

// 37:50 Problem 3 : Print the table of 19

// #include<stdio.h>
// int main(){
//     for (int i=1;i<11;i++){
//         printf("%d X %d = %d\n",19,i,i*19);
//     }
// }
// 40:07 Homework 2 : Print the table of ‘n’. Take ‘n’ input from user
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);

//     for (int i=1;i<11;i++){
//         printf("%d X %d = %d\n",n,i,i*n);
//     }
// }

// 40:42 Problem 4 : Print the AP - 1,3,5,7,9.. upto ‘n’ terms
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);

//     int k = 1;
//     for(int i=1; i<=n;i++){
//         printf("%d ",k);
//         k = k+2;

//     }
// }

// using formula
// an = a +(n-1)d
// an = 2n-1
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);

//     //      start nth-stop difference
//     for (int i=1;i<=2*n-1;i=i+2){
//         printf("%d ",i);
//     }
// }

// 47:13 Problem 5 : Print the AP - 4,7,10,13.. upto ‘n’ terms
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);

//     for (int i=4;i<=4+(n-1)*3;i=i+3){
//         printf("%d ",i);
//     }
// }

// 50:34 **Printing AP WITHOUT using MATHEMATICAL FORMULA
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);


//     int n1=4,cd=3;
//     for (int i=1;i<=n;i++){

//         printf("%d ",n1);
//         n1=n1+cd;
//     }

//     // for (int i=4;i<=4+(n-1)*3;i=i+3){
//     //     printf("%d ",i);
//     // }
// }

// 58:28 Problem 6 : Print the GP - 1,2,4,8,16.. upto ‘n’ terms
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);

//     int t=1;
//     for (int i=1;i<=n;i++){
//         printf("%d ",t);
//         t=t*2;
//     }
// }

// 1:00:55 Homework 3 : Print the GP - 3,12,48.. upto ‘n’ terms
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);

//     int t=3;
//     for (int i=1;i<=n;i++){
//         printf("%d ",t);
//         t=t*4;
//     }
// }

// 1:01:16 **Problem 7 : Print the AP - 100,97,94.. upto all terms which are positive
// #include<stdio.h>
// int main(){
//     // int n;
//     // printf("Enter a no. :");
//     // scanf("%d",&n);

//     // 100 97 94
//     int t =100;
//     for (int i=1;t>0;i++){
//         printf("%d ",t);
//         t = t - 3;

//     }
// }
// 1:10:48 Homework 4 : Print the GP - 100,50,25.. upto ‘n’ terms

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);

//     float t=100;
//     for (int i=1;i<=n;i++){
//         printf("%f ",t);
//         t=t*(0.5);
//     }
// }

// 1:12:42 BREAK statement
// 1:13:07 Problem 8 : Program to find out if given number is prime or not
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);

//     int flag = 1;
//     for (int i=2;i<n;i++){
//         if (n%i==0){
//             // printf("The no s not prime");
//             flag = 0;
//             break;
//         }
//         else{
//             // printf("The no is prime");
//             flag = 1;
//         }
//     }
//     if (n==1) printf("The no. is not prime not constraint");
//     else if (flag) printf("The no. is a prime");
//     else printf("The no. is constraint");
// }

// 1:38:16 CONTINUE statement
// 1:38:28 Problem 9 : Print all odd numbers from 1 to 100 using CONTINUE
// #include<stdio.h>
// int main(){
//     for(int i=1;i<101;i++){
//         if (i%2==0){
//             continue;
//         }
//         printf("%d ",i);
        
//     }
// }

// 1:43:41 Homework 5 : Print all even numbers from 1 to 100 using CONTINUE
// #include<stdio.h>
// int main(){
//     for(int i=1;i<101;i++){
//         if (i%2!=0){
//             continue;
//         }
//         printf("%d ",i);
        
//     }
// }

// 1:44:15 WHILE LOOP
// #include<stdio.h>
// int main(){
//     int i =1;
//     while (i<101){
//         printf("%d ",i);
//         i++;
//     }
// }
// 1:49:47 INFINITE LOOP
// #include<stdio.h>
// int main(){
//     int i =1;
//     while (i<10){
//         printf("%d ",i);
//         i--;
//     }
// }
// DO WHILE LOOP
// #include<stdio.h>
// int main(){
//     int i =1;
//     // while (i<101){
//     //     printf("%d ",i);
//     //     i++;
//     // }
//     do
//     {
//         printf("Hello\n");
//         printf("%d ",i);
//         i++;
//     } while (i<1);   
// }

// 2:21:25 Questions using Operators
// 2:21:53 Problem 19 : Program to count digits of a given number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);
//     int count = 0;
//     while (n>0){
//         n=n/10;
//         count++;
//     }
//     printf("digits of a given number is :%d",count);
    
// }

// 2:31:20 Problem 20 : Program to print sum of digits of a given number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);
//     int sum = 0,r;
    
//     while (n>0){
//         r = n%10;
//         sum = sum + r;
//         n=n/10;
//     }
//     printf("sum of digits of a given number is :%d",sum);
// }

// 2:39:26 Homework 7 : Program to print sum of even digits of a given number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);
//     int sum = 0,r;
    
//     while (n>0){
//         r = n%10;
//         if (r%2==0){
//             sum = sum + r;

//         }
//         n=n/10;
//     }
//     printf("sum of even digits of a given number is :%d",sum);
// }

// 2:40:22 Problem 21 : Program to print reverse of a given number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);
//     int r,rev=0;
//     while (n>0){
//         r=n%10;
//         rev = rev*10+r;
//         n=n/10;
//     }
//     printf("reverse of a given numbers :%d",rev);
// }

// 2:53:27 Homework 8 : Program to print sum of given number and its reverse
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no. :");
//     scanf("%d",&n);
//     int r ,rev=0,sum = 0;

//     while (n>0){
//         r=n%10;
//         rev = rev*10+r;
//         sum = sum + r;
//         n=n/10;
//     }
//     printf("reverse of a given numbers :%d\n",rev);
//     printf("sum of even digits of a given number is :%d",sum);
// }

// 2:54:04 Problem 22 : Print sum of series - 1+2-3+4-5+6.. upto ‘n’ terms
                    // 1 +2 -3 +4 -5 +6 -7 +8 -9 even +ve add -ve

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter no. of teams :");
//     scanf("%d",&n);

//     int sum = 0;
//     for (int i=1;i<=n;i++){
//         if (i==1) sum = sum + i;
//         else if (i%2==0) sum = sum + i;
//         else sum = sum - i;
//     }
//     printf("Sum of the series is :%d",sum);

// }

// 3:07:40 Problem 23 : Print the factorial of given number
#include<stdio.h>
int main(){ //  5!=5*2*3*2*1
    int n;
    printf("Enter a NO :");
    scanf("%d",&n);
    int temp = n;
    int fac=1;
    for (int i=1;i<=n;i++){

        fac = fac*temp;
        temp=temp-1;
        // printf("%d ",fac);
    }
    printf("factorial of given number:%d",fac);
}

// 3:16:09 Homework 9 : Print the factorials of first ‘n’ numbers
// #include<stdio.h>
// int main(){ //  5!=5*2*3*2*1
//     int nth;
//     printf("Enter nth no.:");
//     scanf("%d",&nth);
//     for (int i=1;i<=nth;i++){
//         int n=i;
//         // printf("Enter a NO :");
//         // scanf("%d",&n);
//         int temp = n;
//         int fac=1;
//         for (int i=1;i<=n;i++){
    
//             fac = fac*temp;
//             temp=temp-1;
//             // printf("%d ",fac);
//         }
//         printf("factorial of number %d! = %d\n",i,fac);

//     }
// }

// 3:21:43 Problem 25 : Print the nth fibonacci number

// #include<stdio.h>
// int main(){
//     int n,a=0,b=1,c;
//     printf("Enter no of tarms:");
//     scanf("%d",&n);
//     if (n==1) printf("%d ",a);
//     else if (n==2) printf("%d ",b);
//     else{
//         for (int i=2;i<n;i++){
//             c = a+b;
//             a=b;
//             b=c;
//         }
//         printf("%d ",c);
//     }
// }


// 3:38:36 Homework 10 : Print the first ‘n’ fibonacci numbers
// #include<stdio.h>
// int main(){
//     int n,a=0,b=1,c;
//     printf("Enter no of tarms:");
//     scanf("%d",&n);
//     if (n>=1) printf("%d ",a);
//     if (n>=2) printf("%d ",b);
    
//     for (int i=1;i<n;i++){
//         c = a+b;
//         printf("%d ",c);
//         a=b;
//         b=c;
//     }

// }


// 3:39:39 Problem 26 : Given 2 numbers ‘a’ and ‘b’ , find ‘a’ raised to the power ‘b’.
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter no.raise to power:");
//     scanf("%d%d",&a,&b);
//     c=1;
//     for (int i=1;i<=b;i++){
//         c=c*a;
//         // printf(" %d",c);
//     }
//     printf("a^b is :%d",c);
// }

// 3:48:09 Problem 27 : Print all alphabet and their corresponding ASCII values
// #include<stdio.h>
// int main(){
//     char chr=65;
//     for (int i=1;i<=26;i++){
//         printf("%c = %d\n",chr,chr);
//         chr=chr+1;
//     }
// }

// 3:55:31 Homework 11 : Print all armstrong numbers between 1 and 500
// #include<stdio.h>
// int main(){
//     for (int i=0;i<=500;i++){
//         int n=i;
//         // printf("Enter a no.:");
//         // scanf("%d",&n);
//         int temp =n;
//         int sum = 0;
//         while (temp>0){
//             // printf("%d ",temp);
//             sum =sum+(temp%10)*(temp%10)*(temp%10);
//             temp = temp/10;
//         }
//         if (sum==n){
//             printf("armstrong numbers:%d\n",n);
//         }
//         // else{
//         //     printf("not armstrong numbers:%d",n);
//         // }

//     }
// }
