import java.util.ArrayList;
import java.util.Scanner;

public class quickbrownfox {

    public static void main(String[] args) {

        String abc = "abcdefghijklmnopqrstuvwxyz";

        Scanner scanner = new Scanner(System.in);

        int nrTests = scanner.nextInt();
        String input1 = scanner.nextLine();
        for (int i = 0; i < nrTests; i++) {

            String missing = "";

            String input = scanner.nextLine();

            for (int j = 0; j < abc.length(); j++) {
                if ((!input.contains((abc.substring(j, j + 1)))) && (!input.contains((abc.substring(j, j + 1)).toUpperCase()))){
                    missing += abc.substring(j, j + 1);
                }
            }

            if (missing.length() == 0) {
                System.out.println("pangram");
            } else {
                System.out.println("missing " + missing);
            }
        }
    }
}
