import pets.Dog;

public class Main2 {
    public static void main(String[] args){
        // Create a Dog object

        // setting has_paws to true beforehand
        // Since has_paws is static
        Dog.set_paws(true);

        Dog dog1 = new Dog();
        // I'm going to set values to my individual attributes
        // attributes: global variables inside the class
        dog1.set_name("Maya");
        dog1.set_age(4);

        // going to create a second dog object
        // but ill set values recklessly
        Dog dog2 = new Dog();
        dog2.set_name("");
        dog2.set_age(-77);

        // Justice for all dogs let's make our class more secure
        // by Encapsulating our atttributes.
    

    }
}
