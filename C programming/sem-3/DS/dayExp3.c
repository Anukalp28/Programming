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
//output
// Value of no.: 13
// Memory addres of no.(&num): 0061FF18
// Value stored in pointer 'ptr': 0061FF18
// Value pointed to by 'ptr' (*ptr): 13

// 2. Write a program in C to demonstrate the use of the & (address of) and *(value at address)
// operators.
// #include<stdio.h>
// int main(){
//     int num = 13;
//     int *ptr;
//     ptr = &num;
//     printf("Address-Of Operator (&)\n");
//     printf("Value of num: %d\n", num);
//     printf("Memory address of num (&num): %p\n", (void*)&num);
//     printf("Address stored inside ptr:    %p\n\n", (void*)ptr);

//     printf("Value-At-Address Operator (*)\n");
//     printf("Value at the address stored in ptr (*ptr): %d\n\n", *ptr);
    
//     printf("Modifying value implicitly using the pointer \n");
//     *ptr = 99;
//     printf("New value of num (modified via *ptr): %d\n", num);
//     printf("New value retrieved via *ptr:         %d\n", *ptr);
//     return 0;
// }
//output
// Address-Of Operator (&)
// Value of num: 13
// Memory address of num (&num): 0061FF18
// Address stored inside ptr:    0061FF18

// Value-At-Address Operator (*)
// Value at the address stored in ptr (*ptr): 13

// Modifying value implicitly using the pointer 
// New value of num (modified via *ptr): 99
// New value retrieved via *ptr:         99
// 3. Write a program in C to add numbers using call by reference.



// 4. Write a program in C to swap two numbers using a function.
#include<stdio.h>

void swap(int *n1,int *n2){
    int temp;
    temp=*n1;
    *n1 = *n2;
    *n2 = temp; 
}

int main(){
    int a = 20;
    int b = 30;
    
    printf("Before Swapping:\n");
    printf("A = %d, B = %d\n", a, b);
    swap(&a,&b);
    printf("After Swapping:\n");
    printf("A = %d, B = %d\n", a, b);

    return 0;
}

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
//output
//  1 2 3 4 5 6 7 8 9 10

// // Understanding structors
// #include <stdio.h>
// #include <string.h>
// struct Student{
//     char name[50];
//     int age;
//     float grade;
// };

// typedef struct Employee {
//     int id;
//     char name[50];
//     float salary;
// } Employee; // 'Employee' is the new alias name


// int main()
// {

//     // Declaring and initializing a structure variable
//     struct Student s1 = {"Rahul", 20, 18.5};
//     // Designated Initializing another structure
//     struct Student s2 = {.age = 18, .name = "Vikas", .grade = 22};
//     // Accessing structure members
//     printf("%s\t%d\t%.2f\n", s1.name, s1.age, s1.grade);
//     printf("%s\t%d\t%.2f\n", s2.name, s2.age, s2.grade);

//     Employee emp1;
//     emp1.id = 101;
//     // emp1.name = "ABC";
//     strcpy(emp1.name,"ABC");
//     emp1.salary = 80000;
//     printf("ID: %d, Name: %s, Salary: %.2f\n", emp1.id, emp1.name, emp1.salary);
//     return 0;
// }

// 6. Implementing a structured program to print data of a student with individual initialization of
// member variables.
// #include<stdio.h>
// #include<string.h>

// struct student{
//     int rolenumber;
//     char name[50];
//     float marks;
// };

// int main(){
//     struct student s1;

//     s1.rolenumber = 101;
//     strcpy(s1.name, "Rohit");
//     s1.marks = 88.5;

//     printf("Roll No.: %d\n",s1.rolenumber);
//     printf("Name    : %s\n",s1.name);
//     printf("Marks   : %f\n",s1.marks);
    
// }
//output
// Roll No.: 101
// Name    : Rohit
// Marks   : 88.500000


// 7. Create a structure called "Student" with members name, age, and total marks. Write a C
// program to input data for two students, display their information, and find the average of
// total marks.
// #include<stdio.h>
// #include<string.h>

// struct student{
//     char name[50];
//     int age;
//     float totalMarks;
// };

// int main(){
//     struct student s1,s2;
//     float avg;
//     printf("Details of 1st student\n");
//     printf("Name: ");scanf(" %[^\n]s",s1.name);
//     printf("Age: ");scanf("%d",&s1.age);
//     printf("Total Marks: ");scanf("%f",&s1.totalMarks);
//     printf("\n");
    
//     printf("Details of 2nd student\n");
//     printf("Name: ");scanf(" %[^\n]s",s2.name);
//     printf("Age: ");scanf("%d",&s2.age);
//     printf("Total Marks: ");scanf("%f",&s2.totalMarks);
//     printf("\n");

//     printf("--- Student Information ---\n");
//     printf("Student 1 Name: %s, Age: %d, Total Marks: %.2f\n", s1.name, s1.age, s1.totalMarks);
//     printf("Student 2 Name: %s, Age: %d, Total Marks: %.2f\n", s2.name, s2.age, s2.totalMarks);

//     avg = (s1.totalMarks+s2.totalMarks)/2.0;
//     printf("Average Total Marks: %.2f\n", avg);

//     return 0;
    
// }
// output
// Details of 1st student
// Name: Rahual
// Age: 19
// Total Marks: 560

// Details of 2nd student
// Name: Ronak
// Age: 20
// Total Marks: 570

// --- Student Information ---
// Student 1 Name: Rahual, Age: 19, Total Marks: 560.00
// Student 2 Name: Ronak, Age: 20, Total Marks: 570.00
// Average Total Marks: 565.00

// 8. Create a structure named Book to store book details like title, author, and price. Write a C
// program to input details for three books, find the most expensive and the lowest priced
// books, and display their information.
// #include<stdio.h>
// #include<string.h>

// struct Book{
//     char title[100];
//     char author[50];
//     float price;
// };

// int main(){
//     struct Book b[3];
    
//     for(int i=0;i<3;i++){
//         printf("Enter details for Book %d:\n",i+1);
//         printf("Title: ");scanf(" %[^\n]s", b[i].title);
//         printf("Author: ");scanf(" %[^\n]s", b[i].author);
//         printf("Price: ");scanf("%f", &b[i].price);
//         printf("\n");
//     }
//     int minIndx=0;
//     int maxIndx=0;

//     for(int i=0;i<3;i++){
//         if(b[i].price>b[maxIndx].price) maxIndx = i;
//         if(b[i].price<b[minIndx].price) minIndx = i;
//     }

//     printf("Most Expensive Book:\n");
//     printf("Title  : %s\n", b[maxIndx].title);
//     printf("Author : %s\n", b[maxIndx].author);
//     printf("Price  : INR %.2f\n\n", b[maxIndx].price);

//     printf("Lowest Priced Book:\n");
//     printf("Title  : %s\n", b[minIndx].title);
//     printf("Author : %s\n", b[minIndx].author);
//     printf("Price  : INR %.2f\n", b[minIndx].price);
// }
//output
// Enter details for Book 1:
// Title: AAA
// Author: A
// Price: 900

// Enter details for Book 2:
// Title: BBB
// Author: B
// Price: 600

// Enter details for Book 3:
// Title: CCC
// Author: C
// Price: 300

// Most Expensive Book:
// Title  : AAA
// Author : A
// Price  : INR 900.00

// Lowest Priced Book:
// Title  : CCC
// Author : C
// Price  : INR 300.00

//structure pointer ... 