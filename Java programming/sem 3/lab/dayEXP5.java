// Experiment 5:
// Methods in java using class and object
// 1. WAJ method to count vowel and consonant in a program
// import java.util.*;
// class VC{
//     void count(String word){
//         int vowel = 0;
//         int consonant = 0;

//         for(int i=0;i<word.length();i++){
//             if(
//                 word.charAt(i)=='a'||word.charAt(i)=='A'|| 
//                 word.charAt(i)=='e'||word.charAt(i)=='E'|| 
//                 word.charAt(i)=='i'||word.charAt(i)=='I'|| 
//                 word.charAt(i)=='o'||word.charAt(i)=='O'|| 
//                 word.charAt(i)=='u'||word.charAt(i)=='U' 
                
//             ){
//                 vowel +=1;
//             }else{
//                 consonant +=1;
//             }
//         }
//         System.out.println("vowel="+vowel);
//         System.out.println("consonant="+consonant);
//     }
// }

// public class dayEXP5 {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         VC vc = new VC();

//         String word;
//         System.out.print("Enter str:");
//         word = in.nextLine();
//         vc.count(word);

//     }
// }

// 2. WAJ method to compute the sum of the digit in an integer
// import java.util.Scanner;
// public class dayEXP5{
//     public static int DigitSum(int num){
//         int sum = 0;
//         while(num>0){
//             sum += num%10;
//             num /= 10;
//         }
//         return sum;
//     }

//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.print("Enter number:");
//         int num = in.nextInt();
//         System.out.println("DigitSum=" + DigitSum(num));
//     }
// }
// output
// Enter number:123
// DigitSum=6

// 3. WAJ method to compute the future investment values at the given 10% inetrest rate for a specific year
// Sample:
// 1year 1004.71 
// 2year 1220
// import java.util.Scanner;
// public class dayEXP5 {
//     public static double futureInvestmentValue(double Amount, double InterestRate, int years){
//         double Value = Amount * Math.pow((1 + InterestRate), years*12);
//         return Value;
//     }
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.print("Enter Amount:");
//         double Amount = in.nextDouble();
//         System.out.print("Enter InterestRate:");
//         double InterestRate = in.nextDouble();
//         System.out.print("Enter years:");
//         int years = in.nextInt();

//         double Value = futureInvestmentValue(Amount, InterestRate, years);
//         System.out.println("Future Investment Value:"+Value);
//     }
// }
//output
// Enter Amount:1000
// Enter InterestRate:0.1
// Enter years:2
// Future Investment Value:1220.1900400000002
// 4. WAJ method ot check wheather a string is valid password.
// Password must be atleast 10 char.
// Pasword consist of letters and digits.
// Passowrd must contain atleast two digits.

// import java.util.Scanner;
// public class dayEXP5 {
//     public static boolean isValidPassword(String password){
//         if(password.length()<10){
//             return false;
//         }
//         int digitCount = 0;
//         for(int i=0;i<password.length();i++){
//             char ch = password.charAt(i);
//             if(Character.isDigit(ch)){
//                 digitCount++;
//             }else if(!Character.isLetter(ch)){
//                 return false;
//             }
//         }
//         return digitCount>=2;
//     }
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.print("Enter password:");
//         String password = in.nextLine();
//         if(isValidPassword(password)){
//             System.out.println("Valid Password");
//         }else{
//             System.out.println("Invalid Password");
//         }
//     }
// }
// output
// Enter password:Anu123456
// Valid Password


// 5. WAJ method to display current date and time

// import java.util.Date;
// public class dayEXP5 {
//     public static void main(String[] args) {
//         Date date = new Date();
//         System.out.println("Current date and time:\n" + date.toString());
//     }
// }
// output
// Current date and time:
// Tue Sep 15 21:57:27 IST 2026

// 6. WAJ method to fnd the area of circle using class and object.
import java.util.Scanner;
import java.lang.Math;
public class dayEXP5 {
    public static  double area(double radius){
        return Math.PI * radius * radius;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter radius:");
        double radius = in.nextDouble();
    
        System.out.println("Area of circle:"+area(radius));
    }
}
//output
// Enter radius:5
// Area of circle:78.53981633974483