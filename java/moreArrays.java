import java.util.Scanner;

public class moreArrays {
    public static void main(String[] args){
        // get user input to get multiple entries into 2 different arrays

        Scanner input = new Scanner(System.in);

        System.out.println("Welcome to Pizza Party!");
        System.out.print("Enter the # of pizzas: ");
        int userInput = input.nextInt();
        System.out.println();

        String [] pizzaName = new String[userInput];
        int [] pizzaAmount = new int[userInput];

        for(int i = 0; i < userInput; i++){
            System.out.print((i+1) + ". Name and Amount: ");
            pizzaName[i] = input.next();
            pizzaAmount[i] = input.nextInt();
        }
        System.out.println();

        System.out.println("Total: ");
        for(int i = 0; i < userInput; i++){
            System.out.println("Items: " + pizzaName[i] + ", Amount: " + pizzaAmount[i]);
        }

    }
}
