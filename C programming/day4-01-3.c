//---------------------------Pattern Printing---------------------------
// 01:44 Q1 - Star Rectangle
// #include<stdio.h>
// int main(){
//     // int n = 5;  
//                     // |>> Rwo
//     for (int i=1;i<=5;i++){ 
//                     // |>>colum
//         for (int j=1;j<=3;j++){
//             printf("* ",i,j);
//         }
//             //  |>> new line out of inner loop
//         printf("\n");
//     }
// }


// 17:19 Q2 - Star Square
// #include<stdio.h>
// int main(){
//     int n = 5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             printf("(%d %d)",i,j);
//         }
//         printf("\n");
//     }
// }


// 18:01 Q3 - Number Square
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// #include<stdio.h>
// int main(){
//     int n = 5;
//     for (int i=1;i<=n;i++){
//         int t = 1;
//         for (int j=1;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             printf("%d ",t);
//             t++;
//         }
//         printf("\n");
//     }
// }

// 25:53 Q4 - Star Triangle
// #include<stdio.h>
// int main(){
//     // int n = 5;
//     // for (int i=1;i<=n;i++){
//     //     for (int j=1;j<=n;j++){
//     //         if (j<=i){
//     //             printf("(%d %d)",i,j);
//     //             // printf("* ");
                
//     //         }
//     //     }
//     //     printf("\n");
//     // }
//     int k = 5;
//     for (int i=1;i<=k;i++){
//         for (int j=1;j<=k;j++){
//             if (j>=i){
//                 printf("(%d %d)",i,j);
//                 // printf("* ");
                
//             }
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n = 4;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             // printf("* ");
//             printf("(%d %d)",i,j);
//         }
//         printf("\n");
//     }
// }


// 35:09 Q5 - Star Triangle Inverted
// #include<stdio.h>
// int main(){
//     int n = 4;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n+1-i;j++){
//             // printf("* ");
//             printf("(%d %d)",i,j);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n = 4;
//     int a=n;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=a;j++){
//             // printf("* ");
//             printf("(%d %d)",i,j);
//         }
//         a--;
//         printf("\n");
//     }
// }

// 40:50 sign off 


// 45:36 Q6 - Number Triangle
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a = 1;
//         for (int j=1;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("%d ",a);
//                 a++;
//             }
//         }
//         printf("\n");
//     }
// }



// 48:56 Q7 - Number Triangle Inverted
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a = 1;
//         for (int j=1;j<=n;j++){
//             if (i<=j){
//                 // printf("(%d %d)",i,j);
//                 printf("%d ",a);
//                 a++;
//             }
//         }
//         printf("\n");
//     }
// }

// 49:22 Q8 - Odd Number Triangle
// 1 
// 1 3
// 1 3 5
// 1 3 5 7
// 1 3 5 7 9
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a = 1;
//         for (int j=1;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("%d ",a);
//                 a=a+2;
//             }
//         }
//         printf("\n");
//     }
// }

// 1:05:03 Q9 - Alphabet Square
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E

// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a = 65;
//         for (int j=1;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             printf("%c ",a);
//             a++;
//         }
//         printf("\n");
//     }
// }

// 1:14:07 Q10 - Alphabet Triangle
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a = 65;
//         for (int j=1;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("%c ",a);
//                 a++;
//             }
//         }
//         printf("\n");
//     }
// }

// 1:15:51 Q11 - *Number & Alphabet Triangle
// 1 
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a = 1;
//         int chr=65;
//         for (int j=1;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 // printf("%d ",a);

//                 if (i%2==0){
//                     printf("%c ",chr);
//                     chr++;
//                 }
//                 else{
//                     printf("%d ",a);
//                     a++;
//                 }   
//             }
//         }
//         printf("\n");
//     }
// }


// 1:16:57 Q12 - Star Plus
//     *     
//     *
// * * * * *
//     *
//     *
// #include<stdio.h>
// int main(){
//     int n=5;
//     int a=(n/2)+1;
//     // printf("%d",a);
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             if (i==a || j==a){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }   
//         }
//         printf("\n");
//     }
// }

// 1:27:36 Q13 - Hollow Rectangle
// * * * * * * 
// *         *
// *         *
// * * * * * *
// #include<stdio.h>
// int main(){
//     int n=4;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n+2;j++){
//             // printf("(%d %d)",i,j);
//             if ((i==1||i==n)||(j==1||j==n+2)){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// 1:28:54 Q14 - Star Cross
// *       * 
//   *   *
//     *
//   *   *
// *       *
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             if (i==j || i+j==n+1){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }  
//         }
//         printf("\n");
//     }
// }
// 1:34:19 Q15 - Floyd’s Triangle
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// #include<stdio.h>
// int main(){
//     int n=4;
//     int a=1;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("%d ",a);
//                 a++;

//             }
              
//         }
//         printf("\n");
//     }
// }

// 1:38:12 Q16 - 0 & 1 Triangle
// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 if ((i+j)%2==0){
//                     printf("%d ",1);
//                 }
//                 else {
//                     printf("%d ",0);
//                 }

//             }
//         }
//         printf("\n");
//     }
// }

// 1:55:49 Q17 - *Star Triangle MAST
//         * 
//       * * 
//     * * *
//   * * * *
// * * * * *
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             if (i+j>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }


// 2:10:31 Q18 - Rhombus
//         * * * * *   
//       * * * * *
//     * * * * *
//   * * * * *
// * * * * *
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             if (i+j>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         for (int j=1;j<=n;j++){
//             if (i+j>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("  ");
//             }
//             else {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
// }
// 2:11:20 Q19 - Alphabet Triangle MAST
//         A 
//       A B
//     A B C
//   A B C D
// A B C D E
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int chr=65;
//         for (int j=1;j<=n;j++){
//             if (i+j>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("%c ",chr);
//                 chr++;
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// sign off 2:11:23
// 2:12:40 Q20 - Star Pyramid
//     *
//    ***
//   *****
//  *******
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             if (i+j>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         for (int j=2;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("*");
//             }
//             // else{
//             //     printf("(   )");
//             // }
//         }


//         printf("\n");
        
//     }
// }

// 2:28:06 Q21 - Number Pyramid
//     1
//    123
//   12345
//  1234567
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a=1;
//         for (int j=1;j<=n;j++){
//             if (i+j>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("%d",a);
//                 a++;
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         for (int j=2;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("%d",a);
//                 a++;
//             }
//             // else{
//             //     printf("(   )");
//             // }
//         }


//         printf("\n");
        
//     }
// }

// 2:29:00 Q22 - Alphabet Pyramid
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a=65;
//         for (int j=1;j<=n;j++){
//             if (i+j>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("%c",a);
//                 a++;
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         for (int j=2;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("%c",a);
//                 a++;
//             }
//             // else{
//             //     printf("(   )");
//             // }
//         }


//         printf("\n");
        
//     }
// }

// 2:29:40 Q23 - *Number Pyramid MAST
//     1
//    121
//   12321
//  1234321
// #include<stdio.h>
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         int a=1;
//         for (int j=1;j<=n;j++){
//             if (i+j>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("%d",a);
//                 a++;
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         a--;
//         for (int j=2;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 a--;
//                 printf("%d",a);
//             }
//             // else{
//             //     printf("(   )");
//             // }
//         }


//         printf("\n");
        
//     }
// }

// 2:42:34 Q24 - Star Diamond
//       * 
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *
// #include<stdio.h>
// int main(){
//     int n=4;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             if (i+j>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("* ");
//             }
//             else{
//                 // printf("(   )");
//                 printf("  ");
//             }
//         }
//         for (int j=2;j<=n;j++){
//             if (i>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
//     // printf("----------------------------------\n");
//     for (int i=2;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             if (i<=j){
//                 // printf("(%d %d)",i,j);
//                 printf("* ");
//             }
//             else{
//                 // printf("(   )");
//                 printf("  ");
//             }
//         }
//         for (int j=2;j<=n;j++){
//             if (i+j<=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("* ");
//             }
//             // else{
//             //     printf("(   )");
//             // }
//         }
//         printf("\n");
//     }
// }

// 3:03:39 Q25 - Star Table
// * * * * * * * 
// * * *   * * *
// * *       * *
// *           *
// #include<stdio.h>
// int main(){
//     int n=4;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
            
//             if (i+j-1>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("  ");
//             }
//             else{
//                 // printf("(   )");
//                 printf("* ");
//             }
//         }

//         for (int j=2;j<=n;j++){
//             if (i-1>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("  ");
//             }
//             else{
//                 // printf("(   )");
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
// }


// 3:19:25 Q26 - *Number Table
// 1 2 3 4 5 6 7 
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7
// #include<stdio.h>
// int main(){
//     int n=4;
//     for (int i=1;i<=n;i++){
//         int a=1;
//         for (int j=1;j<=n;j++){
            
//             if (i+j-1>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("  ");
//                 a++;
            
//             }
//             else{
//                 // printf("(   )");
//                 printf("%d ",a);
//                 a++;
                
//             }
//         }

//         for (int j=2;j<=n;j++){
//             if (i-1>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("  ");
//                 a++;
                
//             }
//             else{
//                 // printf("(   )");
//                 printf("%d ",a);
//                 a++;
               
//             }
//         }
//         printf("\n");
//     }
// }

// 3:36:41 Q27 - Alphabet Table
// A B C D E F G 
// A B C   E F G
// A B       F G
// A           G
// #include<stdio.h>
// int main(){
//     int n=4;
//     for (int i=1;i<=n;i++){
//         int a=65;
//         for (int j=1;j<=n;j++){
            
//             if (i+j-1>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("  ");
//                 a++;
            
//             }
//             else{
//                 // printf("(   )");
//                 printf("%c ",a);
//                 a++;
                
//             }
//         }

//         for (int j=2;j<=n;j++){
//             if (i-1>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("  ");
//                 a++;
                
//             }
//             else{
//                 // printf("(   )");
//                 printf("%c ",a);
//                 a++;
               
//             }
//         }
//         printf("\n");
//     }
// }
// 3:37:04 Q28 - *Number Table MAST
// 1 2 3 4 3 2 1 
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1
// #include<stdio.h>
// int main(){
//     int n=4;
//     for (int i=1;i<=n;i++){
//         int a=1;
//         for (int j=1;j<=n;j++){
            
//             if (i+j-1>=n+1){
//                 // printf("(%d %d)",i,j);
//                 printf("  ");
//                 a++;
            
//             }
//             else{
//                 // printf("(   )");
//                 printf("%d ",a);
//                 a++;
                
//             }
//         }
//         a=a-2;
//         for (int j=2;j<=n;j++){
//             if (i-1>=j){
//                 // printf("(%d %d)",i,j);
//                 printf("  ");
//                 a--;
                
//             }
//             else{
//                 // printf("(   )");
//                 printf("%d ",a);
//                 a--;
               
//             }
//         }
//         printf("\n");
//     }
// }

// 3:38:34 Q29 - **NUMBER ZOOM

// (1 1)(1 2)(1 3)(1 4)(1 3)(1 2)(1 1)
// (2 1)(2 2)(2 3)(2 4)(2 3)(2 2)(2 1)
// (3 1)(3 2)(3 3)(3 4)(3 3)(3 2)(3 1)
// (4 1)(4 2)(4 3)(4 4)(4 3)(4 2)(4 1)
// (3 1)(3 2)(3 3)(3 4)(3 3)(3 2)(3 1)
// (2 1)(2 2)(2 3)(2 4)(2 3)(2 2)(2 1)
// (1 1)(1 2)(1 3)(1 4)(1 3)(1 2)(1 1)
// #include<stdio.h>
// int main(){
//     int n=4;
//     int a=1;
//     // int k=n-a+1;
//     for (int i=1;i<=n;i++){
        
//         for (int j=1;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             if (i>=a && j>=a){
//                 if (i>a && j>a){
//                     printf("(%d %d)",i,j);
//                 }
//                 else{
//                     int k=n-a+1;
//                     printf("( %d )",k);

//                 }
//                 // printf("(%d %d)",i,j);
//             }
//             else{
//                 printf("(%d %d)",i,j);
//             }

//         }
//         // printf("| |");
//         for (int j=n-1;j>=1;j--){
//             // printf("(%d %d)",i,j);
//             if (i>=a && j>=a){
//                 if (i>a && j>a){
//                     printf("(%d %d)",i,j);
//                 }
//                 else{
//                     int k=n-a+1;
//                     printf("( %d )",k);

//                 }
//                 // printf("(%d %d)",i,j);
//             }
//             else{
//                 printf("(%d %d)",i,j);
//             }
//         }
//         printf("\n");
//     }
//     // printf("---------------------------------------\n");
//     for (int i=n-1;i>=1;i--){
//         for (int j=1;j<=n;j++){
//             // printf("(%d %d)",i,j);
//             if (i>=a && j>=a){
//                 if (i>a && j>a){
//                     printf("(%d %d)",i,j);
//                 }
//                 else{
//                     int k=n-a+1;
//                     printf("( %d )",k);

//                 }
//                 // printf("(%d %d)",i,j);
//             }
//             else{
//                 printf("(%d %d)",i,j);
//             }

//         }
//         // printf("| |");
//         for (int j=n-1;j>=1;j--){
//             // printf("(%d %d)",i,j);
//             if (i>=a && j>=a){
//                 if (i>a && j>a){
//                     printf("(%d %d)",i,j);
//                 }
//                 else{
//                     int k=n-a+1;
//                     printf("( %d )",k);

//                 }
//                 // printf("(%d %d)",i,j);
//             }
//             else{
//                 printf("(%d %d)",i,j);
//             }
//         }
//         printf("\n");
//     }
// }
// 3:38:34 Q29 - **NUMBER ZOOM
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
#include<stdio.h>
int main(){
    int n=9;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i<=j){
                printf("%d ",n-i+1);
            }
            else if (i>j){
                printf("%d ",n-j+1);
            }
        }
        for (int j=n-1;j>=1;j--){
            if (i<=j){
                printf("%d ",n-i+1);

            }
            else if (i>j){
                printf("%d ",n-j+1);

            }
        }
        printf("\n");
    }

    for (int i=n-1;i>=1;i--){
        for (int j=1;j<=n;j++){
            if (i<=j){
                printf("%d ",n-i+1);

            }
            else if (i>j){
                printf("%d ",n-j+1);

            }
        }
        for (int j=n-1;j>=1;j--){
            if (i<=j){
                printf("%d ",n-i+1);

            }
            else if (i>j){
                printf("%d ",n-j+1);

            }
        }
        printf("\n");
    }
}