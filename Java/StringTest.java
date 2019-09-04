import java.util.Scanner;

public class StringTest {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        System.out.println(input.substring(1,input.length()));
    }
}
