// 1. Write a program in C to add numbers using call by reference.
// #include<stdio.h>
// int add(int x,int y){
//     int z = x+y;
//     printf("%d",z);
// }
// int main(){
//     int a = 5;
//     int b = 10;
//     add(a,b);
// }

// #include<stdio.h>
// int add(int *x,int *y){
//     int *z = *x + *y;
//     printf("%d",*z);
    
// }
// int main(){
//     int a = 5;
//     int b = 10;
//     add(&a,&b);
// }

// #include<stdio.h>
// void swap(int a,int b){
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     printf("%d,%d",a,b);
// }
// int main(){
//     int x = 1;
//     int y = 2;
    
//     printf("%d,%d\n",x,y);
//     swap(x,y);

// }

//WAP to store n element in array and print the element by using pointer 
// #include<stdio.h>
// int main(){
//     int array[] = {1,2,3,4,5,6,7,8};
//     int size = sizeof(array)/sizeof(array[0]);
    
//     int *pte = &array[0];
//     for(int i=0;i<size;i++){
//         printf("%d ",*(pte+i));
//     } 
// }

// 2. Write a program in C to convert a decimal number to a binary number using the function.
// #include<stdio.h>
// int dec_to_bin(int x){
//     int A[20];
//     int i=0;
//     if(x==0)
//         printf("0");
//     else{
//         while (x>0){
//             A[i]=x%2;
//             x = x/2;
//             i++;
//         }
//         for(int j=i-1;j>=0;j--){
//             printf("%d",A[j]);
//         }
        
        
//     }
    
//     // return A;
// }
// int main(){
//     int n = 55;
//     int x = dec_to_bin(n);
//     // printf(x);
//     return 0;
// }



// 3. Write a program in C to check whether a number is a prime number or not using the
// function.
// #include<stdio.h>
// #include <stdbool.h>
// #include<string.h>
// int  isprime(int x){
//     bool flg = true;
//     for(int i=2;i<x;i++){
//         if(x%i==0){
//             flg = false;
//             break;
            
//         }
//     }
//     if(flg){
//         printf("prime number");
//     }
//     else{
//         printf("not a prime number");

//     }
// }


// int main(){
//     int n;
//     printf("Enter a no.:");
//     scanf("%d",&n);
//     isprime(n);
//     // bool flg = true;
//     // for(int i=2;i<n;i++){
//     //     if(n%i==0){
//     //         flg = false;
//     //         break;
            
//     //     }
//     // }
//     // if(flg){
//     //     printf("prime number");
//     // }
//     // else{
//     //     printf("not a prime number");

//     // }
// }
// 4. Write a program in C to print the first 50 natural numbers using recursion.

// #include <stdio.h>

// void printNaturalNumbers(int n) {
//     // base case
//     if (n > 50) {
//         return;
//     }
//     printf("%d ", n);
    
//     printNaturalNumbers(n + 1);
// }

// int main() {
//     printf("The first 50 natural numbers are:\n");

//     printNaturalNumbers(1);
    
//     // printf("\n");
//     return 0;
// }



// 5. Write a program in C to find the sum of digits of a number using recursion.
#include<stdio.h>
int digit_sum(int n){
    if(n>0){
        return n%10 + digit_sum(n/10);
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    int s = digit_sum(n);
    printf("%d",s);

}
// 6. Write a program in C to print the Fibonacci Series using recursion.
// #include<stdio.h>
// int fibo(int n){
//     if(n==1 || n==2) return 1;
//     else return fibo(n-1) + fibo(n-2);
// }

// int main(){
//     int n;
//     printf("Enter a no.:");
//     scanf("%d",&n);
//     for(int i=1;i<n;i++){
//         printf("%d ",fibo(i));
//     }
// }

// 7. Write a program in C to find the Factorial of a number using recursion.
// #include<stdio.h>
// int fac(int x){
//     if(x>1){
//         return x*fac(x-1);
//     }
//     else{
//         return 1;
//     }
// }

// int main(){
//     int n;
//     printf("Enter a no: ");
//     scanf("%d",&n);
//     int f = fac(n);
//     printf("Factorial of a no: %d",f);
// }
// // 8. Write a program in C to print even or odd numbers in a given range using recursion.
// #include<stdio.h>
// void even_or_odd(int i,int j){
//     if(i<j){
//         if(i%2==0){
//             printf("Even %d\n",i);
//             even_or_odd(i+1,j);
//         }
//         if(i%2!=0){
//             printf("odd  %d\n",i);
//             even_or_odd(i+1,j);

//         }
//     }
// }
// int main(){
//     int start = 20;
//     int stop = 100;
//     even_or_odd(start,stop);
// }