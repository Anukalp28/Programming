// import java.util.Scanner;
// public class anu{
//     void add(){
//         Scanner in = new Scanner(System.in);
//         int a,b,c;

//         System.out.print("Enter 1st no.:");
//         a = in.nextInt();
//         System.out.print("Enter 2nd no.:");
//         b = in.nextInt();
//         c=a+b;
//         System.out.println("Sum of two no.:"+c);
//     }
//     void sub(){
//         Scanner in = new Scanner(System.in);
//         int a,b,c;

//         System.out.print("Enter 1st no.:");
//         a = in.nextInt();
//         System.out.print("Enter 2nd no.:");
//         b = in.nextInt();
//         c=a-b;
//         System.out.println("diffrence of two no.:"+c);
//     }
//     void mul(){
//         Scanner in = new Scanner(System.in);
//         int a,b,c;

//         System.out.print("Enter 1st no.:");
//         a = in.nextInt();
//         System.out.print("Enter 2nd no.:");
//         b = in.nextInt();
//         c=a*b;
//         System.out.println("Multiplecation of two no.:"+c);
//     }
//     void div(){
//         Scanner in = new Scanner(System.in);
//         int a,b,c;

//         System.out.print("Enter 1st no.:");
//         a = in.nextInt();
//         System.out.print("Enter 2nd no.:");
//         b = in.nextInt();
//         c=a/b;
//         System.out.println("Sum of two no.:"+c);
//     }
//     public static void main(String[] args){
//         // System.out.println("hi");
//         anu a = new anu();
//         a.add();
//         a.sub();
//         a.mul();
//         a.div();

//     }
// }

//WAP to find the area of rectangele using class object method


// import java.util.Scanner;
// class Calc {
//     void area_rectangel(int a,int b){
//         System.out.println("Area of rectangle :"+a*b);
//     }
// }
// public class demo_mthd {
//     public static void main(String[] args) {
//         int l,b;
//         Scanner in = new Scanner(System.in);
//         Calc c = new Calc();

        
//         l=in.nextInt();
//         System.out.print("Enter Breath:");
//         b=in.nextInt();

//         c.area_rectangel(l,b);
//     }   
// }


//WAP  to finthe the cube and squar of a numbe usning class and object
// import java.util.Scanner;
// class Calc {
//     void Cube(int a){
//         System.out.println("Cube is :"+a*a*a);
//     }
//     void Squar(int a){
//         System.out.println("Squar is:"+a*a);
//     }
// }
// public class demo_mthd {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         Calc c = new Calc();

//         System.out.print("Enter number:");
//         int n = in.nextInt();

//         c.Cube(n);
//         c.Squar(n);
//     }
// }


// //WAp finthe the parameter of a circle and area of a circle and area of cylender 
import java.util.Scanner;
import java.math.*;
class Calc {
    // double pi = 3.14;
    double pi = Math.PI;

    void Parameter_Circle(float r){
        //2 pi r
        double parameter =2*pi*r;
        System.out.println("Parameter of Circle :"+parameter);  
    }    
    void Area_circle(float r){
        double area = pi*r*r;
        System.out.println("Aera of Circle :"+area);  
    }
    
    void volume_Cylender(float r,float h ){
        double volume = pi*r*r*h;
        System.out.println("Volume of Clender :"+volume);  
    }
}

public class demo_mthd {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        Calc c = new Calc();

        System.out.print("Enter radius of circle :");
        float r = in.nextInt();
        
        c.Parameter_Circle(r);
        c.Area_circle(r);
        
        System.out.print("Enter radius of cylender :");
        float ra = in.nextInt();
        System.out.print("Enter height of cylender :");
        float h = in.nextInt();

        c.volume_Cylender(ra, h);
    }
}
