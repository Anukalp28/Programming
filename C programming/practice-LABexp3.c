// Q1. Print numbers from 1 to 10 using a for loop.
// #include<stdio.h>
// int main(){

//     for(int i=1;i<=10;i++){
//         printf("%d ",i);
//     }
// }


// Q2. Print numbers from 10 to 1 in reverse order using a while loop
// #include<stdio.h>
// int main(){
//     for(int i=10;i>=1;i--){
//         printf("%d ",i);
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=10;
//     while (i>=1){
//         printf("%d ",i);
//         i--;
//     }
//     return 0;
// }




// Q3. Calculate and print the sum of integers from 1 to 100 using a do-while loop.

// #include<stdio.h>
// int main(){
//     int sum = 0,i=1;
//     do
//     {
//         sum = sum + i;
//         i++;
//     } while (i<=100);
//     printf("The sum of 1-100 is %d",sum);
    
// }

// Q4. Calculate and print the factorial of a given number using a for loop.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a No.:");
//     scanf("%d",&n);
//     int temp = n,fac=1;

//     for(int i=1;i<=n;i++){
//         fac = fac * temp;
//         temp = temp - 1;
//     }
//     printf("factorial is %d",fac);

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n,fac=1;
//     printf("Enter a No.:");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         fac = fac*i;
//     }
//     printf("factorial is %d",fac);
//     return 0;
// }


// Q5. Print the table of a number input by the user
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a No.:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }



