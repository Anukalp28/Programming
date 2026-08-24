// // --lennar search algo
// #include<stdio.h>

// int linearSearch(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {12,45,67,8,93,21};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int key;
//     printf("Enter the no. to find:");scanf("%d",&key);
//     int result = linearSearch(arr,size,key);

//     if(result !=-1){
//         printf("Element found at index:%d\n",result);
//     }
//     else{
//         printf("Element not found in the array");
//     }
// }
//output
// Enter the no. to find:8
// Element found at index:3

// binary search algo
#include<stdio.h>

int binarySearch(int arr[],int size,int target){
    int low = 0;
    int high = size-1;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}


int SelectionSort(int arr[],int size){
    int min_index,temp;
    
    for(int i=0;i<size;i++){
        min_index = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                // A[i] = A[j];
                min_index=j;
            }
        }
        
        if(min_index!=i){
            temp = arr[i];
            arr[i]=arr[min_index];
            arr[min_index] = temp;
            // printf("swap\n");
        }
    }
}
int main(){
    int arr[] = {12,45,67,8,93,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("Enter the no. to find:");scanf("%d",&target);

    SelectionSort(arr,size);
    // for(int i=0;i<size;i++){
    //     printf("%d ",arr[i]);
    // }

    int result = binarySearch(arr,size,target);

    if(result !=-1){
        // printf("Element found at index:%d\n",result);
        printf("Element found in array:");

    }
    else{
        printf("Element not found in array");
    }
}