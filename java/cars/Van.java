package cars;

// We can inherit from car all the same attributes
public class Van extends Car{
    // Encapsulate Van class

    // Attributes
    private float seating_space;

    public void set_seatingSpace(float sp){
        if(sp > 0){
            seating_space = sp;
        }
    }
    public float get_seatingSpace(){
        return seating_space;
    }
}
