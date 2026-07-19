// #include <stdio.h>
// int main(){

//     float p,r,t,intrest;

//     printf("Enter principal amount:");
//     scanf("%f",&p);

//     printf("Enter rate of intrest:");
//     scanf("%f",&r);

//     printf("Enter time :");
//     scanf("%f",&t);

//     intrest = (p*r*t)/100;

//     printf("the si is :%.2f",intrest);
//     return intrest;
// }

// #include <stdio.h>
// int main(){
//     int x;
//     x = 5;
//     printf("%d",x);

//     printf("\n--------\n");

//     x = x + 50;
//     printf("%d",x);
//     printf("\n--------\n");
//     x = x - 30;
//     printf("%d",x);
// }

// #include <stdio.h>

// // float x = 5;
// // float y = 2;

// int main(){

//     // printf("%d",x+y);
//     // printf("\n%d",x-y);
//     // printf("\n%d",x*y);
//     // printf("%f",x/y);
//     // printf("%d",z);

//     float x = 5;
//     float y = 2;

//     float z = 5/2.0;

//     printf("%f",z);

// }

// volume of sphair 

// #include <stdio.h>

// int main(){

//     // float r,pi,val,k;
//     // pi = 3.14;
//     // k = 4.0/3.0;
//     // val = k*pi*r*r*r;
    
    
//     int r = 5;
//     float val  = 4*3.1415*r*r*r/3;
//     printf("The volume is :%f",val);
// }

// int main(){
//     // ar = pi*r^2
//     int r = 5;
//     float ar = 3.14*r*r;
//     printf("Area of circle :%f",ar);
// }

// int main(){
//     float x1,x2,x3,x4,x5;
//     x1 = 95;
//     x2 = 95;
//     x3 = 95;
//     x4 = 95;
//     x5 = 95;

//     float per  = (x1+x2+x3+x4+x5)/5;
//     printf("pearcentage is :%f",per);

// }

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter values of a , b :");
//     scanf("%d %d",&a,&b);
//     printf("a = %d and b = %d",a,b);

// }

// remainder without %

// #include<stdio.h>
// int main(){

//     int a, b;
//     printf("Enter a :");
//     scanf("%d",&a);

//     printf("Enter b :");
//     scanf("%d",&b);

//     // int q = a/b;
//     // // printf("%d",q);
//     // int r = a - b*q;

//     int r = a%b;

//     printf("Remainder is :%d",r);
//     return 0;
// }

//note 2 % x = 2 whair x {x > 2}
//  6|2|0.3                 6|2|0.33
//   -18 it wile point to     ^   2 itself
// we cant farther  devide

// question1 take integer as input and print half of its
// question2 take float input and print the fraction part  of the real number

// // q1
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     float b = 2;
//     float half = a/b ;
//     printf("Half of given number is:%f",half);
// }

// // q2
// #include<stdio.h>
// int main(){
//     float n ;
//     printf("Enter a number:");
//     scanf("%f",&n);
//     int gif = n;
//     // printf("%d",gif);
//     float frc = n - gif;
//     printf("Fraction par is :%f",frc);
//     return 0;
// }


// sum up and character

#include<stdio.h>
int main(){
    // int a = 10;
    // float b = 10.13;
    // char c = 'A';

    int a;
    float b;
    char c;

    printf("Enter int   :");
    scanf("%d",&a);    
    printf("Enter float :");
    scanf("%f",&b);    
    printf("Enter chr   :");
    scanf("%s",&c);
    
    printf("a=%d b=%f c=%c",a,b,c);
    printf("\n");
    printf("a=%d b=%f c=%c",&a,&b,&c);
    printf("\n");
    printf("c = %c c = %d c = %f",c,c,c);
}

