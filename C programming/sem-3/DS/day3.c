//Reverse a string using array;
// #include<stdio.h>
// #include<string.h>

// int main(){
//     // char str[] = "Anukalp Raj";
//     char str[100];
//     printf("Enter a string:");
//     scanf("%s",str);

//     int left = 0;
//     int right = strlen(str)-1;
//     char temp;

//     while (left<right){
//         // printf("%d",1);

//         temp = str[left];
//         str[left] = str[right];
//         str[right] = temp;

//         left++;
//         right--;
//     }

//     printf("Reverse string:%s",str);
// }




//Reverse a string using Stack;
// #include<stdio.h>
// #include<string.h>
// #define MAX 100

// char stack[MAX];
// int top = -1;
// void push(char ch){
//     if(top>=MAX-1){
//         printf("stack overflow");
//         // return '\0';
//         return;
//     }
//     stack[++top] = ch;
// }
// char pop(){
//     if(top == -1){
//         printf("stack underflow");
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
//     char str[MAX] = "Hellow Worlde";
//     printf("org str:%s\n",str);
//     reverseStr(str);
//     printf("new str:%s\n",str);
//     return 0;
// }

//Reverse a integer using Stack;
// #include<stdint.h>
// #include<stdio.h>
// #define MAX 100

// int stack[MAX],top = -1;

// void push(int n){
//     if(top>=MAX-1){
//         printf("stack overflow");
//         // return '\0';
//         return;
//     }
//     stack[++top] = n;
// }

// int pop(){
//     if(top == -1){
//         printf("Stack underflow\n");
//         return -1; // Return an error indicator
//     }
//     return stack[top--];
// }

// void reverseNumber(int intarray[], int len){
//     for(int i=0;i<len;i++){
//         push(intarray[i]);
//     }

//     for(int i=0;i<len;i++){
//         intarray[i] = pop();
//     }
// }

// int main(){
//     int intg[] ={1,2,3,4,5,6,7,8};
//     int len = sizeof(intg)/sizeof(intg[0]);

//     printf("Original array: ");
//     for(int i=0;i<len;i++){
//         printf("%d ",intg[i]);
//     }
//     printf("\n");

//     reverseNumber(intg, len);

//     printf("Reversed array: ");
//     for(int i=0;i<len;i++){
//         printf("%d ",intg[i]);
//     }
//     printf("\n");

//     return 0; 
// }


// 3. Write a program to implement multiple stacks

#include<stdio.h>
#include<conio.h>
#define MAX 10

int stack[MAX],topA=-1,topB=MAX;

void pushA(int val){
    if(topA==topB-1){
        printf("Overflow\n");
    }
    else{

        // stack[++topA] = val;
        topA++;
        stack[topA] = val;
    }
}

int popA(){
    int val;
    if(topA==-1){
        printf("\nUnderflow");
        val=-999;
    }
    else{
        // val = stack[topA--];
        
        val = stack[topA];
        topA--;
    }
    return val;
}

void display_stackA(){
    int i;
    if(topA==-1){
        printf("\nStack A is Empty");
    }
    else{
        for(i=topA;i>=0;i--){
            printf("\t %d",stack[i]);
        }
    }
}

void pushB(int val){
    if(topB-1==topA){
        printf("\n overflow");
    }
    else{
        topB--;
        stack[topB] = val;
    }
}

int popB(){
    int val;
    if(topB==MAX){
        printf("\nUnderflow");
        val=-999;
    }
    else{
        // val = stack[topA--];
        
        val = stack[topB];
        topB++;
    }
    return val;
}

void display_stackB(){
    int i;
    if(topB==MAX){
        printf("\nStack B is Empty");
    }
    else{
        for(i=topB;i<MAX;i++){
            printf("\t %d",stack[i]);
        }
    }
}




void main(){
    int option,val;
    // clrscr();
    for(int i=1;i<11;i++){
        pushA(i+1);
    }
    for(int i=1;i<11;i++){
        pushB(i+5);
    }
    do{
        printf("\n1.PUSH in Stack A");
        printf("\n2.PUSH in Stack B");

        printf("\n3.POP from Stack A");
        printf("\n4.POP from Stack B");

        printf("\n5.DISPLAY Stack A");
        printf("\n6.DISPLAY Stack B");
        printf("\nEXIT");
        
        printf("\nEnter your choice");
        scanf("%d",&option);
        switch(option){
            case 1: printf("\nEnter the value to push on stack A:");
                    scanf("%d",&val);
                    pushA(val);
                    break;
            case 2: printf("\nEnter the value to push on stack B:");
                    scanf("%d",&val);
                    pushB(val);
                    break;
            case 3: val = popA();
                    if(val=-999) 
                        printf("\n The value popped from stack A = %d",val);
                    break;
            case 4:val = popB();
                    if(val=-999) 
                        printf("\n The value popped from stack B = %d",val);
                    break;
            case 5: printf("\nThe contents of stack A are :\n");
                    display_stackA();
                    break;
            case 6: printf("\nThe contents of stack B are :\n");
                    display_stackB();
        }

    }while(option!=7);
    getch();
}