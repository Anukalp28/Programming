//Experiment 2 
// Implementation of Conditional Statement

// Q1 Write a Java Program to Find Smallest of Three Numbers.
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int n1 = scanner.nextInt();
        System.out.print("Enter the second number: ");
        int n2 = scanner.nextInt();
        System.out.print("Enter the third number: ");
        int n3 = scanner.nextInt();

        if(n1 <= n2 && n1 <= n3){
            System.out.println("The Smallest number is: " + n1);
        }
        else if(n2 <= n1 && n2 <= n3){
            System.out.println("The Smallest number is: " + n2);
        }
        else{
            System.out.println("The Smallest number is: " + n3);
        }
        scanner.close();
    }
}


// Q2 Write a Java Program to ATM program.

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        int balance = 50000;
        String Last_transaction = "NO transaction made";
        int pin =1234;
	    Scanner sc = new Scanner(System.in);
        System.out.print("Enter your PIN: ");
        int enter_pin = sc.nextInt();
        if(enter_pin != pin){
            System.out.println("Access denied :Incorrect Pin");
            return;
        }
        System.out.println("Welcome!");

        while(true){
            System.out.println("1.Withdraw Cash");
            System.out.println("2.Deposit Cash");
            System.out.println("3.check balance");
            System.out.println("4.View Last Transaction");
            System.out.println("5.Exit");
            System.out.print("Enter your choice: ");
            int choice = sc.nextInt();
            switch(choice){
                case 1:
                    System.out.print("Enter the amount to withdraw");
                    int withdraw = sc.nextInt();
                    if(withdraw<=balance){
                        balance -= withdraw;
                        Last_transaction = "Your Withdraw: Rs." + withdraw;
                        System.out.println("your Transaction is success");
                    }
                    else if(withdraw>balance){
                        System.out.println("Insufficient balance");
                    }
                    else{
                        System.out.println("Invalid amount");
                    }
                    break;
                case 2:
                    System.out.print("Enter the amount to deposit:");
                    int deposit = sc.nextInt();
                    if(deposit>0){
                        balance += deposit;
                        Last_transaction = "Your deposited: Rs."+deposit;
                        System.out.println("Deposit successfully");
                    }
                    else{
                        System.out.println("Invalid amount");

                    }
                    break;
                case 3:
                    System.out.println("Your current balance is :Rs."+balance);
                    break;
                case 4:
                    System.out.println("Last transaction:"+Last_transaction);
                    break;
                case 5:
                    System.out.println("Thank you for using ATM");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice");
            }	
	    }
    }
}

// Q3 Write a Java Program to Find Largest of Three Numbers.

import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter the second number: ");
        int num2 = scanner.nextInt();
        System.out.print("Enter the third number: ");
        int num3 = scanner.nextInt();

        
        if (num1 >= num2 && num1 >= num3) {
            System.out.println("The largest number is: " + num1);
        } else if (num2 >= num1 && num2 >= num3) {
            System.out.println("The largest number is: " + num2);
        } else {
            System.out.println("The largest number is: " + num3);
        }
        scanner.close();
    }
}

// Q4 Write a Java Program to check if a Number is Positive or Negative.


import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a no:");
        int n = sc.nextInt();
        if (n>0) {
            System.out.println("Positive");
        }
        else if(n<0){
            System.out.println("Negative");
        }
        else{
            System.out.println("Number is zero");
        }
    }
}
// Q5 Write a Java Program to Display Odd Numbers From 1 to 100.
public class Main{
    public static void main(String[] args){
        for(int i=0;i<=100;i++){
            // System.out.println(i);
            if(i%2!=0){
                System.out.println(i);
            }
        }
    }
}

// Q6 Write a Java Program to convert Number to Word.
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number (0-9):");
        int n = sc.nextInt();
        String word = switch (n) {
                case 0 -> "Zero";
                case 1 -> "One";
                case 2 -> "Two";
                case 3 -> "Three";
                case 4 -> "Four";
                case 5 -> "Five";
                case 6 -> "Six";
                case 7 -> "Seven";
                case 8 -> "Eight";
                case 9 -> "Nine";
                default -> "Error: Not a single-digit number (0-9).";
            };
            System.out.println(word);
    }
}

// import java.util.Scanner;
// public class Main {
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         if (n == 0){
//             System.out.println("Zero");
//         }
        
//         String[] units = {
//             "",        "One",       "Two",      "Three",
//             "Four",    "Five",      "Six",      "Seven",
//             "Eight",   "Nine",      "Ten",      "Eleven",
//             "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
//             "Sixteen", "Seventeen", "Eighteen", "Nineteen"
//         };
        
               
//         String[] tens = { 
//             "",     "",     "Twenty",  "Thirty", "Forty",
//             "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" 
//         };
        
//         String[] multiplier = 
//                     {"", "Thousand", "Million", "Billion"};
      
//         String res = "";
//         int group = 0;
        
//         while (n > 0) {
//             if (n % 1000 != 0) {
                
//                 int value = n % 1000;
//                 String temp = "";          
//                 if (value >= 100) {
//                     temp = units[value / 100] + " Hundred ";
//                     value %= 100;
//                 }          
//                 if (value >= 20) {
//                     temp += tens[value / 10] + " ";
//                     value %= 10;
//                 }       
//                 if (value > 0) {
//                     temp += units[value] + " ";
//                 }
//                 temp += multiplier[group] + " ";
                
//                 res = temp + res;
//             }
//             n /= 1000;
//             group++;
//         }
//         System.out.println(res);
//     }
// }


// Q7 Write a Java Program to check if a Given Number is Perfect Square.

import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a No.:");

        int n = sc.nextInt();
        // int n = 626;
        int int_sqrt = (int)Math.sqrt(n);
        int check_sqrt = int_sqrt*int_sqrt;

        if(n == check_sqrt ){
            System.out.println("Perfect Square");
        }
        else{
            System.out.println("Not a Perfect Square");
        }
        sc.close();
    }
}