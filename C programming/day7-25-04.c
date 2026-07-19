// 00:00 Introduction
// 03:34 What is an Array?

// 08:40 Syntax and Declaration
// 13:10 Indexing in Arrays
// 16:08 Accessing Array elements
// #include<stdio.h>
// int main(){
//     // int arr[5] = {1,2,3,4,5}; // 5 space created and value assigned index starts from 0
//     // printf("%d ",arr[2]);
//     // arr[2] = 100; // array update to {1,2,100,4,5}
//     // printf("%d ",arr[2]);
//     // printf("%d ",arr[0]);
//     // printf("%d ",arr[0]);


//     // float arr[3] = {1.2,3.2,4.2};
//     // printf("%f ",arr[1]);

//     // char arr[4] = {'a','b','c','d'};
//     // printf("%c ",arr[1]);

//     int arr[5];
//     arr[0]=1;
//     arr[1]=100;
//     arr[2]=1;
//     arr[3]=1;
//     arr[4]=1;

//     printf("%d ",arr[1]);

//     return 0;
// }

// 24:07 Output and Input using LOOPS

// #include<stdio.h>
// int main(){
//     // int arr[5] = {1,2,3,4,5};
//     int arr[5];

//     for (int i=0;i<5;i++){
//         printf("Enter %d th element :",i+1);
//         scanf("%d",&arr[i]);

//     }

//     for (int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }

// }   

// print array in reverse order

// #include<stdio.h>
// int main(){
//     // int arr[5] = {1,2,3,4,5};
//     int arr[5];

//     for (int i=0;i<5;i++){
//         printf("Enter %d th element :",i+1);
//         scanf("%d",&arr[i]);

//     }

//     for (int i=4;i>=0;i--){
//         printf("%d ",arr[i]);
//     }

// } 


// 38:49 Prob 1 : Given array of marks, print marks less than 35
// #include<stdio.h>
// int main(){
//     int Marks[10] = {10,60,30,20,35,40,45,90,70,80};

//     for (int i=0;i<10;i++){
//         if (Marks[i]<35){
//             printf("Index = %d \n",i);

//         }
//     }
//     return 0;
// }


// 45:00 Prob 2 : Find the correct declarations
// 48:47 Prob 3 : Indexing based question
// 49:39 Memory allocation in Arrays
// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5,};

//     for (int i=0;i<5;i++){
//         printf("%p\n",&arr[i]);

//     }
//     return 0;
// }

// 1:00:48 Prob 4 : Predict the output - 1 
// #include<stdio.h>
// int main(){
//     int sub[50], i;
//     for ( i = 0;i <= 48 ; i++);
//     {
//         sub[i]=i;
//         printf ("\n%d", sub[i]) ;
//     }

// }

// 1:07:37 Garbage Values
// #include<stdio.h>
// int main(){
//     int arr[4];
//     printf("%d",arr[0]);

// }


// 1:09:04 Prob 6 : Find the error - 1 don
// 1:12:13 Prob 7 : Find the error - 2
// 1:13:17 Prob 8 : Print the sum of elements in given array
// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int sum=0;
//     for (int i=0;i<5;i++){
//         sum +=arr[i];
//     }
//     printf("%d",sum);
// }


// #include<stdio.h>
// int main(){
//     int siz;
//     printf("The size of array :");
//     scanf("%d",&siz);
//     int arr[siz];
 
// }


// 1:18:14 HW 1 :  Print the product of elements in given array
// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int product=1;
//     for (int i=0;i<5;i++){
//         product = product*arr[i];
//     }
//     printf("%d",product);
// }

// 1:19:11 Prob 9 : Print the maximum element in given array
// searching

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     // int arr[10] = {1,2,6,4,5,3,9,8,7,3};
//     // int max = arr[0];
//     // for (int i=0;i<10;i++){
//     //     if (max<arr[i]){
//     //         max = arr[i];
//     //     }
//     // }

//     int max = INT_MAX;
//     int min = INT_MIN;
//     printf("%d\n",max);
//     printf("%d\n",min);
// }


// 1:31:26 HW 2 : Print the minimum element in given array
// #include<stdio.h>
// int main(){
//     int arr[10] = {1,2,6,4,5,3,9,-8,7,3};
//     int min = arr[0];
//     for (int i=0;i<10;i++){
//         if (min>arr[i]){
//             min = arr[i];
//         }
//     }
//     printf("%d",min);
// }

// 1:31:36 Prob 10 : MCQ - 1 ok
// 1:33:01 Prob 11 : MCQ - 2 ok
// 1:34:56 Prob 12 : MCQ - 3 ok 
// 1:35:14 Passing ARRAYS to FUNCTIONS
// #include<stdio.h>
// void fun(int x[]){
//     int temp = x[0];
//     x[0]=x[1];
//     x[1]=temp;
// }
// int main(){
//     int arr[2]={1,2};
//     printf("%d %d\n",arr[0],arr[1]);
//     fun(arr);
//     printf("%d %d\n",arr[0],arr[1]);
// }

// 1:44:36 Prob 13 : State True or False
// 1:45:47 Prob 14 : Multiply odd indexed elements by 2 and add 10 to the even elements
// #include<stdio.h>

// int main(){
//     int arr[5]={1,2,3,4,5};
//     for (int i=0;i<5;i++){
//         if (i%2!=0){
//             arr[i]=2*arr[i];
//         }
//         else{
//             arr[i] = arr[i]+10;
//         }
//         printf("%d ",arr[i]);
//     }
// }

// 1:52:38 HW 3 : Print elements greater than x
// #include<stdio.h>

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int x = 4;
//     for (int i=0;i<5;i++){
//         if (arr[i]>x){
//             printf("%d ",arr[i]);
//         }
//     }
// }

// 1:53:59 Prob 15 : Print difference b/w odd indexed and even indexed elements
// #include<stdio.h>

// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int odd_sum = 0;
//     int even_sum = 0;

//     for (int i=0;i<7;i++){
//         if (i%2==0){
//             even_sum += arr[i];
//         }
//         else{
//             odd_sum += arr[i];
//         }

//     }
//     // printf("%d ",odd_sum - even_sum);
//     printf("%d ",even_sum - odd_sum);

// }

// 1:58:12 Prob 16 : Find total number of pairs whose sum add up to x
// #include<stdio.h>

// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int x = 12;
//     int count = 0;

//     for (int i=0;i<8;i++){
//         for (int j=0;j<8;j++){
//             if (arr[i]+arr[j]==x){
//                 // printf("%d %d\n",arr[i],arr[j]);
//                 count +=1;
//             }
//         }
//     }
//     printf("no of pairs that have sum %d is %d",x,count/2);
// }

// 2:07:07 Prob 17 : Find total number of triplets whose sum add up to x
// #include<stdio.h>

// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int x = 12;
//     int count = 0;
//     for (int i=0;i<8;i++){
//         for (int j=0;j<i;j++){
//             for (int k=0;k<j;k++){
//                 if (arr[i]+arr[j]+arr[k]==x){
//                     printf("%d %d %d\n",arr[i],arr[j],arr[k]);
//                     count += 1;
//                 }
//             }
//         }
//     }
//     printf("no of triplets that have sum %d is %d",x,count);
// }


// 2:12:50 Prob 18 : Find the second largest element in Array
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for (int i=0;i<8;i++){
//         if (max<arr[i]){
//             max = arr[i];
//         }
//     }
//     for (int i=0;i<8;i++){
//         if (arr[i] != max && smax<arr[i]){
//             smax = arr[i];
//         }
//     }
//     printf("%d ",smax);
// }
// 2:19:28 **Prob 19 : Find second largest element in single pass of array
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[8]={1,7,12,4,5,9,7,8};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for (int i=0;i<8;i++){
//         if (max<arr[i]){
//             smax = max;
//             max = arr[i];
//         }
//         else if (smax<arr[i]){
//             // smax = max;
//             smax = arr[i];
//         }
//     }
//     printf("%d ",smax);
// }
// 2:42:15 Prob 20 : WAP to copy elements of array to another array in reverse order
// #include<stdio.h>

// int main(){
//     int arr[8]={1,7,12,4,5,9,7,8};
//     int carr[8];
//     // for (int i=7;i>=0;i--){
//     //     carr[7-i]=arr[i];

//     // }
//     for (int i=0;i<8;i++){
//         carr[7-i]=arr[i];
//     }
//     for (int i=0;i<8;i++){
//         printf("%d ",carr[i]);
//     }

// }

// 2:46:06 *Prob 21 : Reverse the Array without using extra array
// #include<stdio.h>

// int main(){
//     int arr[8]={1,7,12,4,5,9,7,8};

// }


// 2:53:35 HW 4 : Check if given Array is Palindrome or not
// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,3,2,1};
    
//     int flg = 0;
//     for (int i=0;i<7;i++){
//         if (arr[0]==arr[7-1-i]){
//             flg = 1;
//         }
//         else {
//             flg = 0;
//         }
//     }
//     if (flg){
//         printf("Array is Palindrome");
//     }
//     else{
//         printf("Array is not Palindrome");
//     }
// }

//////or 
// #include<stdio.h>

// int main(){
//     int arr[8]={1,2,3,4,4,3,2,1};
//     int rarr[8];

//     for (int i=0;i<8;i++){
//         rarr[7-i]=arr[i];
//     }
//     int flg = 0;
//     for (int i=0;i<8;i++){
//         if(arr[i]==rarr[i]){
//             flg =1;
//         }
//         else{
//             flg =0;
//         }
//     }
//     if (flg){
//         printf("Array is Palindrome");
//     }
//     else{
//         printf("Array is not Palindrome");
//     }
// }

// 2:54:52 **Prob 22 : Rotate the given Array by ‘k’ steps
// #include<stdio.h>

// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int k = 3;
//     for (int i=0;i<8;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
    
//     for (int j=0;j<k;j++){
//         int temp = arr[8-1];
//         for (int i=0;i<8;i++){
//             arr[8-1-i]=arr[8-2-i];
//         }
//         arr[0] = temp;
//     }

//     for (int i=0;i<8;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 3:18:55 Prob 23 : Check if the given element is present in Array or not
// #include<stdio.h>

// int main(){
//     int arr[8]={1,2,5,4,5,6,5,8};
//     int element = 5;
//     int flg = 0;
//     int indx;
//     for (int i=0;i<8;i++){
//         if (element == arr[i]){
//             indx = i;
//             flg = 1;
//             printf("element %d is present in Array and its index is %d\n",element,indx);
//         }
//     }
//     if (flg!=1){
//         // printf("element %d is present in Array and its index is %d",element,indx);
//         printf("element %d is not present in Array",element);
//     }
    
// }


// 3:35:42 HW 5 : Find the missing element in given range in [1-100]
// #include<stdio.h>

// int main(){
//     int arr[99]={
//         1,2,3,4,5,6,7,8,9,10,
//         11,12,13,14,15,16,17,18,19,20,
//         21,22,23,24,25,26,27,28,29,30,
//         31,32,33,34,35,36,37,38,39,40,
//         41,42,43,44,45,47,48,49,50,
//         51,52,53,54,55,56,57,58,59,60,
//         61,62,63,64,65,66,67,68,69,70,
//         71,72,73,74,75,76,77,78,79,80,
//         81,82,83,84,85,86,87,88,89,90,
//         91,92,93,94,95,96,97,98,99,100,
//     };
//     int sum = 0;
//     int n=100;
//     int sum2 = (n*(n+1))/2;
//     for (int i=0;i<99;i++){
//         sum = sum + arr[i];
//         // printf("%d,",i+1);
//         // if (i+1==10 ||
//         //     i+1==20 ||
//         //     i+1==30 ||
//         //     i+1==40 ||
//         //     i+1==50 ||
//         //     i+1==60 ||
//         //     i+1==70 ||
//         //     i+1==80 ||
//         //     i+1==90 ||
//         //     i+1==100
//         // ){
//         // printf("\n");      
//         // }
//     } 

//     printf("missing element is %d",sum2-sum);
// }
// 3:39:40 Prob 24 : Find the duplicate element in given array
// #include<stdio.h>

// int main(){
//     int arr[8]={1,2,5,4,5,6,2,8};

//     for (int i=0;i<8;i++){
//         for (int j=0;j<i;j++){
//             if (arr[i]==arr[j]){
//                 printf("duplicate element %d\n",arr[i]);
//             }
//         }
//     }

// }
// 3:44:15 Prob 25 : Find unique number, where all other elements are duplicate
#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[7]={1,2,5,4,5,1,2};
    // int arr[7]={1,2,3,4,1,2,3};

    for (int i=0;i<7;i++){
        bool flg = false;
        for (int j=i+1;j<7;j++){
            if (arr[i]==arr[j]){
                // printf("duplicate   %d\n",arr[i]);
                flg = true;
                // i++;
                // j = i+1;
                
                // break;
            }
        }
        if (flg == false){
                printf("%d",arr[i]);
                break;
            }
    }    
    // printf("unique element %d %d\n",arr[i],arr[j]);

}