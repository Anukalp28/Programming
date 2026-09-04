//Implementation Sorting in C:

//1. Implement the Selection Sort algorithm to sort an array of integers in ascending order.
//Selection sorting
// #include<stdio.h>

// int main(){
//     int A[] = {20,1,5,35,50};
//     int min_index,temp;
//     int len = sizeof(A)/sizeof(A[0]);

//     for(int i=0;i<len-1;i++){
//         min_index = i;
//         for(int j=i+1;j<len;j++){
//             if(A[j]<A[min_index]){
//                 // A[i] = A[j];
//                 min_index=j;
//             }
//         }

//         if(min_index!=i){
//             temp = A[i];
//             A[i]=A[min_index];
//             A[min_index] = temp;
//             // printf("swap\n");
//         }
//     }

//     for(int i=0;i<len;i++){
//         printf("%d ",A[i]);
//     }
//     printf("\n");

//     // for(int i=len-1;i>=0;i--){
//     //     printf("%d ",A[i]);
//     // }
//     // }
// }
//output
//1 5 20 35 50

//2. Implement the Insertion Sort algorithm to sort an array of integers in ascending order.
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

// #include<stdio.h>
// int main(){
//     int A[100];
//     int n,i,j,key;
//     printf("Enter no. of Element:");
//     scanf("%d",&n);
//     printf("Enter %d integers:",n);

//     for(i=0;i<n;i++){
//         scanf("%d",&A[i]);
//     }

//     for(i=1;i<n;i++){
//         key = A[i];
//         j=i-1;
//         while (j>=0 && A[j]>key){
//             A[j+1] = A[j];
//             j=j-1;
//         }
//         A[j+1] = key;
//     }

//     printf("Shorted array :");

//     for(i=0;i<n;i++){
//         printf("%d ",A[i]);
//     }
//     printf("\n");
// }
//output
//Enter no. of Element:5
//Enter 5 integers:5 9 8 2 1
//Shorted array :1 2 5 8 9

//3. Implement the Merge Sort algorithm to sort an array of integers in ascending order. Include
//recursive and iterative approaches.
//Merge short

// #include<stdio.h>

// void merge(int arr[],int left,int mid,int right){
//     int i=0,j=0,k=left;
//     int n1 = mid - left + 1;
//     int n2 = right - mid;
//     int L[n1],R[n2];

//     for(i=0;i<n1;i++) L[i] = arr[left+i];
//     for(j=0;j<n2;j++) R[j] = arr[mid+1+j];

//     i=0 ; j=0;
//     while(i<n1 && j<n2){
//         arr[k++] = (L[i]<=R[j]) ? L[i++] : R[j++];
//     }
//     while(i<n1) arr[k++] = L[i++];
//     while(j<n2) arr[k++] = R[j++];
// }

// void mergeShort(int arr[],int left,int right){
//     if(left<right){
//         int mid = left + (right-left)/2;
//         mergeShort(arr,left,mid);
//         mergeShort(arr,mid+1,right);
//         merge(arr,left,mid,right);
//     }
// }

// int main(){
//     int arr[] = {38,27,43,3,9,82,10};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     mergeShort(arr,0,size-1);
//     for(int i=0;i<size;i++) printf("%d ",arr[i]);
//     return 0;
// }
//output
//3 9 10 27 38 43 82






//4. Implement the Quick Sort algorithm to sort an array of integers in ascending order. Include
//both recursive and iterative approaches.
//Quick sort

#include <stdio.h>

// Partition function used by both recursive and iterative approaches
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = (low - 1);    // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[i + 1] and arr[high] (or pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

// Recursive approach
void quickSortRecursive(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSortRecursive(arr, low, pi - 1);
        quickSortRecursive(arr, pi + 1, high);
    }
}

// Iterative approach using a custom stack
void quickSortIterative(int arr[], int low, int high) {
    // Create an auxiliary stack
    int stack[high - low + 1];

    // Initialize top of stack
    int top = -1;

    // Push initial values of low and high to stack
    stack[++top] = low;
    stack[++top] = high;

    // Keep popping from stack while is not empty
    while (top >= 0) {
        // Pop high and low
        high = stack[top--];
        low = stack[top--];

        // Set pivot element at its correct position in sorted array
        int pi = partition(arr, low, high);

        // If there are elements on left side of pivot, then push left side to stack
        if (pi - 1 > low) {
            stack[++top] = low;
            stack[++top] = pi - 1;
        }

        // If there are elements on right side of pivot, then push right side to stack
        if (pi + 1 < high) {
            stack[++top] = pi + 1;
            stack[++top] = high;
        }
    }
}

int main() {
    int arr1[] = {10, 7, 8, 9, 1, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Recursive Quick Sort: ");
    quickSortRecursive(arr1, 0, size1 - 1);
    for (int i = 0; i < size1; i++) printf("%d ", arr1[i]);
    printf("\n");

    int arr2[] = {4, 3, 5, 2, 1, 32, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Iterative Quick Sort: ");
    quickSortIterative(arr2, 0, size2 - 1);
    for (int i = 0; i < size2; i++) printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}
//output
//Recursive Quick Sort: 1 5 7 8 9 10 
//Iterative Quick Sort: 1 2 3 4 5 10 32 
