// Q1 Write a Java program that accepts your name, date of birth, and mobile number as command-line arguments and prints 

// import java.util.Scanner;
// public class day2{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         System.out.print("Enter Name:");       
//         String name = sc.nextLine();
//         System.out.print("Enter Date of birth:");
//         String dob = sc.nextLine();
//         System.out.print("Enter Mobile number:");
//         long P_no = sc.nextLong();

//         System.out.println("Name:"+name);       
//         System.out.println("Date of birth:"+dob);
//         System.out.println("Mobile number:"+P_no);
//     }
// }



// Q2 Write a Java program to generate a random number. 
// public class day2{
//     public static void main(String[] args) {
//         int n = (int)(Math.random()*100);
//         System.out.println(n);
//     }
// }


// Q3 Write a Java program to find and print the ASCII value of a given character.
// import java.util.Scanner;
// public class day2{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter char:");
//         char ch = sc.next().charAt(0);
//         int ASCII = (int)ch;
//         System.out.println("ASCII value is:"+ASCII);
//     }
// }

// Q4 Write a Java program to find the square root of a number without using the built-in Math.sqrt() method. 
// import java.util.Scanner;
// public class day2{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         System.out.print("Enter no.:");
//         int x = sc.nextInt();
//         System.out.println("square root of no.:"+Math.sqrt(x));
//     }
// }

// // public class day2{
// //     public static void main(String[] args) {
// //         // Scanner sc = new Scanner(System.in);
// //         // System.out.print("Enter no.:");
// //         // int a = sc.nextInt();
// //         // System.out.print("Enter no.:");
// //         // int b = sc.nextInt();
        
// //         int a = 16;
// //         int b = 10;

        
       
        
// //         System.out.println(Math.floorDiv(a, b));
// //     }
// // }
// Q5 WAP on students result system Take the input from the student details 
//      Details: Name , enrollment, branch, enter 5 subject name 
//      Find the total and avg marks

// import java.util.Scanner;
// public class day2{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter Name:");
//         String name = sc.nextLine();

//         System.out.print("Enter Enrolment no:");
//         String Enro = sc.nextLine();

//         System.out.print("Enter Branch:");
//         String Breanch = sc.nextLine();

//         System.out.println("Enter 5 subject Marks:");
//         Float n1 = sc.nextFloat();
//         Float n2 = sc.nextFloat();
//         Float n3 = sc.nextFloat();
//         Float n4 = sc.nextFloat();
//         Float n5 = sc.nextFloat();

//         Float total = n1+n2+n3+n4+n5;
//         Float avg = (n1+n2+n3+n4+n5)/5;
//         // Float per = ((n1+n2+n3+n4+n5)/500)*100;
    

//         System.out.println("Total Marks:"+total);
//         System.out.println("Avg Marks:"+avg);
//         // System.out.println("Percentage Marks:"+per+"%");
        
//     }
// }

// Q6 Write a Java program to swap two numbers using bitwise operators.
import java.util.Scanner;
public class day2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 20;
        int b = 30;

        System.out.println("a="+a+" b="+b);
        // int c = a;
        // a=b;
        // b=c;

        a = a ^ b; // Step 1
        b = a ^ b; // Step 2
        a = a ^ b; // Step 3

        System.out.println("a="+a+" b="+b);
    }
}


