package cars;

// Truck will inherit all of the attributes and methods of Car
// I'm going to use the 'extends' keyword
public class Truck extends Car{
    // Attributes
    public float bed_space;

    // methods
    public void set_bedSpace(float bs){
        if(bs > 0){
            bed_space = bs;
        }
    }
    public float get_bedSpace(){
        return bed_space;
    }
}
