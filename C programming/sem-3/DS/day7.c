// 1. Perform Linear Search on an array. Description of programs:
//  Read an array of type integer.
//  Input element from user for searching.
//  Search the element by passing the array to a function and then returning the
// position of the element from the function else return -1 if the element is not
// found.
//  Display the position where the element has been found.
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

// output
// Enter the no. to find:8
// Element found at index:3


// 2. Perform Binary Search on an array. Description of programs:
//  Read an array of type integer.
//  Input element from user for searching.
//  Search the element by passing the array to a function and then returning the
// position of the element from the function else return -1 if the element is not
// found.
//  Display the position where the element has been found.
// binary search algo
#include <stdio.h>

// Fixed: Binary search needs to check when low == high as well
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) { 
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

// Changed return type to void since it does not return a value
void SelectionSort(int arr[], int size) {
    int min_index, temp;
    for (int i = 0; i < size; i++) {
        min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

int main() {
    int arr[] = {12, 45, 67, 8, 93, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the no. to find: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Binary search requires a sorted array
    SelectionSort(arr, size);

    // Print sorted array for user clarity
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in array\n");
    }

    return 0;
}

// output
// Enter the no. to find: 67
// Sorted array: 8 12 21 45 67 93 
// Element found at index: 4