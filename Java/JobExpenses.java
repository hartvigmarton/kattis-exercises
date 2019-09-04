import java.util.Scanner;

public class JobExpenses {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int days = scanner.nextInt();

        int total = 0;

        for (int i = 0; i < days; i++) {
            int balance = scanner.nextInt();
            if (balance < 0){
                total += Math.abs(balance);
            }
        }
        System.out.println(total);
    }
}
