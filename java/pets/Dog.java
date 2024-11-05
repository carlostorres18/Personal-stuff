package pets;

public class Dog {
    // Encapsulating:
    // 1. make out attributes private
    // 2. Setter methods to assign values to our attributes.
    private String name;
    private int age;
    // has_paws will be shared with all objects made from Dog.
    private static boolean has_paws;


    // Methods
    // Setter methods - methods to assign values to our attributes.
    public void set_name(String param_name){
        if(!param_name.isEmpty()){
            name = param_name;
        }
        else{
            System.out.println("Name can't be empty");
        }
    }

    public void set_age(int param_age){
        if(param_age >= 0){
            age = param_age;
        }
        else{
            System.out.println("Invalid age!");
        }
    }

    
    // Since has_paws is static, set_paws() must be static too
    public static void set_paws(boolean paws_param){
        if(paws_param){
            has_paws = paws_param;
        }
        else{
            System.out.println("All dogs have paws, you fool!");
        }
    }


    // Getter methods - return the value inside the attributes.

    // getter method for name
    public String get_name(){
        return name;
    }
    // getter method for age
    public int get_age(){
        return age;
    }
    // getter method for paws, it must be static bc has_paws() is static
    public static boolean get_paws(){
        return has_paws;
    }

}
