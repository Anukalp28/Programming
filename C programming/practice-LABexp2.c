// Q1.Write a program that checks if a number is even or odd.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     if(n==0){
//         printf("number is not even / odd its zero");
//     }
//     else if(n%2==0){
//         printf("Number is Even");
//     }
//     else if(n%2!=0){
//         printf("Number is odd");
//     }
// }


// Q2. Write a program that checks whether a given number is positive, negative, or zero.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);

//     if (n<0) printf("Number is -ve");
//     else if(0<n) printf("Number is +ve");
//     else printf("Number is Zero");
// }


// Q3.Write a program that takes a number (1-7) as input and displays the corresponding day of
// the week.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a No.b/w(1-7):");
//     scanf("%d",&n);
//     if(n==1) printf("Sunday");
//     else if(n==2) printf("Monday");
//     else if(n==3) printf("Tuesday");
//     else if(n==4) printf("Wednesday");
//     else if(n==5) printf("Thursday");
//     else if(n==6) printf("Friday");
//     else if(n==7) printf("Saturday");
//     return 0;
// }

// Q4.Write a program that acts as a simple calculator. It should take two numbers and an
// operator (+,-,*,/,%) as input and display the result

// #include<stdio.h>
// int main(){
//     int n1,n2;
//     char op;
//     printf("Enter first number:");
//     scanf("%d",&n1);    
    
//     printf("Enter operation(+,-,*,/,%%) :");
//     scanf(" %c",&op);

//     printf("Enter Secand number:");
//     scanf("%d",&n2);

//     switch (op)
//     {
//     case '+':
//         printf("%d + %d = %d",n1,n2,n1+n2);
//         break;
//     case '-':
//         printf("%d - %d = %d",n1,n2,n1-n2);
//         break;
//     case '*':
//         printf("%d * %d = %d",n1,n2,n1*n2);
//         break;
//     case '/':
//         if(n2!=0) printf("%d / %d = %f",n1,n2,(float)n1/n2);
//         else printf("\nError: cannot divide by zero");
//         break;
//     case '%':
//         if(n2!=0) printf("%d %% %d = %f",n1,n2,n1%n2);
//         else printf("\nError: cannot divide by zero");
//         break;
//     default:
//         printf("Error: Invalid operator\n");
//         break;
//     }
//     return 0;
// }

// Q5. Write a program that takes a student’s score as input and assigns a grade based on the
// score


#include<stdio.h>
int main(){
    float m;
    printf("Enter marks of student :");
    scanf("%f",&m);

    if(m >=90) printf("Grade A");
    else if(m >=75) printf("Grade B");
    else if(m >=60) printf("Grade C");
    else if(m >=40) printf("Grade D");
    else printf("Fail");

    return 0;
}