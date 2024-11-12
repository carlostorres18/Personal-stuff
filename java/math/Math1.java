package math;

public class Math1 {
    // Attributes
    public final static double PI = 3.14;

    // protected attribute
    // Package-Private and *Private outside the package
    //  Can't be accessed outside, UNLESS its inherited.
    protected static double num = 123;
    
    // methods
    public static double max(double x, double y){
        if(x > y){
            return x;
        }
        else{
            return y;
        }
    }
    public static double min(double x, double y){
        if(x < y){
            return x;
        }
        else{
            return y;
        }
    }
    public static double sum(int x, int y){
        return x + y;
    }
}
