// Implementation of String Operation using Array List.
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


// 1. Write a Java Program to Reverse Each Word of a String.
import java.util.Scanner;
public class day6{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String originalString = in.nextLine();
        
        // Create a StringBuilder from the original string and reverse it
        StringBuilder sb = new StringBuilder(originalString);
        sb.reverse();
        
        System.out.println("Reversed string: " + sb.toString());
        in.close();
    }
}

// 2. Write a Java program to read n number of values in an array and display it in reverse order.
// import java.util.Scanner;
// public class day6{
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.print("Enter length of array :");
//         int len = in.nextInt();
//         int a[] = new int[10];
        
        
//         System.out.println("Enter elements in array :");
//         for(int i=0;i<len;i++){
//             a[i] = in.nextInt();
//         }
//         System.out.println("array in reverse order:");
//         for(int i=len-1;i>=0;i--){
//             System.out.print(a[i]+" ");
//         }
//     }
// }
// 3. Write a Java program to calculate the average value of array elements.
// import java.util.Scanner;
// public class day6{
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.print("Enter length of array :");
//         int len = in.nextInt();
        
//         int a[] = new int[len];
//         System.out.println("Enter elements in array :");
//         for(int i=0;i<len;i++){
//             a[i] = in.nextInt();
//         }
//         int sum = 0;
//         for(int i=0;i<len;i++){
//             sum = sum + a[i];
//         }
//         float avg = (float)sum/(float)len;
//         System.out.println("Avg is :"+avg);
//     }
// }
// 4. Write a Java program to find the maximum and minimum element in an array.
// import java.util.Scanner;
// public class day6{
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         int a[] = new int[10];
//         System.out.println("Enter elements in array :");
//         for(int i=0;i<10;i++){
//             a[i] = in.nextInt();
//         }
        
//         int max = a[0];
//         int min = a[0];

//         for(int i=0;i<10;i++){
//             if(a[i]<min) min = a[i];
//             if(a[i]>max) max = a[i];
//         }

//         System.out.println("Max element is :"+max);
//         System.out.println("Min element is :"+min);
//     }
// }

// 5. Write a Java program in to copy the elements of one array into another array
// import java.util.Scanner;
// public class day6{
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.print("Enter no of elements in array");
//         int len = in.nextInt();
//         int a[] = new int[len];
//         int copy_a[] = new int[len];
        
//         System.out.print("Enter elements in array");
//         for(int i=0;i<len;i++){
//             a[i] = in.nextInt();
//         }
//         for(int i=0;i<len;i++){
//             copy_a[i] = a[i];
//         }
//         System.out.println("Element in copy array are:");
//         for(int i=0;i<len;i++){
//             System.out.println(copy_a[i] + " ");
//         }
//     }
// }



// 6. Write a Java program that identifies the Even elements in two arrays and creates a third array with those elements.
// import java.util.Scanner;
// public class day6{
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         System.out.print("Enter length of array :");
//         int len = in.nextInt();

//         int a1[] = new int[len];
//         int a2[] = new int[len];
//         int even_a[] = new int[100];

//         System.out.println("Enter element in 1st array :");
//         for(int i=0;i<len;i++){
//             a1[i] = in.nextInt();
//         }
//         System.out.println("Enter element in 2st array :");
//         for(int i=0;i<len;i++){
//             a2[i] = in.nextInt();
//         }
        
//         int even_indx = 0;
//         for(int i=0;i<len;i++){
//             if(a1[i]%2==0){
//                 even_a[even_indx] = a1[i];
//                 even_indx++;
//             }
//             if(a2[i]%2==0){
//                 even_a[even_indx] = a2[i];
//                 even_indx++;
//             }
//         }
//         System.out.print("Even element :");
//         for(int i=0;i<even_indx;i++){
//             System.out.print(even_a[i]+" ");
//         }
//     }
// }


// 7. Write a Java program to add the two matrices.

// import java.util.Scanner;
// public class day6{
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);

//         // int r = 2;
//         // int c = 2;

//         System.out.println("Enter Row and Colum value:");
//         int r = in.nextInt();
//         int c = in.nextInt();


//         int M1[][] = new int[r][c];
//         int M2[][] = new int[r][c];
//         int addM[][] = new int[r][c];
        
//         System.out.println("Enter Elements in 1st Matrix :");
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 M1[i][j] = in.nextInt();
//             }
//         }
//         System.out.println("Enter Elements in 2nd Matrix :");
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 M2[i][j] = in.nextInt();
//             }
//         }
        
        
//         System.out.println("Added Matrix are:");
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 // M2[i][j] = in.nextInt();
//                 addM[i][j] = M1[i][j] + M2[i][j];
//                 System.out.print(addM[i][j]+" ");
//             }
//             System.out.println();
//         }
//     }
// }