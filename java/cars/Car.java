package cars;

// Create a class for Cars
public class Car {
    // I want my Car class to be more secure and encapsulate ALL
    //  my attributes

    // Encapsulate
    // 1. Make my attributes private

    // Attributes
    private String make;
    private String model;
    private int year;
    private int mileage;
    //  Since static and boolean i'm making read only
    // final keyword is the same as constant
    private final static boolean wheels = true;
    private final static boolean windows = true;


    // Methods
    // Setter methods
    public void set_make(String m){
        if(!m.isEmpty()){
            make = m;
        }
    }
    public void set_model(String md){
        if(!md.isEmpty()){
            model = md;
        }
    }
    public void set_year(int y){
        if(y >= 1886){
            year = y;
        }
        else{
            System.out.println("LIAR!");
        }
    }
    public void set_mileage(int m){
        if(m >= 0){
            mileage = m;
        }
    }

    // getter methods
    public String get_make(){
        return make;
    }
    public String get_model(){
        return model;
    }
    public int get_year(){
        return year;
    }
    public int get_mileage(){
        return mileage;
    }
}
