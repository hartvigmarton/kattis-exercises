import java.util.Scanner;

public class ReverseBinary {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        String binary = Integer.toBinaryString(number);
        String reverse = new StringBuilder(binary).reverse().toString();
        int converted = Integer.parseInt(reverse,2);
        System.out.println(converted);
    }
}
