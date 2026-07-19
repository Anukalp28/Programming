// Q1. Write a C program to print the following pattern:
// *
// **
// ***
// ****
// *****
// #include<stdio.h>
// int main(){
//     int n = 5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q2. Develop a C program to display the following pattern:
//     *
//    ***
//   *****
//  *******
// *********
// #include<stdio.h>
// int main(){
//     int n=5;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             if(i+j<=n) printf("  ");
//             else printf("* ");

//         }
//         for(int j=2;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             if(i>=j) printf("* ");
//             else printf("  ");
//         }
//         printf("\n");
//     }
// }


// Q3. Create a C program to display the following pattern:
// 1
// 12
// 123
// 1234
// 12345
// #include<stdio.h>
// int main(){
//     int n=5;

//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a++;
//         }
//         printf("\n");
//     }
// }

// Q4. Develop a C program to generate the following pattern:
//     1
//    121
//   12321
//  1234321
// 123454321
// #include<stdio.h>
// int main(){
//     int n=5;

//     for(int i=1;i<=n;i++){
//         int a = 1;
//         for(int j=1;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             if(i+j<n+1) printf("  ");
//             else{
//                 printf("%d ",a);
//                 a++;
//             }
//         }
//         // a--;
//         // a--;
//         a = a-2;
//         for(int j=2;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             if(i>=j){
//                 printf("%d ",a);
//                 a--;
//             } 
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }