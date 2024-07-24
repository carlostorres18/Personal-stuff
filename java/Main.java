import java.awt.*;

class Main {
    public static void main(String[] args){
        String message = "Hello World!!!";
        System.out.println(message);
        Point point1 = new Point(1, 1);
        Point point2 = point1;
        point1.x = 2;
        System.out.println(point2);
        int x = 15;
        int y = 10;
        if(x < 20){
            if(y == 10){
                System.out.println("X = 15, Y = 10");
            }
            System.out.println("This is if statement!");
        }
        else if(x == 30){
            System.out.println("The value of x is " + x);
        }
        else{
            System.out.println("This is else statement!");
        }
        System.out.println("hello world!");
    }
}


