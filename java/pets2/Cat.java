package pets2;

// A cat is also a Pet, so its going to inherit the Pet class
public class Cat extends Pet{
    // Cat attributes
    public float claw_size;
    public boolean has_furball;

    // define and override the speak method from pet
    @Override
    public void speak(){
        System.out.println("Meow! Meow!");
    }
}
