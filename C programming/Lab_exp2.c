// #Q1

// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//#Q2

// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             if (i+j<=n){
//                 printf("  ");
//             }
//             else{
//                 printf("* ");
//             }
//         }
//         for (int j=2;j<=n;j++){
//             if (i>=j){
//                 printf("* ");
//             }
    
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q3


// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a = 1;
//         for (int j=1;j<=i;j++){
//             printf("%d ",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #Q4
#include<stdio.h>
int main(){
    int n=5;
    for (int i=1;i<=n;i++){
        int a=1;
        for (int j=1;j<=n;j++){
            if (i+j>=n+1){
                printf("%d",a);
                a++;
            }
            else{
                printf(" ");
            }
        }
        a--;
        for (int j=2;j<=n;j++){
            if (i>=j){
                a--;
                printf("%d",a);
            }
        }
        printf("\n");
        
    }
}
