import java.util.Scanner;

public class harshadnumbers {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        int number = Integer.parseInt(input);
        int sum = 0;
        for (int i = 0; i < input.length(); i++) {
            int digit = Integer.parseInt(input.substring(i,i+1));
            sum += digit;

        }

        for (int i = number; i > 0 ; i--) {


        }
    }
}
