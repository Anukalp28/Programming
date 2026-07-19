
// import javax.sound.sampled.SourceDataLine;

import java.util.Scanner;

public class game{
    public static void main(String[] args) {
        // int n = 50;
        // int n = (int)(Math.random()*100);
        Scanner scan = new Scanner(System.in);
        int n = 50;
        while(true){
            System.out.print("Geus the no:");
            int m = scan.nextInt();
            if(m>n){
                System.out.println("Number is less the " + m);
            }
            else if(m<n){
                System.out.println("Number is more then " + m);
            }
            else {
                System.out.println("You found the number " + m);
                break;
            }
        }
        System.out.print((n));
        scan.close();
    }
}