abstract class Animal{
    public String species;
    public int lifespan;

    abstract public void about();
}

class Lion4 extends Animal{
    public float claw_size;

    public Lion4(String s, int l, float cs){
        super.species = s;
        super.lifespan = l;
        this.claw_size = cs;
    }

    @Override
    public void about(){
        System.out.println("This is a Lion.");
    }
}