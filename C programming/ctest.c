// 19:03 ARRAY of Arrays
// 20:46 Output and Input using Loops
// user defined array
// #include<stdio.h>
// int main(){
//     int r ,c;
//     printf("Enter no.or Row & column:");
//     scanf("%d %d",&r,&c);
//     int arr[r][c];

//     printf("\n");
    
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             // printf("Enter no. on %d %d:",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
    
//     printf("\n");
    
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// 41:51 Ques 1 : WAP to store Roll No. and Marks of 4 students in a matrix
#include<stdio.h>
int main(){
    int arr[4][2];

    for (int i=0;i<4;i++){
        printf("Enter Roll no & marks");
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    }
    printf("\n");
    for (int i=0;i<4;i++){
        for (int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
