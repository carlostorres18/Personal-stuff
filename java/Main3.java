import cars.*;
import math.*;

public class Main3 extends Math1{
    public static void main(String[] args) throws Exception {
        // Let's make our Car object.
        Car car1 = new Car();
        car1.set_make("Toyota");
        car1.set_model("Camry");
        car1.set_year(1776);
        car1.set_mileage(-100);

        System.out.println("About Car: " + 
            car1.get_make() + " " + 
            car1.get_model() + " " + 
            car1.get_year() + " " + 
            car1.get_mileage() + " "

        );

        Truck truck1 = new Truck();
        truck1.set_make("Ford");
        truck1.set_model("F-150");
        truck1.set_year(2020);
    
        System.out.println("About truck: " + 
            truck1.get_make() + " " + 
            truck1.get_model() + " " + 
            truck1.get_year()
        );

        // I want to use the CoolMath class.
        System.out.println("sum of 5 and 7 : " + CoolMath.sum(5,7)
        );

        System.out.println("Testing if NotSoCoolMath can access num: " + NotSoCoolMath.get_num());
        System.out.println("Testing if Main can access num: " + 
            Math1.num + 
            " Only if it's inherited"
        );

    }

}