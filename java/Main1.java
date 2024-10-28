// import House from examples package
// import package_name.class_name;
import examples.House;
import java.util.Scanner;

public class Main1 {
    public static void main(String[] args){
        // Create House object.
        // Is memory allocated when i create
        // an object? YES!!! and they are all independent
        House house1 = new House();
        // House.hello();
        house1.hello();
        House.bye();

        // We have used static methods before.
        String myString = "123";
        // I call a static method from Integer Class
        int myInt = Integer.parseInt(myString);
        System.out.println("Hello");
        double random = Math.random();

        // Here we do have to make an object.
        Scanner input = new Scanner(System.in);
        input.next();
    }
    
}
