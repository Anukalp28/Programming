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



//Q 1 WAP  to initialize an array of integers and display its elements.
// #include <stdio.h>
// int main(){
//     int array[] ={10,20,30,40,50,60,70};
//     int size = sizeof(array)/sizeof(array[0]);
//     for(int i=0;i<size;i++){
//         printf("%d ",array[i]);
//     }
// }


// //Q 2. Write a program to find the sum and average of elements in an array of integers.
// #include<stdio.h>
// int main(){
//     int A[] ={10,20,30,40,50,60,70};
//     int size = sizeof(A)/sizeof(A[0]);

//     int sum = 0;
//     for(int i=0;i<size;i++){
//         sum += A[i];
//     }
//     printf("Sum %d\n",sum);
//     printf("Avg %f\n",(float)sum/size);
    
// }

//Q3. Finding the maximum element in an array
// #include<stdio.h>
// int main(){
//     int a[]={10,20,50,40,30};
//     // int n = 5;
//     int n = sizeof(a)/sizeof(a[0]);
    
//     int max = a[0];
//     for(int i=0;i<n;i++){
//         if(max<a[i]){
//             max = a[i];
//         }   
//     }
//     printf("max %d",max);
//     return 0;
// }


// Q4 WAP to insert new element in array specified position
// #include <stdio.h>
// int main(){
//     int array[] = {5,6,10,12,13,14};
//     int size = sizeof(array)/sizeof(array[0]);
//     int n = 100;
//     int position = 3;
    
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


// #include<stdio.h>
// int main(){
//     int A[100] = {10,20,30,40,50};
//     int pos =3;
//     int element = 25;
//     int size = 5;
//     for(int i=5;i>=pos-1;i--){
//         A[i+1] = A[i];
//     }
//     A[pos-1] = element;

//     for(int i=0;i<=size;i++){
//         printf("%d ",A[i]);
//     }
//     return 0;
// }


// 5. Implement linear search to find the first occurrence of a given element in an array.

// #include<stdio.h>
// int main(){
//     int array[] = {5,6,10,12,13,1,14};
//     int size = sizeof(array)/sizeof(array[0]);
    
//     // int search = 10;
//     int search;
//     printf("Enter a number:");
//     scanf("%d",&search);
    
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


// #include<stdio.h>
// int main(){
//     int A[] = {2,5,2,7,3,3,3,2};
//     int size = sizeof(A)/sizeof(A[0]);
//     int count = 0;
//     // int num = 3;
//     int num;
//     printf("Enter a no:");
//     scanf("%d",&num);
//     for(int i=0;i<8;i++){
//         if(A[i]==num){
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

// 6. Implement sparse matrix using array. Description of program:
//  Read a 2D array from the user.
//  Store it in the sparse matrix form, use array of structures.
//  Print the final array.

// #include<stdio.h>
// int main(){
//     int matrix[3][3];
//     int n=3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
// }




// dec to biner


#include<stdio.h>
int main(){
    int num,i=0;
    int A[20];
    printf("Enter a decimal no:");
    scanf("%d",&num);
    
    if(num==0) 
        printf("0");
    else{
        while (num>0){
            A[i]=num%2;
            num = num/2;
            i++;
        }
        // int size = sizeof(A)/sizeof(A[0]);
        // for(int j=0;j<20;j++){
        //     printf("%d",A[j]);
        // }
        for(int j=i-1;j>=0;j--){
            printf("%d",A[j]);
        }
    }
    return 0;
}