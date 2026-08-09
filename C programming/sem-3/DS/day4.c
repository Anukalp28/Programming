//Selection sorting
// #include<stdio.h>
// int main(){
//     int A[] = {20,1,5,35,50};
//     int min_index,temp;
//     int len = sizeof(A)/sizeof(A[0]);
    
//     for(int i=0;i<len-1;i++){
//         min_index = i;
//         for(int j=i+1;j<len-1;j++){
//             if(A[j]<A[min_index]){
//                 // A[i] = A[j];
//                 min_index=j;
//             }
//         }
        
//         if(min_index!=i){
//             temp = A[i];
//             A[i]=A[min_index];
//             A[min_index] = temp;
//             printf("swap\n");
//         }
//     }

//     for(int i=0;i<len;i++){
//         printf("%d ",A[i]);
//     }
//     printf("\n");

//     for(int i=len-1;i>=0;i--){
//         printf("%d ",A[i]);   
//     }
// }

//Insertion sort
// #include<stdio.h>
// int main(){
//     // int A[] = {20,1,5,35,50};
//     int A[] = {5,8,20,2,3,40,45};
//     int min_index,temp;
//     int len = sizeof(A)/sizeof(A[0]);
//     // int temp;
//     for(int i=0;i<len;i++){
//         // printf("%d ",A[i]);


//     }
//     printf("\n");
//     for(int i=0;i<len;i++){
//         printf("%d ",A[i]);
//     }
// }

#include<stdio.h>
int main(){
    int A[100];
    int n,i,j,key;
    printf("Enter no. of Element:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);

    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    
    for(i=1;i<n;i++){
        key = A[i];
        j=i-1;
        while (j>=0 && A[j]>key){
            A[j+1] = A[j];
            j=j-1;
        }
        A[j+1] = key;
    }
    
    printf("Shorted array :");
    
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");

}