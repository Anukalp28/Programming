// Experiment 6:
//implementation of class and object
//1. WAJP to generate electricity bill
// import java.util.Scanner;
// class ElectricBill{
//     int ConsumerNO;
//     // String consumerName;
//     int privies_reding;
//     int Current_reding;
//     char Bill_type; // D\C
//     void Calculate_Bill(){
//         int your_unit = Current_reding-privies_reding;
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


// public class dayEXP6 {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         ElectricBill Ebill = new ElectricBill();

//         System.out.print("Enter consumer no.:");
//         Ebill.ConsumerNO = in.nextInt();
        
//         // System.out.print("Enter consumer Name.:");
//         // Ebill.ConsumerName = in.nextLine();

//         System.out.print("Enter Privies reding :");
//         Ebill.privies_reding = in.nextInt();
//         System.out.print("Enter Current reding :");
//         Ebill.Current_reding = in.nextInt();
        
//         System.out.print("Enter Bill_type Domestic/commercial(C/D) :");
//         Ebill.Bill_type = in.next().charAt(0);

//         Ebill.Calculate_Bill();

//     }
// }


//2. WAJP to find area of circle 

// import java.util.Scanner;
// // import java.util.Math;


// class Circle{
//     double Pi = Math.PI;
//     void area(int r){

//         double area = Pi*r*r;
//         System.out.println("Area of circle :"+area);
//     }
// }

// public class dayEXP6 {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         Circle c = new Circle();
//         System.out.print("Enter radius of circle :");
//         int r = in.nextInt();
//         c.area(r);
//     }
// }
//3. WAJP to create a class person & with name & age Attributes,create 2 
//new instances(objects) of person class, set there Attributes and display 
// the values of the attributes of both objects. using constructor & print the name & age.
// import java.util.Scanner;

// class Person{
//     String name;
//     int age;
//     Person(String name,int age){
//         this.name = name;
//         this.age = age;
//     }
//     void display(){
//         System.out.println("Name of person :"+name);
//         System.out.println("Age of person :"+age);
//     }
// }

// public class dayEXP6 {
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
        
        
//         System.out.print("Enter name of person :");
//         String name = in.nextLine();
//         System.out.print("Enter age of person :");
//         int age = in.nextInt();
//         Person p1 = new Person(name,age);
//         p1.display();

//         System.out.print("Enter name of person :");
//         String name2 = in.next();
//         System.out.print("Enter age of person :");
//         int age2 = in.nextInt();
//         Person p2 = new Person(name2,age2);
//         p2.display();
//     }
// }

//4. WAJP to create a class calls book with the attributes for title ,author & ISBN number, 
// and method to add & remove collection
import java.util.Scanner;

class Book{
    String title;
    String author;
    String ISBN;
    void addBook(String title,String author,String ISBN){
        this.title = title;
        this.author = author;
        this.ISBN = ISBN;
        System.out.println("Book added successfully");
    }
    void removeBook(){
        this.title = null;
        this.author = null;
        this.ISBN = null;
        System.out.println("Book removed successfully");
    }
    void displayBook(){
        System.out.println("Title :"+title);
        System.out.println("Author :"+author);
        System.out.println("ISBN :"+ISBN);
    }
}

public class dayEXP6 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Book b1 = new Book();
        b1.addBook("Java Programming", "John Doe", "1234567890");
        b1.displayBook();
        b1.removeBook();
    }
}
