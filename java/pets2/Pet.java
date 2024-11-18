package pets2;

// Abstraction refers to only making necessary information available.

// Abstract classes - can be instaciated (can't make objects.)
// this is so a Class can help me create other classes, and when we don't want the user
// to mess around with this class

// this can be any pet (dog, cat, hamster, parrot, etc)
public abstract class Pet {
    // Attributes for a general pet
    public String name;
    public boolean has_fur;
    public boolean has_tail;
    public String owner;
    
    // Not all methods inside an abstract class need to be
    // abstract
    public void about(){
        System.out.println("This is a pet");
    }

    // We can also make Abstract methods.
    // Abstract method that only has a header.
    public abstract void speak();
}
