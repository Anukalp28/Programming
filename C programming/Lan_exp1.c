// // Q1
// #include<stdio.h>
// int main(){
//     printf("Hello,World!");    
// }

// // Q2
// #include<stdio.h>
// int main(){
//     float a ,b,c,avg;

//     printf("Enter 1st number :");
//     scanf("%f",&a);
//     printf("Enter 1st number :");
//     scanf("%f",&b);
//     printf("Enter 1st number :");
//     scanf("%f",&c);

//     avg = (a+b+c)/3;
//     printf("Average of three Number is :%f",avg);

// }

// // Q3
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("a = %d b = %d",a,b);
//     printf("\n---------------------\n");

//     // a,b == b,a;
//     c = a;
//     a = b;
//     b = c;
//     printf("a = %d b = %d",a,b);
// }

// // Q4
// // si = p*r*t/100
// #include<stdio.h>
// int main(){
//     float p ,r ,t, si ;

//     printf("Enter Amount :");
//     scanf("%f",&p);
//     printf("Enter Rate of interest :");
//     scanf("%f",&r);
//     printf("Enter Time :");
//     scanf("%f",&t);

//     si = (p*r*t)/100;
//     printf("Simple interest is :%f",si);
// }

// Q5
// #include<stdio.h>
// int main(){
//     float f,c;
//     printf("Enter temperature in fahrenheit :");scanf("%f",&f);
    
//     c = (f - 32)*5/9;
//     printf("Temperature in celsius :%f",c);
// }



// #include<stdio.h>
// int main(){
//     int n1,n2;
//     char op;
//     printf("Enter first number:");
//     scanf("%d",&n1);
//     printf("Enter operation(+,-,*,/,%%):");
//     // Add a space before %c to consume the newline character left by the previous scanf
//     scanf(" %c",&op);
//     printf("Enter second number:");
//     scanf("%d",&n2);

//     switch (op){
//     case '+' :
//         printf("%d + %d = %d\n",n1,n2,n1+n2);
//         break;
//     case '-' :
//         printf("%d - %d = %d\n",n1,n2,n1-n2);
//         break;
//     case '*' :
//         printf("%d * %d = %d\n",n1,n2,n1*n2);
//         break;
//     case '/' :
//         if (n2 != 0) {
//             // Note: This is integer division. For float division, you would cast to float.
//             printf("%d / %d = %f\n",n1,n2,(float)n1/n2);
//         } else {
//             printf("Error: Division by zero.\n");
//         }
//         break;
//     case '%' :
//         if (n2 != 0) {
//             printf("%d %% %d = %d\n",n1,n2,n1%n2);
//         } else {
//             printf("Error: Division by zero.\n");
//         }
//         break;
    
//     default:
//         printf("Error: Invalid operation.\n");
//     }

//     return 0;
// }


#include<stdio.h>

int main(){
    int n = 50;
// (1 1)(1 2)(1 3)(1 4)(1 5)
// (2 1)(2 2)(2 3)(2 4)(2 5)
// (3 1)(3 2)(3 3)(3 4)(3 5)
// (4 1)(4 2)(4 3)(4 4)(4 5)
// (5 1)(5 2)(5 3)(5 4)(5 5)
// printf("%c",65);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            // printf("(%d %d)",i,j);

            if (i<=j) printf("%c ",64+n-i+1); 
            else printf("%c ",64+n-j+1);
        }
        for (int j=n-1;j>=1;j--){

            if (i<=j) printf("%c ",64+n-i+1);
            else printf("%c ",64+n-j+1);
        }
        printf("\n");
    }
    for (int i=n-1;i>=1;i--){
        for (int j=1;j<=n;j++){
            

            if (i<=j) printf("%c ",64+n-i+1);
            else printf("%c ",64+n-j+1);
        }
        for (int j=n-1;j>=1;j--){

            if (i<=j) printf("%c ",64+n-i+1);
            else printf("%c ",64+n-j+1);
        }
        printf("\n");
    }

    return 0;
}