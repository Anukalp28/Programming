// // Transcribed Questions
// // Q1 Write a Java Program to Find nth Prime Number.
import java.util.Scanner;
public class day5{
    public static void main(String[] args) {
        // int n = 6;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter nth no.:");
        int n = sc.nextInt();
        int count = 0;
        int x = 2;
        boolean flg;
        while(true){
            flg = true;
            for(int i=2;i<x;i++){
                if(x%i==0){
                    // count++;
                    flg = false;
                    break;
                } 
            }
            if(flg) count++;
            // count++;
            if(count==n){
                // System.out.print("got "+x);
                System.out.printf("%dth Prime Number is %d",n,x);
                break;
            }
            x++;
        }
    }
}
// output
// Enter nth no.:13
// 13th Prime Number is 41
// // Q2 Write a Java Program to Find Strong Number.
// import java.util.Scanner;
// public class day5{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         // int x =145;
//         System.out.print("Enter a number");
//         int x = sc.nextInt();
//         int temp = x;
//         int sum = 0;
//         while(temp!=0){
//             int rem = temp%10;
//             int fac = 1;
//             for(int i=1;i<=rem;i++){
//                 fac *=i;
//             }
//             sum += fac;
//             temp = temp/10;
//         }

//         if(sum==x){
//             System.out.println("Strong Number");
//         }
//         else{
//             System.out.println("Not a Strong Number");
//         }
//     }
// }



// // Q3 Write a Java Program to Fibonacci Series in Java.
// import java.util.Scanner;
// public class day5{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int n,a=0,b=1,c;
//         System.out.print("Enter no of terms:");
//         n = sc.nextInt();
//         if (n>=1) System.out.print(a+" ");
//         if (n>=2) System.out.print(b+" ");
        
//         for (int i=1;i<n;i++){
//             c = a+b;
//             System.out.print(c+" ");
//             a=b;
//             b=c;
//         }
//     }
// }


// // Q4 Write a Java Program to Print Pattern in Java.
//         *         
//       * * *       
//     * * * * *     
//   * * * * * * *   
// * * * * * * * * *
// public class day5{
//     public static void main(String[] args){
//         int n = 5;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){
//                 // System.out.printf("(%d %d)",i,j);
//                 if(i+j>=6){
//                     // System.out.printf("(%d %d)",i,j);
//                     System.out.print("* ");
//                 }
//                 else{
//                     // System.out.printf("(   )",i,j);
//                     System.out.print("  ");
//                 }
//             }
//             for(int j=2;j<=n;j++){
//                 // System.out.printf("(%d %d)",i,j);
//                 if(i>=j){
//                     // System.out.printf("(%d %d)",i,j);
//                     System.out.print("* ");
//                 }
//                 else{
//                     // System.out.printf("(   )",i,j);
//                     System.out.print("  ");
//                 }
//             }
//             System.out.println();

//         }
//     }
// }

// // Q5 Write a Java Program to Armstrong Number in Java.
// import java.util.Scanner;
// public class day5{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter a number:");
//         int n = sc.nextInt();
//         // int n = 153;
//         // int n = 1634;
//         int temp = n;
//         int digit = 0;
//         while(temp!=0){ 
//             digit++;
//             temp /= 10;
//         }
//         // System.out.println(digit);
//         temp = n;
//         double sum = 0;
//         while(temp!=0){ 
//             int rem = temp%10;
//             sum = sum + Math.pow(rem, digit);
//             temp /= 10;
//         }
//         System.out.println(sum);
//         if(n==sum){
//             System.out.println("Armstrong Number");

//         }
//         else{
//             System.out.println("Not a Armstrong Number");
//         }
//         sc.close();
        
//     }
// }
// // Q6 Write a Java Program to Reverse a Number in Java.
// import java.util.Scanner;
// public class day5{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter a two no.s:");
//         int n1 = sc.nextInt();
//         // int n1 = 12345;
//         int rev = 0;
//         while(n1>0){
//             int rem = n1%10;
//             // System.out.println(rem);
//             rev = rev+rem;
//             n1 /= 10;
//             if(n1>0){
//                 rev = rev*10;
//                 // System.out.println(rev);
//             }
//         }
//         System.out.print(rev);
//     }
// }

// // Q7 Write a Java Program to Find Sum of Natural Numbers.
// import java.util.Scanner;
// public class day5{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);

//         System.out.print("Enter a number:");
//         int n = sc.nextInt();
//         // int n = 10;
//         int sum = 0;
//         for(int i=1;i<=n;i++){
//             sum += i;
//         }
//         System.out.println("Sum of Natural Numbers:"+sum);
//     }
// }
