import java.util.Scanner;
public class anu{
    void add(){
        Scanner in = new Scanner(System.in);
        int a,b,c;

        System.out.print("Enter 1st no.:");
        a = in.nextInt();
        System.out.print("Enter 2nd no.:");
        b = in.nextInt();
        c=a+b;
        System.out.println("Sum of two no.:"+c);
    }
    void sub(){
        Scanner in = new Scanner(System.in);
        int a,b,c;

        System.out.print("Enter 1st no.:");
        a = in.nextInt();
        System.out.print("Enter 2nd no.:");
        b = in.nextInt();
        c=a-b;
        System.out.println("diffrence of two no.:"+c);
    }
    void mul(){
        Scanner in = new Scanner(System.in);
        int a,b,c;

        System.out.print("Enter 1st no.:");
        a = in.nextInt();
        System.out.print("Enter 2nd no.:");
        b = in.nextInt();
        c=a*b;
        System.out.println("Multiplecation of two no.:"+c);
    }
    void div(){
        Scanner in = new Scanner(System.in);
        int a,b,c;

        System.out.print("Enter 1st no.:");
        a = in.nextInt();
        System.out.print("Enter 2nd no.:");
        b = in.nextInt();
        c=a/b;
        System.out.println("Sum of two no.:"+c);
    }
    public static void main(String[] args){
        // System.out.println("hi");
        anu a = new anu();
        a.add();
        a.sub();
        a.mul();
        a.div();

    }
}