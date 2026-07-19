

// #include <stdio.h>
// int main(){
//     float p,r,t,si;
//     printf("Enter p,r,t :");
//     scanf("%f %f %f",&p,&r,&t);
//     si = (p*r*t)/100;
//     printf("Si is :%f",si);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float f,c;
//     printf("Enter f:");
//     scanf("%f",&f);
//     c = (f-32)*5/9;
//     printf("tempreturn in C :%f",c);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter no:");
//     scanf("%d",&n);
//     if (n%2==0){
//         printf("Even");
//     }
//     else {
//         printf("Odd");
//     }

//     if (n>0) {
//         printf("+ve");
//     }
//     else if (n<0){
//         printf("-ve");
//     }
//     else {
//         printf("0");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a no b-t 1-7:");
//     scanf("%d",&n);

//     switch(n){
//         case 1 : {
//             printf("Monday");
//             break;
//         }
//         case 2 : printf("tuesday"); break;
//         case 3 : printf("Wednesday"); break;
//         case 4 : printf("thursday"); break;
//         case 5 : printf("friday"); break;
//         case 6 : printf("saturday"); break;
//         case 7 : printf("sunday"); break;
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int n1,n2;
//     char op;
//     printf("Enter two no:");
//     scanf("%d",&n1);
//     printf("Select operation (+ - * / %%): ");
//     scanf(" %c",&op); // Added space before %c and the & operator
//     printf("Enter second no:");
//     scanf("%d",&n2);

//     switch (op){

//     case '+' : printf("%d + %d = %d\n",n1,n2,n1+n2); break;
//     case '-' : printf("%d - %d = %d\n",n1,n2,n1-n2); break;
//     case '*' : printf("%d * %d = %d\n",n1,n2,n1*n2); break;
//     case '/' : {
//         if (n2!=0){
//             // Cast to float for floating-point division
//             printf("%d / %d = %f\n",n1,n2,(float)n1/n2);
//         }
//         else {
//             printf("Error: Division by zero.\n");
//         }
//         break;
//     }
//     case '%' : {
//         if (n2!=0){
//             printf("%d %% %d = %d\n",n1,n2,n1%n2);
//         }
//         else {
//             printf("Error: Division by zero.\n");
//         }
//         break;
//     }
//     default:
//         printf("Error: Invalid operation.\n");
//         break;
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     float marks;
//     printf("Enter marks :");
//     scanf("%f",&marks);

//     if (marks >= 90) printf("Grade A");
//     else if (marks >= 75) printf("Grade B");
//     else if (marks >= 60) printf("Grade C");
//     else if (marks >= 40) printf("Grade D");
//     else printf("Fail");
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     for (int i=1;i<=10;i++){
//         printf("%d ",i);
//     }
//     printf("\n");
//     for (int i=10;i>=1;i--){
//         printf("%d ",i);
//     }
//     printf("\n");

//     int i = 10;
//     while (i>=1) {
//         printf("%d ",i);
//         i--;

//     }
    
// }

// #include <stdio.h>
// int main(){
//     int sum = 0;
//     for (int i=1;i<=100;i++){
//         sum += i;
//     }
//     printf("%d",sum);
//     printf("\n");

//     sum = 0;
//     int i = 1;
//     while (i<=100){
//         sum += i;
//         i++;
//     }
//     printf("%d",sum);

// }


// #include <stdio.h>
// int main(){
//     int n = 5;
//     // printf("Enter no:");
//     // scanf("%d",&n);

//     int fac = 1;
//     for (int i=1;i<=n;i++){
//         // fac *= i;
//         fac = fac*i;
//     } 
//     printf("%d",fac);

// }

// #include <stdio.h>
// int main(){
//     int n = 5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }

// }

// #include <stdio.h>
// int main(){
//     int n = 5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//                 // printf("* ");
//             if (i+j<=n){
//                 // printf("(   )");
//                 printf("  ");
//             }
//             else {
//                 // printf("(%d %d)",i,j);
//                 printf("* ");
//             }
//         }
//         // printf("\n");
//         for (int j=2;j<=n;j++){
//             // printf("(%d %d)",i,j);
//                 // printf("* ");
//             if (i>=j) {
//                 // printf("(%d %d)",i,j);
//                 printf("* ");
//             }
//             else {
//                 // printf("(   )",i,j);
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }

// }

// #include <stdio.h>
// int main(){
//     int n = 5;
//     for (int i=1;i<=n;i++){
//         int a = 1;
//         for (int j=1;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 // printf("* ");
//                 printf("%d ",a);
//                 a++;
//             }
//         }
//         printf("\n");
//     }

// }
// #include <stdio.h>
// int main(){
//     int n = 5;
//     for (int i=1;i<=n;i++){
//         int a = 1;
//         for (int j=1;j<=n;j++){
//                 // printf("* ");
//             if (i+j<=n) printf("  ");
//             else{
//                 printf("%d ",a);
//                 a++;
//             } 
            
//         }
//         a--;
//         a--;
//         for (int j=2;j<=n;j++){
//             if (i>=j){
//                 printf("%d ",a); 
//                 a--;

//             }
//             else printf("  ");
           
//         }
//         printf("\n");
//     }

// }
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100];
//     printf("Enter string:");
//     scanf("%s",str);
//     int len = strlen(str);
//     printf("len is %d",len);

// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[100] = "Hello";
//     char str2[100] = " World";
//     strcat(str1,str2);
//     printf("%s",str1);
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100];
//     printf("Enter str :");
//     scanf("%s",&str);

//     int len = strlen(str);
//     int flg = 1;
//     for (int i=0;i<=len/2;i++){
//         if (str[i] != str[len-1-i]) {
//             flg = 0;
//             break;
//         }
//     }
//     if (flg == 0) printf("not pal");
//     else if (flg == 1) printf("pal");
// }
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// void vandc(char str[]){
//     int vowels = 0;
//     int consonants = 0;
//     for (int i=0; str[i] != '\0'; i++){ // Use '\0' (char) instead of "\0" (string)
//         char ch = tolower(str[i]); // Corrected typo from 'stt' to 'str'

//         // Only count alphabetic characters
//         if (isalpha(ch)) {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//                 vowels++;
//             }
//             else {
//                 consonants++;
//             }
//         }
//     }
//     printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
// }


// int main(){
//     char str[100] = "Hello World 123";
//     // printf("Enter str :");
//     // scanf("%99s", str); // Corrected scanf and added width limit for safety
//     vandc(str);
//     return 0; // Added return statement
// }

// #include<stdio.h>
// #include<string.h>
// // #include<ctype.h>

// int main(){
//     char str[100] = 'ad adada adwadawd';
//     char old[] = "ad"
//     char new[] = "okkk"


// }

// #include <stdio.h>
// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int sum = 0;
//     for (int i=0;i<10;i++){
//         sum += arr[i];
//     }
//     printf("Sum %d",sum);
//     printf("\n");
//     int max = arr[0];
//     for (int i=1;i<10;i++){
//         if (max < arr[i]){
//             max = arr[i];
//         }
//     }
//     printf("Max element is %d",max);

// }

// #include <stdio.h>
// #include <stdbool.h>
// int main(){
//     int arr[10] = {1,2,3,4,5,5,4,3,2,1};
//     bool flg = true;
//     for (int i=0;i<10;i++){
//         if (arr[i] != arr[10-i-1]){
//             flg = false;
//             break;
//         }
//     }
//     if (flg) printf ("parana");
//     else printf("not parand");
// }

// #include <stdio.h>
// int main(){
//     int arr[10] = {1,2,3,4,5,5,4,3,2,1};

//     int even = 0;
//     int odd = 0;
//     for (int i=0;i<10;i++){
//         if (arr[i]%2==0) even++;
//         else odd++;
//     }
//     printf("even-%d odd-%d",even,odd);


// }

// #include <stdio.h>
// int main(){
//     int arr[10] = {1,2,3,4,5,5,4,3,2,1};

//     for (int i=0;i<10;i++){
//         for (int j=0;j<i;j++){
//             if (arr[i]==arr[j]) arr[i]=0;
//         }
//     }

//     for (int i=0;i<10;i++){]
//         printf("%d ",arr[i]);
//     }

// }

// #include <stdio.h>
// int fac(int n){
//     if (n==0||n==1) return 1;
//     else return n*fac(n-1);
// }

// int naturl_sum(int n){
//     if (n==0||n==1) return 1;
//     else return n + naturl_sum(n-1);
// }

// int gcd(int a,int b){
//     if (b==0) return a;
//     else return gcd(b,a%b);
// }

// int main(){
//     printf("Fac of 5 is :%d",fac(5));
//     printf("\n");
//     printf("Gcd of 48 and 18 is :%d",gcd(48,18));
//     printf("\n");
//     printf("natural sum of up to 10 :%d",naturl_sum(10));
// }
// #include <stdio.h>

// int fibo(int n){
//     if(n==1||n==2) return 1;
//     else return fibo(n-1) + fibo(n-2);

// }
// int main(){
//     int n;
//     printf("Enter a no:");
//     scanf("%d", &n);

//     // Loop up to 'n' to print n Fibonacci numbers
//     for (int i = 1; i <= n; i++) {
//         printf("%d ",fibo(i));
//     }
//     // printf("\n"); // Add a newline for better formatting
//     return 0; // Add a return statement to main
// }

// #include <stdio.h>
// #include<string.h>
// #include <stdbool.h>

// bool ispalindron(char str[],int start,int end){
//     // int len = strlen(str);
//     if (start>=end) return true;
//     if (str[start] != str[end]) return false;
//     return ispalindron(str,start+1,end-1);

// }

// int main(){
//     char str[] = "ASDDSA";
//     int len = strlen(str);

//     if (ispalindron(str,0,len-1)) printf("yes palindrom");
//     else printf("not a palindrom");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int arr[3] = {10,20,30};
//     int *p = arr;

//     for (int i=0;i<3;i++){
//         printf("Element %d:%dat addres %p\n",i,*(p+i),(p+i));
//     }

// }

#include <stdio.h>
void greet(){
    printf("Hell from fun\n");
}

int main(){
    void (*func_prt)() = &greet;
    func_prt();
    return 0;

}
