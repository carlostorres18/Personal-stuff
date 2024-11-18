package pets2;

// A dog is a pet so i'm going to inherit from Pet
public class Dog2 extends Pet{

    // attributes only for dog
    public boolean knows_tricks;
    public String type_of_bark;
    
    // I need to define speak()
    // to define it, i need to override it
    @Override
    public void speak(){
        System.out.println("Bark! Bark!");
    }
}
