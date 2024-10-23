// 2 methods to import my Classes from another package
// Method 1
// Import all classes inside the package using the wildcard
import animals.*; // the * will import all of the classes

// method 2
// I import a single class only
import animals.predators.Lion;;
public class lecture15 {
    public static void main(String[] args){
        // Can i still access the Lion, Zebra, and Giraffe class?
        // Absolutely
        Zebra flin = new Zebra();
        Lion alex = new Lion();
        // Giraffe is not public, it's package-private. So i cant use it in the source dir
        // Giraffe marvin = new Giraffe();
    }
}

// class Lion{
//     public String name;
//     public float weight;
//     public boolean mane;
// }

// class Giraffe{
//     public String name;
//     public float height;
//     public boolean has_spots;
// }

// class Zebra{
//     public String name;
//     public float speed;
//     public boolean has_stripes;
// }
