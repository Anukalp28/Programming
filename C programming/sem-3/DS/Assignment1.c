// Write algorithms and C/C++/Java/Python programs to
// perform the following array operations: (a) Traversal (b)
// Insertion (c) Deletion (d) Searching (Linear Search). Test
// your programs with sample inputs and outputs.

// #include<stdio.h>

// void traverseArray(int array[],int len){
//     printf("Elements in array:");
//     for(int i=0;i<len;i++){
//         printf("%d ",array[i]);
//     }
//     printf("\n");
// }

// void insertAtIndex(int arr[], int *len, int size, int element, int index){
//     if(*len>=size){
//         printf("Error: Array Overflow. Cannot insert.\n");
//         // return;
//     }
//     if(index <0||index>*len){
//         printf("Error: Invalid position.\n");
//         // return;
//     }
    
//     for(int i=*len;i>index;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[index]=element;
//     (*len)++;
// }

// void DeletElementAtIndex(int arr[],int *len,int index){
//     if(index<0||index>*len){
//         printf("Error: Invalid position.\n");
//     }
//     arr[index]=0;
// }

// int Search(int arr[],int len,int element){
//     for(int i=0;i<len;i++){
//         if(arr[i]==element){
//             return i;
//             break;
//         }    
//     }
//     printf("Element not in array\n");
//     return -1;
// }

// int main(){
//     int array[10] = {10,20,30,40,50};
//     int size = sizeof(array)/sizeof(array[0]);
//     int len = 5;
//     traverseArray(array,len);
//     insertAtIndex(array,&len,size,35,3);
//     DeletElementAtIndex(array,&len,2);
    
//     traverseArray(array,len);
//     printf("Element at index: %d",Search(array,len,40));
    
//     return 0;
// }
// output
// Elements in array:10 20 30 40 50 
// Elements in array:10 20 0 35 40 50 
// Element at index: 4

// Design and implement a mini-project titled "Student
// Result Management System using Arrays." The system
// should support: Student record entry, display, search,
// update, deletion, calculation of total and average marks,
// identification of topper, and generation of a simple report.
// Prepare a flowchart, algorithm, source code, sample
// output, and a brief report explaining the design decisions.

// Student record entry,
// display,
// search,
// update,
// deletion,
// calculation of total and average marks,
// identification of topper,
// and generation of a simple report
#include<stdio.h>
int main(){
    // {rolno,name,p,c,m}
    int stRecord[100][5] = {10,20,30,40,50};
    int size = sizeof(stRecord)/sizeof(stRecord[1][0]);
    printf("%d ",size);
}