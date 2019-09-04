import java.util.Scanner;

public class OneChicken {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int canEat = scanner.nextInt();
        int totalChicken = scanner.nextInt();

        if (totalChicken - canEat > 1){
            System.out.println("Dr. Chaz will have " + (totalChicken - canEat) +" pieces of chicken left over!");
        }
        else if (totalChicken - canEat == 1){
            System.out.println("Dr. Chaz will have " + (totalChicken - canEat) +" piece of chicken left over!");

        }
        else if (totalChicken - canEat == -1){
            System.out.println("Dr. Chaz needs " + Math.abs(totalChicken - canEat) + " more piece of chicken!");
        }
        else{
            System.out.println("Dr. Chaz needs " + Math.abs(totalChicken - canEat) + " more pieces of chicken!");

        }
    }
}
