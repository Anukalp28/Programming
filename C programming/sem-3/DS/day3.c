//Reverse a string using array;
#include<stdio.h>
#include<string.h>

int main(){
    // char str[] = "Anukalp Raj";
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);

    int left = 0;
    int right = strlen(str)-1;
    char temp;

    while (left<right){
        // printf("%d",1);

        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("Reverse string:%s",str);
}




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