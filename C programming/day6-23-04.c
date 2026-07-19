// 00:00 Introduction
// 03:59 Recurrence Relation
// 09:41 Function calling itself
// 15:15 Prob 1 : Factorial of a number

// #include<stdio.h>
// int fac(int n){
//     if (n==0 || n==1){
//         return 1;
//     }
//     else{
//         return n*fac(n-1);
//     }

// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
    
//     printf("%d",fac(n));
// }
// 25:33 COMPREHENSIVE DRY RUN
// 30:06 Tree Diagram
// 33:18 Prob 2 : Print ‘n’ to ‘1’ 

// #include<stdio.h>

// void  nth(int n){
//     if (n==0) return;
//     printf("%d ",n);
//     nth(n-1);
//     return;
// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     nth(n);
// }


// 46:56 Prob 3 : Print ‘1’ to ‘n’ (Extra Parameter)
// #include<stdio.h>
// void increasing(int x,int n){
//     if (x>n) return;
//     printf("%d ",x);
//     increasing(x+1,n);
//     return;
// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     increasing(1,n);
// }

// 55:59 Prob 4 : Print ‘1’ to ‘n’ (After Call)
// #include<stdio.h>

// void increasing(int n){
//     if (n==0) return;
//     increasing(n-1);
//     printf("%d ",n);
//     return;
// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     increasing(n);
// }


// 1:05:00 HW 1 : Print Decreasing - Increasing
// n = 4 output 4 3 2 1 1 2 3 4 
// #include<stdio.h>

// void increasing(int n){
//     if (n==0) return;
//     printf("%d ",n); //
//     increasing(n-1);
//     printf("%d ",n); //
//     return;
// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     increasing(n);
// }

// 1:06:34 Prob 5 : Print the sum of ‘1’ to ‘n’ (Parameterised)
// #include<stdio.h>

// void sum_nth(int n,int s){
//     if (n==0){
//         printf("%d",s);
//         return;
//     }
//     sum_nth(n-1,s+n);
//     return;
// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     sum_nth(n,0);
//     // printf("%d",sum_nth(1,n));
// }




// 1:18:54 Prob 6 : Print the sum of ‘1’ to ‘n’ (Return Type)
// #include<stdio.h>

// int sum_nth(int n){
//     if (n==0) return 0 ;
//     else return n + sum_nth(n-1);
// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     printf("%d ",sum_nth(n));
// }



// 1:22:05 Prob 7 : Print ‘a’ raised to the power ‘b’ (Linear Approach)
// #include<stdio.h>
// pow(int a,int n){

//     if (n==0) return 1;
//     else return a*pow(a,n-1);
// }


// int main(){
//     int a , n;
//     printf("Enter a ^ n no :");
//     scanf("%d %d",&a,&n);
//     printf("%d ",pow(a,n));
// }

// 1:29:24 Prob 8 : Print the ‘nth’ fibonacci number
// #include<stdio.h>

// int fibo(int n){
//     if (n==1 || n==2) return 1;
//     else return fibo(n-1) + fibo(n-2) ;
// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     printf("%d",fibo(n));
// }
// 1:43:16 Euler Tour Tree (basic)

// 1:46:00 *Prob 9 : Stair Path (2 Jumps max)
// #include<stdio.h>

// int path(int n){
//     if (n==1) return 1;
//     else if (n==2) return 2;
//     return path(n-1)+path(n-2);

// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     printf("%d",path(n));
// }
 

// 2:00:55 HW 2 : Stair Path (3 Jumps max)
// #include<stdio.h>

// int path(int n){
//     if (n==1) return 1;
//     else if (n==2) return 2;
//     else if (n==3) return 3;
//     return path(n-1)+path(n-2) + path(n-3);

// }

// int main(){
//     int n;
//     printf("Enter a no :");
//     scanf("%d",&n);
//     printf("%d",path(n));
// }



// 2:03:45 *Prob 10 : Print ‘a’ raised to the power ‘b’ (Logarithmic Approach)
// #include<stdio.h>
// int powlog(int a,int b){
//     if (b==0) return 1;
//     // if (b==1) return a;
    
//     // int x = powlog(a,b/2);
//     // return x*x;

//     int x = powlog(a,b/2);
//     if (b%2==0) {
//         return x*x;
//     }
//     else {
//         return x*x*a;
//     }
// }

// int main(){
//     int a,b;
//     printf("Enter a^b no :");
//     scanf("%d %d",&a,&b);
//     printf("%d",powlog(a,b));
// }

// M-2 using GP decreasing at 2:30
// #include<stdio.h>



// int main(){
//     int a,b;
//     printf("Enter a^b no :");
//     scanf("%d %d",&a,&b);
//     printf("%d",powlog(a,b));
// }


// 2:31:51 *Prob 11 : Maze Path (4 parameters)
// #include<stdio.h>

// int maze(int cr,int cc,int er,int ec){
//     int rightways = 0;
//     int downeays = 0;
//     if (cr==er && cc==ec) return 1;
//     if (cr==er){ // onley rightways
//         rightways += maze(cr,cc+1,er,ec);
//     }
//     if (cc==ec){ // onley dowways
//         downeays += maze(cr+1,cc,er,ec);
//     }
//     if (cr<er && cc<ec){
//         rightways += maze(cr,cc+1,er,ec);
//         downeays += maze(cr+1,cc,er,ec);
//     }
    

//     int totalways = rightways + downeays;
//     return totalways;


// }

// int main(){
//     int r,c;
//     // printf("Enter r c :");
//     // scanf("%d %d",&r,&c);
//     r = 3;
//     c = 3;
//     printf("%d ",maze(1,1,r,c));
// }

// 3:03:53 Prob 12 : Maze Path (2 parameters)
// reverse order 3,3 >> 1,1
// #include<stdio.h>

// int maze(int r,int c){
//     int rways = 0;
//     int dways = 0;
//     if (r==1 && c==1) return 1;
//     if (r==1) {
//         rways += maze(r,c-1);
//     }
//     if (c==1) {
//         dways +=maze(r-1,c);
//     }
//     if (r>1 && c>1){
//         rways +=maze(r,c-1);
//         dways +=maze(r-1,c); 
//     }

//     int totalways = rways + dways ;


// }

// int main(){
//     int r,c;
//     // printf("Enter r c :");
//     // scanf("%d %d",&r,&c);
//     r = 3;
//     c = 3;
//     printf("%d ",maze(r,c));
// }

// 3:11:14 Call Stack (basic)

// 3:13:23 **Pre - In - Post
// #include<stdio.h>
// void PreInPost(int n){
//     if (n==0) return;
//     printf("pre %d\n",n);
//     PreInPost(n-1);
//     printf("In %d\n",n);
//     PreInPost(n-1);
//     printf("post %d\n",n);
//     return;
// }

// int main(){
//     int n;
//     printf("Enter a no:");
//     scanf("%d",&n);

//     PreInPost(n);

//     return 0;
// }


// 3:33:04 Prob 13 - Print ZigZag
// #include<stdio.h>
// void PreInPost(int n){
//     if (n==0) return;
//     printf("%d ",n);
//     // printf("pre %d\n",n);
//     PreInPost(n-1);
//     printf("%d ",n);
//     // printf("In %d\n",n);
//     PreInPost(n-1);
//     printf("%d ",n);
//     // printf("post %d\n",n);
//     return;
// }

// int main(){
//     int n;
//     printf("Enter a no:");
//     scanf("%d",&n);

//     PreInPost(n);

//     return 0;
// }

// 3:37:05 **Prob 14 - Tower of HANOI (Best Explanation Ever)

// #include<stdio.h>

// void tower(int n,char s,char h,char d){
//     if (n==0) return;
//     tower(n-1,s,d,h);
//     printf("%c >> %c\n",s,d);
//     tower(n-1,h,s,d);
//     return;

// }

// int main(){
//     int n;
//     printf("Enter a no:");
//     scanf("%d",&n);

//     tower(n,'A','B','C');

//     return 0;
// }

