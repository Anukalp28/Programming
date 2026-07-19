// public class First{
//     public static void main(String[] args) {
//         System.out.println("Hello world");
//     }
// }


// import java.util.Scanner;
// public class First{
//     public static void main(String[] args){
//         Scanner scan = new Scanner(System.util.System.in);

//         System.out.println("Enter 1st no:");
//         int n1 = scan.nextInt();
//         System.out.println("Enter 2st no:");
//         int n2 = scan.nextInt();

//         int sum = n1 + n2;
//         System.out.print("The sum is :" + sum);    

//         scan.close();
//     }
// }

// import java.util.Scanner;

// public class First {
//     public static void main(String[] args) {
//         // The Scanner is declared inside the parentheses of the try block.
//         // Java will automatically close it when the block is exited.
//         try (Scanner scan = new Scanner(System.in)) {

//             System.out.print("Enter 1st no:");
//             int n1 = scan.nextInt();
//             System.out.print("Enter 2nd no:");
//             // Typo fix: "2st" -> "2nd"
//             int n2 = scan.nextInt();

//             int sum = n1 + n2;
//             // Using println for a clean new line at the end.
//             System.out.println("The sum is: " + sum);

//         } // No need for scan.close(); it's handled automatically!
//     }
// }

import java.util.Scanner;

public class mainn{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter no:");
        int n1 = scanner.nextInt();
        scanner.nextLine();

        System.out.print("select operation(+,-,*,/,!) :");
        String op = scanner.nextLine();
        

        if (op.equals("!")) {
            int fac = 1;
            for (int i=1;i<=n1;i++){
                fac = fac*i;
                // fac *= i;
            }
            System.out.print("Factorial of a no:"+fac);

        }
        else{
            System.out.print("Enter no:");
            int n2 =scanner.nextInt();
            scanner.nextLine();
            if (op.equals("+")) {
                int sum = n1 + n2;
                System.out.print(n1+ "+" + n2 + '='+ sum );
            }
            else if (op.equals("-")) {
                int sub = n1 - n2;
                System.out.print(n1+ "-" + n2 + '='+ sub );
            }
            else if (op.equals("*")) {
                int mult = n1 * n2;
                System.out.print(n1+ "-" + n2 + '='+ mult );
            }
            else if (op.equals("/")) {
                int div = n1 / n2;
                System.out.print(n1+ "-" + n2 + '='+ div );
            }

        }

        scanner.close();
    }

}