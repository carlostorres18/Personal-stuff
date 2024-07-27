import java.awt.*;
import java.util.Arrays;
import java.util.Scanner;

class Main {
    public static void main(String[] args){
        for(int i = 0; i <= 30; i++){
            if(i % 5 == 0 && i % 3 == 0){
                System.out.println("FizzBuzz");
            }
            else if(i % 5 == 0){
                System.out.println("Buzz");
            }
            else if(i % 3 == 0){
                System.out.println("Fizz");
            }
            else{
                System.out.println(i);
            }
        }

        int y = 10;
        do{
            System.out.println("value of y = " + y);
            y++;
            System.out.println("\n");
        }while(y < 20);

        

        Point point1 = new Point(1, 1);
        Point point2 = point1;
        point1.x = 2;
        System.out.println(point2);

        String message = "Hello world!";
        
        System.out.println(message.replace("!", "*"));

        int [] numbers = {2,3,5,1,4};
        Arrays.sort(numbers);
        System.out.println(Arrays.toString(numbers));

        int [][] multi_dimensional_array = {{1,2,3},{4,5,6}};
        multi_dimensional_array [0][0] = 1;
        System.out.println(Arrays.deepToString(multi_dimensional_array));

        final float pi = 3.14F;
        
        Scanner scanner = new Scanner(System.in);
        System.out.print("Age: ");
        byte age = scanner.nextByte();
        System.out.println("You are " + age);
        
    }
}


