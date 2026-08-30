// Implementation of Stack in C:
// 1. Implement stack using array.
// 2. Reverse a string using stack.
// #include<stdio.h>
// #include<string.h>
// #define MAX 100

// char stack[MAX];
// int top =-1;

// void push(char ch){
//     if(top>=MAX-1){
//         printf("Stack Overflow");
//         return;
//     }
//     stack[++top] = ch;
// }
// char pop(){
//     if(top == -1){
//         printf("Stack Underflow");
//     }
//     return stack[top--];
// }

// void reverseStr(char str[]){
//     int len = strlen(str);
//     for(int i=0;i<len;i++){
//         push(str[i]);
//     }
//     for(int i=0;i<len;i++){
//         str[i] = pop();
//     }
// }

// int main(){
//     char str[MAX] = "Hello World";
//     printf("Original String:%s\n",str);
//     reverseStr(str);
//     printf("New String:%s\n",str);
//     return 0;
// }

//output
// Original String:Hello World
// New String:dlroW olleH

// 3. Write a program to convert an infix expression to a postfix expression using a stack.
//Infix to postfix conversion
//(A+B)*C-D -> AB+CD-*
// #include<stdio.h>
// #include<ctype.h>
// #define MAX 100
// char stack[MAX];
// int top = -1;

// void push(char item){

//     if(top>=MAX-1){
//         printf("Stack Overflow\n");
//     }    
//     else{
//         top++;
//         stack[top] = item;
//     }
// }        

            
// char pop(){
//     if(top < 0){
//         printf("Stack Underflow\n");
//         return '#';
//     }
//     else {
//         char item = stack[top];
//         top--;
//         return item;
//     }
// }

// int precedence(char symbol){
//     if(symbol == '^') return 3;
//     else if(symbol == '*' || symbol== '/') return 2;
//     else if(symbol == '+' || symbol== '-') return 1;
//     else return 0;
// }

// int main(){
//     char infix[MAX],postfix[MAX];
//     char item,x;
//     int i=0,j=0;
//     printf("Enter Infix expression :");
//     scanf("%s",infix);
//     while (infix[i]!='\0'){
//         item = infix[i];
//         if(item =='('){
//             push(item);
//         }
//         else if(isalnum(item)){
//             postfix[j]=item;
//             j++;
//         }
//         else if(
//             item == '+' ||
//             item == '-' ||
//             item == '/' ||
//             item == '*' ||
//             item == '^'
                
//         ){
//             while(top>=0 && precedence(stack[top])>=precedence(item)){
//                 postfix[j] = pop();
//                 j++;
//             }
//             push(item);
//         }
//         else if(item == ')'){
//             x = pop();
//             while(x!='('){
//                 postfix[j] = x;
//                 j++;
//                 x=pop();
//             }
            
//         }
//         i++;
//     }
//     while(top>=0){
//         postfix[j]=pop();
//         j++;
//     }
//     postfix[j] = '\0';
//     printf("Postfix expression :%s\n",postfix);
//     return 0;
// }
//output
// Enter Infix expression :(A+B)*C-D
// Postfix expression :AB+C*D-

// 4. Implement a stack using arrays. Include operations such as push (inserting an element), pop
// (removing the top element), peek (viewing the top element without removal), and display
// (showing all elements).

#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the stack

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty.\n");
        return -1;
    } else {
        int popped_value = stack[top];
        top--;
        return popped_value;
    }
}

int peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return -1;
    } else {
        return stack[top];
    }
}


void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (Top to Bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
    }
}

    int main() {
        int choice, value;
    
        while (1) {
            printf("\n--- Stack Operations Menu ---\n");
            printf("1. Push (Insert)\n");
            printf("2. Pop (Remove)\n");
            printf("3. Peek (View Top)\n");
            printf("4. Display (Show All)\n");
            printf("5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
    
            switch (choice) {
                case 1:
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    push(value);
                    break;
                case 2:
                    value = pop();
                    if (value != -1) {
                        printf("Popped element: %d\n", value);
                    }
                    break;
                case 3:
                    value = peek();
                    if (value != -1) {
                        printf("Top element: %d\n", value);
                    }
                    break;
                case 4:
                    display();
                    break;
                case 5:
                    printf("Exiting program.\n");
                    exit(0);
                default:
                    printf("Invalid choice! Please try again.\n");
            }
        }
        return 0;
    }