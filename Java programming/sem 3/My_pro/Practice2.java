
import java.util.Scanner;

// Reading Two Numbers and Adding Them


// import java.util.Scanner;
// public class Practice2{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);

//         System.out.print("Enter 1s no:");
//         int n1 = sc.nextInt();
//         System.out.print("Enter 2s no:");
//         int n2 = sc.nextInt();


//         System.out.println("Sum :" + (n1+n2));
//     }

// }

// Taking Multiple Types of Input
// import java.util.Scanner;
public class Practice2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int xint = sc.nextInt();
        boolean xboo = sc.nextBoolean();
        float xfloat = sc.nextFloat();
        // int x = Integer.parseInt(scn.nextLine())

        System.out.println("Enter string");
        String xstr = sc.nextLine();

        System.out.println("given inputs are");
        System.err.println(xint);
        System.err.println(xfloat);
        System.err.println(xstr);
        System.err.println(xboo);

    }

}