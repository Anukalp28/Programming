// Transcribed Questions
// Q1 Write a Java Program to Find nth Prime Number.
// public class day5{
//     public static void main(String[] args) {
//         // int n = 5;
//         for(int i=2;i<=100;i++){
//             int flg = 1;
//             for(int j=2;j<i;j++){
//                 if(i%j==0){
//                     flg = 0;
//                 }
//             }
//             if(flg==1){
//                 System.out.println(i);
//             }
//         }
//     }
// }
// Q2 Write a Java Program to Find Strong Number.
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



// Q3 Write a Java Program to Fibonacci Series in Java.
// Q4 Write a Java Program to Print Pattern in Java.
// Q5 Write a Java Program to Armstrong Number in Java.
import java.util.Scanner;
public class day5{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int n = sc.nextInt();
        // int n = 153;
        // int n = 1634;
        int temp = n;
        int digit = 0;
        while(temp!=0){ 
            digit++;
            temp /= 10;
        }
        System.out.println(digit);
        temp = n;
        double sum = 0;
        while(temp!=0){ 
            int rem = temp%10;
            sum = sum + Math.pow(rem, digit);
            temp /= 10;
        }
        System.out.println(sum);
        if(n==sum){
            System.out.println("Armstrong Number");

        }
        else{
            System.out.println("Not a Armstrong Number");
        }
        sc.close();
        
    }
}
// Q6 Write a Java Program to Reverse a Number in Java.
// Q7 Write a Java Program to Find Sum of Natural Numbers.
