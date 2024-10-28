//Package the House class
// package parent_folder;
package examples;

// Is memory allocated when I first declare
// my class? NO!!

// A class is just a set of instructions

public class House {
    // Attributes
    public int windows;
    public int doors;
    public boolean chimeny;
    public float bathrooms;
    // All my houses will be in the same area.
    public static int zip_code;

    // I'm going to create 2 methods.
    // In order to access hello(), I need an object.
    public void hello(){
        System.out.println("Hello");
    }

    // I don't need an object to use bye()
    public static void bye(){
        // hello();
        // A function called inside a static function, must also be static
        System.out.println("Good Bye");
    }

}
