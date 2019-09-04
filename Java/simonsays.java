import java.util.Scanner;

public class simonsays {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int statements = scanner.nextInt();
        String input1 = scanner.nextLine();
        for (int i = 0; i < statements; i++) {
            String statement = scanner.nextLine();
            if (statement.contains("Simon says")){
                System.out.println(statement.substring(11));
            }
        }
    }
}
