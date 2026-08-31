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
// import java.util.Scanner;
// import java.math.*;
// class Calc {
//     // double pi = 3.14;
//     double pi = Math.PI;

//     void Parameter_Circle(float r){
//         //2 pi r
//         double parameter =2*pi*r;
//         System.out.println("Parameter of Circle :"+parameter);  
//     }    
//     void Area_circle(float r){
//         double area = pi*r*r;
//         System.out.println("Aera of Circle :"+area);  
//     }
    
//     void volume_Cylender(float r,float h ){
//         double volume = pi*r*r*h;
//         System.out.println("Volume of Clender :"+volume);  
//     }
// }

// public class demo_mthd {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);

//         Calc c = new Calc();

//         System.out.print("Enter radius of circle :");
//         float r = in.nextInt();
        
//         c.Parameter_Circle(r);
//         c.Area_circle(r);
        
//         System.out.print("Enter radius of cylender :");
//         float ra = in.nextInt();
//         System.out.print("Enter height of cylender :");
//         float h = in.nextInt();

//         c.volume_Cylender(ra, h);
//     }
// }


// WAP
// import java.util.Scanner;
// class ElectricBill{
//     int ComsumerNO;
//     // String ComsumerName;
//     int privius_reding;
//     int Current_reding;
//     char Bill_type; // D\C
//     void Calculate_Bill(){
//         int your_unit = Current_reding-privius_reding;
//         if(Bill_type =='D' || Bill_type == 'd'){
//             int Bill = your_unit*6;
//             System.out.println("Your bill is :"+Bill);
//         }
//         else if(Bill_type =='C' || Bill_type =='c'){
//             int Bill = your_unit*10;
//             System.out.println("Your bill is :"+Bill);
//         }
//         else{
//             System.out.println("Wrong Bill_type");
//         }
//     }
    
// }


// public class anu {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         ElectricBill Ebill = new ElectricBill();

//         System.out.print("Enter consumer no.:");
//         Ebill.ComsumerNO = in.nextInt();
        
//         // System.out.print("Enter consumer Name.:");
//         // Ebill.ComsumerName = in.nextLine();

//         System.out.print("Enter Privius reding :");
//         Ebill.privius_reding = in.nextInt();
//         System.out.print("Enter Current reding :");
//         Ebill.Current_reding = in.nextInt();
        
//         System.out.print("Enter Bill_type Domestic/Cumertial(C/D) :");
//         Ebill.Bill_type = in.next().charAt(0);

//         Ebill.Calculate_Bill();

//     }
// }

import java.util.Scanner;
class temp{
    int val;

    void valPrint(){
        System.out.println("Value :"+val);
    }
}


public class day7 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        temp v1 = new temp();
        temp v2 = new temp();
        temp v3 = new temp();
        temp v4 = new temp();
        temp v5 = new temp();

        System.out.print("Enter 1st value :");
        v1.val = in.nextInt();
        System.out.print("Enter 2sd value :");
        v2.val = in.nextInt();
        System.out.print("Enter 3rd value :");
        v3.val = in.nextInt();
        System.out.print("Enter 4th value :");
        v4.val = in.nextInt();
        System.out.print("Enter 5th value :");
        v5.val = in.nextInt();

        v1.valPrint();
        v2.valPrint();
        v3.valPrint();
        v4.valPrint();
        v5.valPrint();
        
    }
}