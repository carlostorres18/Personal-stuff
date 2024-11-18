// Im going to import my pets folder
import pets.*;
import pets2.Cat;
import pets2.Dog2;


class Polymorphism{

    public void myCoolFunction(){
        System.out.println("Coolio");
    }

    // Static can't be overriten
    public static void test(){
        System.out.println("I'm in Poly class.");
    }
}



public class Main4 extends Polymorphism{
    // Today's topic is on abstraction
    /*
        Polymorphism:

        Overload: methods, attributes, classes with the same name
            but, compiler can tell them apart bc they are different types

        Override: inheriting, and we override a method with the same name.


    */
    // Override Example
    @Override
    public void myCoolFunction(){
        System.out.println("Super Cool!");
    }

    // Static can't be overriden, observe:
    
    public static void test(){
        System.out.println("This is in Main class.");
    }

    // Overload example;
    public void myFunction(String h){
        System.out.println("Hello " + h);
    }
    public void myFunction(int x){
        System.out.println("Number is " + x);
    }
    public String myFunction(String x, String y){
        return x + y;
    }

    public static void main(String[] args){
        Main4 main = new Main4();
        Main4.test();
        Polymorphism.test();


        //////////////////////
        // I'm going to create my Cat and Dog objects
        // But
        // I don't want anyone to make a Pet object. It's too general.
        Cat fluffy = new Cat();
        Dog2 buster = new Dog2();
        // BAD
        //Pet genericPet = new Pet(); // I don't want this!!!

        fluffy.speak();
        buster.speak();
        fluffy.about();
        buster.about();
    }
}