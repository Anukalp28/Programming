//WAP to Enter 10 element in array and display it.
import java.util.*;
public class day6{
    public static void main(String[] args) {
        int n[] = new int[10];

        // int array[] = new int[];
        // array = {220};

        Scanner in = new Scanner(System.in);
        System.out.println("Enter Element in array:");
        for (int i = 0; i < 10; i++) {
            n[i] = in.nextInt();
        }
        int sum = 0;
        int prod = 1;
        for (int i = 0; i < 10; i++) {
            // System.out.print(n[i]+" ");
            sum = sum + n[i];
            prod = prod*n[i];
        }
        System.out.println("Sum:"+sum);
        System.out.println("Product:"+prod);
        in.close();
    }
}