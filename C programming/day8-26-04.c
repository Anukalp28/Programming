// 01:49 What and Why?
// 11:07 Declaration and Initialisation
// #include<stdio.h>
// int main(){
//     // int arr[3][2]={
//     //     {1,2},    //>r 0
//     //     {4,5},    //>r 1
//     //     {7,8}     //>r 2
//     // };// | |   
//     //   // 0 1 
//     int arr[3][2];


//     // printf("%d ",arr[1][0]);

//     for (int i=0;i<3;i++){
//         for (int j=0;j<2;j++){
//             printf("Enter no. on %d %d:",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//         // printf("\n");
//     }

//     for (int i=0;i<3;i++){
//         for (int j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// 19:03 ARRAY of Arrays
// 20:46 Output and Input using Loops
//user defined array
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
// #include<stdio.h>
// int main(){
//     int arr[4][2];

//     for (int i=0;i<4;i++){
//         printf("Enter Roll no & marks");
//         scanf("%d %d",&arr[i][0],&arr[i][1]);
//     }
//     printf("\n");
//     for (int i=0;i<4;i++){
//         for (int j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// 45:24 Ques 2: WAP to store 10 at every index in a 5x5 matrix
// #include<stdio.h>
// int main(){
//     int arr[5][5];
//     for (int i=0;i<5;i++){
//         for (int j=0;j<5;j++){
//             arr[i][j]=10;
//         }
//     }


//     printf("\n");
//     for (int i=0;i<5;i++){
//         for (int j=0;j<5;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// 49:16 Ques 3 : Add 2 matrices
// #include<stdio.h>

// int main(){
//     int r,c;
//     r=3;
//     c=3;
//     // int mat1[r][c];
//     // int mat2[r][c];
//     int mat1[3][3] = {
//         {1,1,1},
//         {2,2,2},
//         {3,3,3}
//     };
//     int mat2[3][3] = {
//         {10,10,10},
//         {10,10,10},
//         {10,10,10}
//     };

//     int matsum[r][c];

//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             matsum[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }

//     printf("\n");
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             printf("%d ",matsum[i][j]);
//         }
//         printf("\n");
//     } 

// }


// 54:27 HW 1 : Add two matrices without using extra matrix
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=3;
//     c=3;
//     // int mat1[r][c];
//     // int mat2[r][c];
//     int mat1[3][3] = {
//         {1,1,1},
//         {2,2,2},
//         {3,3,3}
//     };
//     int mat2[3][3] = {
//         {10,10,10},
//         {10,10,10},
//         {10,10,10}
//     };
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             mat2[i][j] = mat2[i][j] + mat1[i][j];
//         }
//     }

//     printf("\n");
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             printf("%d ",mat2[i][j]);
//         }
//         printf("\n");
//     }
// }
// 55:14 Ques 4 : Find the sum of a n*m matrix
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=3;
//     c=3;
//     int mat1[3][3] = {
//         {1,1,1},
//         {2,2,2},
//         {3,3,3}
//     };
//     int sum = 0;
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             sum +=mat1[i][j];
//         }
//     }  
//     printf("The sum of element of matrix is %d",sum);      
// }
// 1:00:43 HW 2 : Find the maximum and minimum element and their index in a matrix
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=3;
//     c=3;
//     int mat1[3][3] = {
//         {10,2,9},
//         {2,12,4},
//         {1,8,6}
//     };
//     int max = mat1[0][0];
//     int min = mat1[0][0];

//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             if (max<mat1[i][j]){
//                 max = mat1[i][j];
//             }

//             if (min>mat1[i][j]){
//                 min = mat1[i][j];
//             }
//         }
//     }

//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             if (max==mat1[i][j]){
//                 printf("Max is %d and index(%d %d)\n",mat1[i][j],i,j);
//             }

//             if (min==mat1[i][j]){
//                 printf("Min is %d and index(%d %d)\n",mat1[i][j],i,j);
//             }
//         }
//     }
// }
// 1:01:57 HW 3 : Given matrix, find sum of rectangle formed by 2 coordinates (l1,r1) and (l2,r2)
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;
//     int mat1[5][5] = {
//         // | 
//         {1,1,1,1,1},
//         {2,2,2,2,2},
//         {3,3,3,3,3},//------
//         {4,4,4,4,4},
//         {5,5,5,5,5}
//     };
//     int l1,r1,l2,r2;
//     l1 = 0;
//     r1 = 1;

//     l2 = 2;
//     r2 = 4;
//     int sum = 0;

//     for (int i=l1;i<=l2;i++){
//         for (int j=r1;j<=r2;j++){
//             sum +=mat1[i][j];
//         }
//     }  
//     printf("sum of rectangle formed by 2 coordinates (%d,%d) and (%d,%d) is %d",l1,r1,l2,r2,sum);
// }

// 1:06:15 HW 4 : Find the row with the maximum sum in a matrix
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;
//     int mat1[5][5] = {
        
//         {1,1,1,1,1},
//         {3,3,3,3,3},
//         {40,40,40,40,40},
//         {5,5,5,5,5},
//         {2,2,2,2,2}
//     };
//     int sum1=0;
//     int max_sum_r;
//     for (int i=0;i<r;i++){
//         int sum2=0;
//         for (int j=0;j<c;j++){
//             sum2 +=mat1[i][j];
//         }
//         if (sum1<sum2){
//             sum1 =sum2;
//             max_sum_r = i;
//         }
//     } 
//     printf("The row with the maximum sum=%d in a matrix is %d",sum1,max_sum_r);
// }

// 1:10:28 Ques 5 : Given matrix filled with 0s and 1s, find row with maximum 1s
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;
//     int mat1[5][5] = {
        
//         {0,1,1,0,0},
//         {0,0,0,0,0},
//         {1,1,1,1,1},
//         {1,1,0,1,0},
//         {0,0,0,1,0}
//     };
//     int count1_1 = 0;
//     int max_1s;

//     for (int i=0;i<r;i++){
//         int count2_1 = 0;
//         for (int j=0;j<c;j++){
//             if (mat1[i][j]==1){
//                 count2_1 +=1;
//             }
//         }
//         if (count1_1<count2_1){
//             count1_1=count2_1;
//             max_1s=i;
//         }

//     } 
//     printf("Row with maximum 1s(%d) is %d",count1_1,max_1s);
// }

// 1:17:45 Ques 6 : Print the transpose of a given matrix
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;
//     int mat1[5][5] = {
        
//         {1,1,1,1,1},
//         {2,2,2,2,2},
//         {3,3,3,3,3},
//         {4,4,4,4,4},
//         {5,5,5,5,5}
//     };

//     printf("\n");
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             printf("%d ",mat1[j][i]);
//         }
//         printf("\n");
//     }
// }

// 1:27:24 Ques 7 : Store transpose of a given matrix in another matrix
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;
//     int mat1[5][5] = {
        
//         {1,1,1,1,1},
//         {2,2,2,2,2},
//         {3,3,3,3,3},
//         {4,4,4,4,4},
//         {5,5,5,5,5}
//     };
//     int mat2[r][c];

//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             mat2[i][j]=mat1[j][i];
//         }
//     }

//     // printf("\n");
//     // for (int i=0;i<r;i++){
//     //     for (int j=0;j<c;j++){
//     //         printf("%d ",mat1[i][j]);
//     //     }
//     //     printf("\n");
//     // }

//     printf("\n");
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             printf("%d ",mat2[i][j]);
//         }
//         printf("\n");
//     }

// }
// 1:33:30 Ques 8 : Convert a square matrix into its transpose without using extra matrix
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;
//     int mat1[5][5] = {
        
//         {1,1,1,1,1},
//         {2,2,2,2,2},
//         {3,3,3,3,3},
//         {4,4,4,4,4},
//         {5,5,5,5,5}
//     };
//     // int mat2[r][c];

//     int temp;
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             temp = mat1[i][j];
//             mat1[i][j]=mat1[j][i];
//             mat1[j][i]=temp;            
//             printf("%d %d %d\n",temp,mat1[i][j],mat1[j][i]);
//         }
//     }

//     // printf("\n");
//     // for (int i=0;i<r;i++){
//     //     for (int j=0;j<c;j++){
//     //         printf("%d ",mat1[i][j]);
//     //     }
//     //     printf("\n");
//     // }
// }




// 1:58:16 Ques 9 : Rotate a matrix 90 degrees clockwise
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;
//     int mat1[5][5] = {
        
//         {1,1,1,1,1},
//         {2,2,2,2,2},
//         {3,3,3,3,3},
//         {4,4,4,4,4},
//         {5,5,5,5,5}
//     };
//     printf("\n");
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             // printf("%d ",mat1[5-1-i][5-1-j]);
//             printf("%d ",mat1[5-1-j][5-1-i]);
//         }
//         printf("\n");
//     }
// }
// 2:11:33 **Ques 10 : Matrix MULTIPLICATION
// #include<stdio.h>
// int main(){
//     int r1,c1;
//     r1=5;
//     c1=5;
//     //       m  n
//     //       |  |            
//     int mat1[5][5] = {
        
//         {1,1,1,1,1},
//         {2,2,2,2,2},
//         {3,3,3,3,3},
//         {4,4,4,4,4},
//         {5,5,5,5,5}
//     };
//     int r2,c2;
//     r2=5;
//     c2=5;
//     //       p  q
//     //       |  |
//     int mat2[5][5] = {
        
//         {1,1,1,1,1},
//         {2,2,2,2,2},
//         {3,3,3,3,3},
//         {4,4,4,4,4},
//         {5,5,5,5,5}
//     };
//     //             m  q
//     //             |  |
//     int productMat[r1][c2];

//     // n=p ie c2=r1 then possible

//     if (r1==c2){
//         printf("Matrix can be Multipay");
//         for (int i=0;i<r1;i++){
//             for (int j=0;j<c2;j++){
    
//                 int matsum=0;
//                 for (int k=0;k<c1;k++){
//                     matsum += mat1[i][k]*mat2[k][j];
//                 }
//                 productMat[i][j]=matsum;
//             }  
//         }
    
//         printf("\n");
//         for (int i=0;i<r1;i++){
//             for (int j=0;j<c2;j++){
//                 printf("%d ",productMat[i][j]);
//             }
//             printf("\n");
//         }
        
//     }
//     else{
//         printf("Matrix can not be Multipay");
//     }
// }
// 3:17:51 Ques 11 : Wave printing - 1 S
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;           
//     int mat1[5][5] = {
        
//         {1,2,3,4,5},
//         {1,2,3,4,5},
//         {1,2,3,4,5},
//         {1,2,3,4,5},
//         {1,2,3,4,5}
//     };
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             if (i%2==0){
//                 printf("%d ",mat1[i][j]);
//             }
//             else{
//                 printf("%d ",mat1[i][c-1-j]);
//             }
//         }
//     }

// }

// 3:27:31 HW 5 : Wave printing - 2 N
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;           
//     int mat1[5][5] = {
        
//         {1,2,3,4,5},
//         {1,2,3,4,5},
//         {1,2,3,4,5},
//         {1,2,3,4,5},
//         {1,2,3,4,5}
//     };
//     for (int i=0;i<r;i++){
//         for (int j=0;j<c;j++){
//             if (c%2==0){
//                 printf("%d ",mat1[j][r-1-i]);
//             }
//             else{
//                 printf("%d ",mat1[j][i]);
//             }
//         }
//     }
// }
// 3:31:21 **Ques 12 : SPIRAL printing
// #include<stdio.h>
// int main(){
//     int r,c;
//     r=5;
//     c=5;           
//     int mat1[5][5] = {
        
//         {1,2,3,4,5},
//         {16,17,18,19,6},
//         {15,24,25,20,7},
//         {14,23,22,21,8},
//         {13,12,11,10,9}
//     };

//     printf("\n");

//     int minr = 0;   //++
//     int maxr = r-1; //--
    
//     int minc = 0;   //++
//     int maxc = c-1; //--
    
//     int total = r*c;
//     int count = 0;

//     while (count<total){
//         for (int j=minc;j<=maxc;j++){
//             printf("%d ",mat1[minr][j]);
//             count++;
//         }
//         minr++;
//         for (int i=minr;i<=maxr;i++){
//             printf("%d ",mat1[i][maxc]);
//             count++;
//         }
//         maxc--;
//         for (int j=maxc;j>=minc;j--){
//             printf("%d ",mat1[maxr][j]);
//             count++;
//         }
//         minr--;
//         for (int i=maxr;i>=minr;i--){
//             printf("%d ",mat1[i][minc]);
//             count++;
//         }
//         maxc++;

//     }
    
// }
    // for (int i=0;i<r;i++){
    //     for (int j=0;j<c;j++){
    //         printf("%d ",mat1[i][j]);
    //     }
    //     printf("\n");
    // }     
    // printf("90 ACW\n");
    // for (int i=0;i<r;i++){
    //     for (int j=0;j<c;j++){
    //         printf("%d ",mat1[j][c-1-i]);
    //     }
    //     printf("\n");
    // }  
    //     printf("90 x2 ACW\n");
    // for (int i=0;i<r;i++){
    //     for (int j=0;j<c;j++){
    //         printf("%d ",mat1[c-1-i][c-1-j]);
    //     }
    //     printf("\n");
    // }  
    // printf("90 x3 ACW\n");
    // for (int i=0;i<r;i++){
    //     for (int j=0;j<c;j++){
    //         printf("%d ",mat1[c-1-j][i]);
    //     }
    //     printf("\n");
    // } 
// }

// 4:18:10 HW 6 : Generate n*n matrix filled with numbers from 1 to n^2 in SPIRAL order
