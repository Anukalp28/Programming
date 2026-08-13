// Implementation of Pointer and Structure in C:
// 1. Write a program in C to show the basic declaration of a pointer.
// #include<stdio.h>
// int main(){
//     int num = 13;
//     int *ptr;

//     ptr = &num;
//     printf("Value of no.: %d\n",num);
//     printf("Memory addres of no.(&num): %p\n",(void*)&num);
//     printf("Value stored in pointer 'ptr': %p\n", (void*)ptr);
//     printf("Value pointed to by 'ptr' (*ptr): %d\n", *ptr);
//     return 0;
// }

// 2. Write a program in C to demonstrate the use of the & (address of) and *(value at address)
// operators.
#include<stdio.h>
int main(){
    int num = 13;
    int *ptr;
    ptr = &num;
    printf("Address-Of Operator (&)\n");
    printf("Value of num: %d\n", num);
    printf("Memory address of num (&num): %p\n", (void*)&num);
    printf("Address stored inside ptr:    %p\n\n", (void*)ptr);

    printf("Value-At-Address Operator (*)\n");
    printf("Value at the address stored in ptr (*ptr): %d\n\n", *ptr);
    
    printf("Modifying value implicitly using the pointer \n");
    *ptr = 99;
    printf("New value of num (modified via *ptr): %d\n", num);
    printf("New value retrieved via *ptr:         %p\n", ptr);
    return 0;
}
// 3. Write a program in C to add numbers using call by reference.
// 4. Write a program in C to swap two numbers using a function.


// 5. Write a program in C to store n elements in an array and print the elements using a pointer.
// #include<stdio.h>
// int main(){
//     int A[]={1,2,3,4,5,6,7,8,9,10};

//     int *ptr;
//     ptr = A;
//     int size = sizeof(A)/sizeof(A[0]);

//     for(int i=0;i<size;i++){
//         printf(" %d",*ptr+i);
//     }
// }

// 6. Implementing a structured program to print data of a student with individual initialization of
// member variables.
// 7. Create a structure called "Student" with members name, age, and total marks. Write a C
// program to input data for two students, display their information, and find the average of
// total marks.
// 8. Create a structure named Book to store book details like title, author, and price. Write a C
// program to input details for three books, find the most expensive and the lowest priced
// books, and display their information.
