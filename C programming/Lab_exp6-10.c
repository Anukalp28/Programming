// // 6. C program for implementation of array operation
// // Q1. Sum of array elements
// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int sum = 0;
//     for (int i=0;i<5;i++){
//         sum +=arr[i];
//     }
//     printf("The sum of array elements is %d",sum);
//     return 0;
// }


// // Q2. Find maximum elements in array
// #include<stdio.h>
// int main(){
//     int arr[5]={20,10,50,40,30};
//     int max=arr[0];
//     for (int i=1;i<5;i++){
//         if (max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("Maximum element in array is %d",max);
//     return 0;
// }



// // Q3.Check if array is palindrome
// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     int arr[7]={1,2,3,5,3,2,1};
//     bool flg = false;
//     for (int i=0;i<7;i++){
//         if (arr[i]==arr[7-1-i]) flg = true;
//         else flg = false;
//     }
//     if (flg) printf("The array is palindrome");
//     else printf("The array is not palindrome");
//     return 0;
// }


// // Q4.Count even and odd numbers in array
// #include<stdio.h>
// int main(){
//     int a;
//     int arr[10];
//     printf("Enter 10 numbers:");

//     for (int i=0;i<10;i++){
//         scanf("%d",&a);
//         arr[i]=a;
        
//     }
//     int even = 0;
//     int add = 0;
//     for (int i=0;i<10;i++){
//         printf("%d",arr[i]);
//         if (arr[i]%2==0) even +=1;
//         else add +=1;
//     }
//     printf("Even numbers is %d & odd number is %d",even,add);
//     return 0;
// }

// // Q5.Remove duplicate elements from array
// #include<stdio.h>
// int main(){
//     int arr[10]={10,50,20,60,20,30,10,40,30,10};

//     for (int i=0;i<10;i++){
//         for (int j=0;j<i;j++){
//             if (arr[i]==arr[j]) arr[i] = 0;
//         }
//     }
//     for (int i=0;i<10;i++) printf("%d ",arr[i]);
//     return 0;
// }

// 7. Implementation of function and recursion using C program
// // Q1. Factorial using recursion
// #include<stdio.h>

// int fac(int n){
//     if (n==0 || n==1) return 1;
//     else return n*fac(n-1);
// }

// int main(){
//     int n;
//     printf("Enter a no.:");
//     scanf("%d",&n);
//     printf("Functionof %d is %d",n,fac(n));
//     return 0;
// }


// // Q2. Fibonacci series using recursion

// #include<stdio.h>

// int fibo(int n){
//     if (n==1 || n==2) return 1;
//     else return fibo(n-1) + fibo(n-2);
// }

// int main(){
//     int n;
//     printf("Enter a no.:");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         printf("%d ",fibo(i));
//     }
//     return 0;
// }


// Q3. GCD (Greatest common divisor) using recursion
// #include <stdio.h>

// int findGCD(int a, int b) {
//     if (b == 0) return a; // Base case
//     return findGCD(b, a % b);
// }

// int main() {
//     int n1 = 48, n2 = 18;
//     printf("GCD of %d and %d is %d\n", n1, n2, findGCD(n1, n2));
//     return 0;
// }

// Q4. Sum of natural numbers using recursion
// #include<stdio.h>
// int natural_sum(int n){
//     if (n==1) return 1;
//     else return n + natural_sum(n-1);
// }

// int main(){
//     int n;
//     printf("Enter a no.:");
//     scanf("%d",&n);
//     printf("Sum of natural numbers up to %d is %d",n,natural_sum(n));
// }


// // Q5. Check palindrome using recursion
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// bool isPalindrome(char str[], int start, int end) {
//     if (start >= end) return true;
//     if (str[start] != str[end]) return false;
    
//     return isPalindrome(str, start + 1, end - 1);
// }

// int main() {
//     char word[] = "radar";
//     int len = strlen(word);

//     if (isPalindrome(word, 0, len - 1))
//         printf("%s is a palindrome\n", word);
//     else
//         printf("%s is not a palindrome\n", word);

//     return 0;
// }

// // 8. Pointers using C programming
// // Q1.Pointer basics program
// #include <stdio.h>

// int main() {
//     int val = 10;
//     int *ptr = &val; // ptr stores the address of val

//     printf("Value of variable: %d\n", val);
//     printf("Address of variable: %p\n", &val);
//     printf("Value using pointer: %d\n", *ptr);
//     printf("Address stored in pointer: %p\n", ptr);

//     return 0;
// }
// // Q2.Pointer arithmetic
// #include <stdio.h>

// int main() {
//     int arr[3] = {10, 20, 30};
//     int *ptr = arr; // Points to the first element

//     for (int i = 0; i < 3; i++) {
//         printf("Element %d: %d at address %p\n", i, *(ptr + i), (ptr + i));
//     }

//     return 0;
// }
// // Q3.Pointer to function
// #include <stdio.h>

// void greet() {
//     printf("Hello from the function pointer!\n");
// }

// int main() {
//     void (*func_ptr)() = &greet; // Declaration of function pointer
//     func_ptr(); // Calling function through pointer

//     return 0;
// }
// // Q4.Dynamic Memory Allocation(malloc)
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n = 5;
//     int *arr = (int*)malloc(n * sizeof(int)); // Allocating memory

//     if (arr == NULL) {
//         printf("Memory Allocation Failed\n");
//         return 1;
//     }

//     for (int i = 0; i < n; i++) arr[i] = i + 1;

//     printf("Dynamically allocated array: ");
//     for (int i = 0; i < n; i++) printf("%d ", arr[i]);

//     free(arr); // Always free heap memory
//     return 0;
// }
// // Q5.Passing array to function using pointers
// #include <stdio.h>

// void printArray(int *ptr, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(ptr + i));
//     }
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("Array elements: ");
//     printArray(arr, 5); // Passing array name (the pointer)

//     return 0;
// }
// // 9. Implementation of structure in C
// // Q1. Student information using structure
// #include <stdio.h>

// struct Student {
//     char name[50];
//     int roll;
//     float cgpa;
// };

// int main() {
//     struct Student s1 = {"Anukalp", 1142, 8.86};

//     printf("Student Name: %s\n", s1.name);
//     printf("Roll Number: %d\n", s1.roll);
//     printf("CGPA: %.2f\n", s1.cgpa);

//     return 0;
// }
// // Q2. Rectangle area using structure
// #include <stdio.h>

// struct Rectangle {
//     float length;
//     float width;
// };

// int main() {
//     struct Rectangle rect;
//     rect.length = 12.5;
//     rect.width = 5.0;

//     float area = rect.length * rect.width;
//     printf("Area of Rectangle: %.2f sq units\n", area);

//     return 0;
// }
// // Q3. Book information using structure
// #include <stdio.h>

// struct Book {
//     char title[50];
//     char author[50];
//     int pages;
// };

// int main() {
//     struct Book b1 = {"C Programming", "Dennis Ritchie", 270};

//     printf("Book: %s\n", b1.title);
//     printf("Author: %s\n", b1.author);
//     printf("Pages: %d\n", b1.pages);

//     return 0;
// }
// // Q4. Employee details using structure
// #include <stdio.h>

// struct Employee {
//     int id;
//     char name[30];
//     float salary;
// };

// int main() {
//     struct Employee emp = {101, "Raj Kumar", 55000.50};

//     printf("ID: %d | Name: %s | Salary: %.2f\n", emp.id, emp.name, emp.salary);

//     return 0;
// }
// // Q5. Temperature conversion using structure
// #include <stdio.h>

// struct Temperature {
//     float celsius;
//     float fahrenheit;
// };

// int main() {
//     struct Temperature t;
    
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &t.celsius);

//     // Formula: (C * 9/5) + 32
//     t.fahrenheit = (t.celsius * 9 / 5) + 32;

//     printf("%.2f°C is equal to %.2f°F\n", t.celsius, t.fahrenheit);

//     return 0;
// }
// // 10.File handling using C
// // Q1. C program to create a file and write data into file.
// #include <stdio.h>

// int main() {
//     FILE *fptr;
//     char data[100];

//     // Opening file in "w" (write) mode
//     fptr = fopen("lab_work.txt", "w");

//     if (fptr == NULL) {
//         printf("Error: Could not create file.\n");
//         return 1;
//     }

//     printf("Enter text to write to the file: ");
//     fgets(data, sizeof(data), stdin);

//     // Writing to the file
//     fprintf(fptr, "%s", data);

//     // Always close the file to save changes
//     fclose(fptr);

//     printf("Data successfully written to lab_work.txt\n");
//     return 0;
// }
// // Q2. C program to copy contents of one file to anothergh'
// #include <stdio.h>

// int main() {
//     FILE *source, *dest;
//     char ch;

//     // Open source file for reading
//     source = fopen("source.txt", "r");
//     if (source == NULL) {
//         printf("Error: Source file not found.\n");
//         return 1;
//     }

//     // Open destination file for writing
//     dest = fopen("destination.txt", "w");
//     if (dest == NULL) {
//         fclose(source);
//         printf("Error: Could not create destination file.\n");
//         return 1;
        
//     }

//     // Copying process
//     while ((ch = fgetc(source)) != EOF) {
//         fputc(ch, dest);
//     }

//     printf("File copied successfully!\n");

//     fclose(source);
//     fclose(dest);

//     return 0;
// }
