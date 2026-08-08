// //WAP to Enter 10 element in array and display it.
// import java.util.*;
// public class day6{
//     public static void main(String[] args) {
//         int n[] = new int[10];

//         // int array[] = new int[];
//         // array = {220};

//         Scanner in = new Scanner(System.in);
//         System.out.println("Enter Element in array:");
//         for (int i = 0; i < 10; i++) {
//             n[i] = in.nextInt();
//         }
//         int sum = 0;
//         int prod = 1;
//         for (int i = 0; i < 10; i++) {
//             // System.out.print(n[i]+" ");
//             sum = sum + n[i];
//             prod = prod*n[i];
//         }
//         System.out.println("Sum:"+sum);
//         System.out.println("Product:"+prod);
//         in.close();
//     }
// }

// import java.util.*;
// public class day6{
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         int a[] = new int[5];
//         // a = {5,6,7,8,9};
//         System.out.print("Enter no.s");
//         for(int i=0;i<5;i++){
//             a[i] = in.nextInt();
//         }
//         int small = a[0];
//         int large = a[4];
//         for(int i=0;i<5;i++){
//             if(small>a[i]){
//                 small = a[i];
//             }
//             if(large<a[i]){
//                 large = a[i];
//             }
//         }
//         System.out.println("Small no:"+small);
//         System.out.println("Large no:"+large);
//     }
// }

//WAP to reverse an array
// import java.util.*;
// public class day6{
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         int a[] = new int[5];
//         // a = {5,6,7,8,9};
//         System.out.print("Enter no.s");
//         for(int i=0;i<5;i++){
//             a[i] = in.nextInt();
//         }
//         int left = 0;
//         int right = 4;
//         int temp;


//         while(left<right){
//             temp = a[left];
//             a[left]=a[right];
//             a[right]=temp;

//             left++;
//             right--;
//         }
//         for(int i=0;i<5;i++){
//             System.out.print(" "+a[i]);
//         }
//     }
// }
//Wap to copy array to another r array

import java.util.*;
public class day6{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a[] = new int[5];
        int copy_a[] = new int[5];
        System.out.print("Enter no.s");
        for(int i=0;i<5;i++){
            a[i] = in.nextInt();
        }

        for(int i=0;i<5;i++){
            copy_a[i] = a[i];
        }

        System.out.println("original array");
        for(int i=0;i<5;i++){
            System.out.print(" "+a[i]);
        }
        
        System.out.println();
        
        System.out.println("Copied array");
        for(int i=0;i<5;i++){
            System.out.print(" "+copy_a[i]);
        }
          
    }
}