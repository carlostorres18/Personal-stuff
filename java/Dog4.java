/*
    1. Encapsulate the Dog class shown below.

 */

public class Dog4{
    private String name;
    private int age;
    private float weight;

    // create set methods for attributes
    public void set_name(String n){
        name = n;
    }
    public void set_age(int a){
        age = a;
    }
    public void set_weight(float w){
        weight = w;
    }

    // create get methods for attributes
    public String get_name(){
        return name;
    }
    public int get_age(){
        return age;
    }
    public float get_weight(){
        return weight;
    }
}