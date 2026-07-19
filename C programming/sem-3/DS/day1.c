// #include <stdio.h>
// int main(){
//     printf("Anukalp_Raj");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x;
//     scanf("%d",&x);
//     printf("%d",x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char x;
//     scanf("%c",&x);
//     printf("%c",x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x[5];

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 5;
//     int b = 10;
//     int c = a+b;
//     printf("%d",c);
//     return 0;
// }
// asus v16

// #include<stdio.h>
// int main(){
//     int a[]={10,20,30};
//     int n = 3;
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum = sum+a[i];
//     }
    
//     int avg = sum/n;
//     // printf("%d \n",sum);
//     printf("avg %d",avg);
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[]={10,20,50,40,30};
//     int n = 5;
    
//     int max = a[0];
//     for(int i=0;i<n;i++){
//         if(max<a[i]){
//             max = a[i];
//         }   
//     }
//     printf("max %d",max);
//     return 0;
// }

// WAP to print greatest number 
// #include <stdio.h>

// int main(){
//     int a[] = {50,40,10,20,60};
//     int s = sizeof(a)/sizeof(a[0]);
//     // printf("%d",s);
//     // int max = a[0];
//     // for (int i=1;i<s;i++){
//     //     if (max>a[i]){
//     //         max = a[i];
//     //     }
//     // }
//     for (int i=0;i<s;i++){
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }


// WAP to add 5 to each element in an array and then print the 
// #include <stdio.h>

// int main(){
//     int a[] = {50,40,10,20,60};
//     int s = sizeof(a)/sizeof(a[0]);
    
//     for (int i=0;i<s;i++){
//         printf("%d\n",a[i]);
//     }
    
//     printf("\n");
//     for (int i=0;i<s;i++){
//         // printf("%d\n",a[i]+5);
//         a[i] += 5;
//     }
    
//     for (int i=0;i<s;i++){
//         printf("%d\n",a[i]);
//     }
    
//     return 0;
// }


// //Q2 WAP to insert new element in array specified position
// #include <stdio.h>
// int main(){
//     int array[] = {5,6,10,12,13,14};
//     int size = sizeof(array)/sizeof(array[0]);
//     int n = 100;
//     int position = 2;
    
//     int temp ;
//     int temp2;
//     for (int i=position;i<size+1;i++){
    
//         if(i==position){
//             temp = array[i];
//             array[i] = n;
//         }
//         else{
//             temp2 = array[i];
//             array[i] = temp;
//             temp=temp2;
//         }
//     }

//     size++;
//     for (int i=0;i<size;i++){
//         printf("%d ",array[i]);
//     }
// }


// 5. Implement linear search to find the first occurrence of a given element in an array.

// #include<stdio.h>
// int main(){
//     int array[] = {5,6,10,12,13,1,14};
//     int size = sizeof(array)/sizeof(array[0]);
    
//     int search = 10;
    
//     int index;
//     int flg =0;
    
//     for(int i=0;i<size;i++){
//         if(array[i]==search){
//             index = i;
//             flg = 1;
//             break;
//         }
//     }
//     if (flg){
//         printf("Element Found at index no.: %d",index);
//     }
//     else{
//         printf("Element Not Found");
//     }
// }


// 6. Implement sparse matrix using array. Description of program:
//  Read a 2D array from the user.
//  Store it in the sparse matrix form, use array of structures.
//  Print the final array.

#include<stdio.h>
int main(){
    int matrix[3][3];
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
