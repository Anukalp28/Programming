//Infix to postfix conversion
//(A+B)*C-D -> AB+CD-*
#include<stdio.h>
#include<ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;

void push(char item){

    if(top>=MAX-1){
        printf("Stack Overflow\n");
    }    
    else{
        top++;
        stack[top] = item;
    }
}        

            
char pop(){
    char item = '#';
    if(top<0){
        printf("Stack is Underflow\n");
    }
    else{
        item = stack[top];
        top++;
        return item;
    }
}

int precedence(char symbol){
    if(symbol == '^') return 3;
    else if(symbol == '*' || symbol== '/') return 2;
    else if(symbol == '+' || symbol== '-') return 1;
    else return 0;
}

int main(){
    char infix[MAX],postfix[MAX];
    char item,x;
    int i=0,j=0;
    printf("Enter Infix expression");
    scanf("%s",&infix);
    while (infix[i]!='\0'){
        item = infix[i];
        if(item =='('){
            push(item);
        }
        else if(isalnum(item)){
            postfix[j]=item;
            j++;
        }
        else if(
            item == '+' ||
            item == '-' ||
            item == '/' ||
            item == '^'
                
        ){
            while(top>=0 && precedence(stack[top])>=precedence(item)){
                postfix[j] = pop();
                j++;
            }
            push(item);
        }
        else if(item == ')'){
            x = pop();
            while(x!='('){
                postfix[j] = x;
                j++;
                x=pop();
            }
            
        }
        i++;
    }
    while(top>=0){
        postfix[j]=pop();
        j++;
    }
    postfix[j] = '\0';
    printf("Postfix expression:%s\n",postfix);
    return 0;
}