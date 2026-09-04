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
//         return;
//     }
//     if(index <0||index>*len){
//         printf("Error: Invalid position.\n");
//         return;
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
#include<string.h>

void record_entry(int arr[][4],int strLen){
    int RolNo,p,c,m;
    printf("\nEnter Rollno.:");scanf("%d",&RolNo);
    for(int i=0;i<strLen;i++){
        if(RolNo==arr[i][0]){
            printf("Rollno already exist\n");
            return;
        }
    }
    printf("\nEnter Physics marks:");scanf("%d",&p);
    printf("\nEnter Chemistry marks:");scanf("%d",&c);
    printf("\nEnter Maths marks:");scanf("%d",&m);
    arr[strLen][0] = RolNo;
    arr[strLen][1] = p;
    arr[strLen][2] = c;
    arr[strLen][3] = m;
    
}
void display(int arr[][4],int len){
    printf("Rollno\tPhysics\tChemistry\tMaths\n");
    for(int i=0;i<len;i++){
        printf("%d \t%d\t%d\t%d\n",arr[i][0],arr[i][1],arr[i][2],arr[i][3]);
    }
}

void total_avg_marks(int arr[][4],int len){
    printf("Rollno\tTotal\tavg\n");
    int total;
    float avg;
    for(int i=0;i<len;i++){
        total = arr[i][1]+arr[i][2]+arr[i][3];
        avg = total/3.0;
        printf("%d \t%d \t%f\n",arr[i][0],total,avg);
    }
}

int topper(int arr[][4],int len){
    int avg;
    int topRoll = 0;
    float topAvgMarks = 0;
    for(int i=0;i<len;i++){
        avg = (arr[i][1]+arr[i][2]+arr[i][3])/3.0;
        if(topAvgMarks<avg){
            topAvgMarks = avg;
            topRoll = arr[i][0];
        }
    }
    printf("Toper Rollno.:%d and avg marks:%f",topRoll,topAvgMarks);
}

void report(int arr[][4],int len){
    int RolNo,Rindx;
    float avg;
    printf("\nEnter Rollno.:");scanf("%d",&RolNo);
    for(int i=0;i<len;i++){
        if(RolNo==arr[i][0]){
            Rindx = i;
            break;
        }
    }
    printf("Subject \tMarks\n");
    printf("Physics   \t%d\n",arr[Rindx][1]);
    printf("Chemistry \t%d\n",arr[Rindx][2]);
    printf("Maths     \t%d\n",arr[Rindx][3]);

    avg = (arr[Rindx][1]+arr[Rindx][2]+arr[Rindx][3])/3.0;
    printf("Average marks:%f",avg);

}

int main(){
    // {rolno,name,p,c,m}  //{rolno,p,c,m}
    // int stRecord[100][4];
    int stRecord[100][4] = {10,30,40,50,
                            11,50,50,50,
                            12,60,60,60,
                            13,65,75,80,
                            14,80,85,90
    };
    int stLen=0;

    stLen++;
    stLen++;
    stLen++;
    stLen++;
    stLen++;
    
    int size = sizeof(stRecord)/sizeof(stRecord[0]);
    // printf("%d ",size);
    display(stRecord,stLen);
    record_entry(stRecord,stLen);stLen++;
    // record_entry(stRecord,stLen);stLen++;
    display(stRecord,stLen);
//     total_avg_marks(stRecord,stLen);
//     topper(stRecord,stLen);
//     report(stRecord,stLen);
//     report(stRecord,stLen);
}



//tower of honey
// #include <stdio.h>

// // Recursive function to solve Tower of Hanoi
// void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
//     if (n == 1) {
//         printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
//         return;
//     }
    
//     // Move n-1 disks from from_rod to aux_rod using to_rod as auxiliary
//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    
//     // Move the nth disk from from_rod to to_rod
//     printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    
//     // Move the n-1 disks from aux_rod to to_rod using from_rod as auxiliary
//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
// }

// int main() {
//     int n = 3; // Number of disks
    
//     printf("The sequence of moves for %d disks is:\n", n);
//     // A, B, and C are names of rods
//     towerOfHanoi(n, 'A', 'C', 'B'); 
    
//     return 0;
// }
