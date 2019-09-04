import java.util.Scanner;

public class SecretMessage {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nrTests = Integer.parseInt(scanner.nextLine());

        for (int i = 0; i < nrTests; i++) {
            String message = scanner.nextLine();
            double boxSize;
            if (isPerfectSquare(message.length())){
                boxSize = Math.sqrt(message.length());
            }
            else {
                boxSize = Math.sqrt(nextPerfectSquare(message.length()));
            }

            char[][] box = new char[(int)boxSize][(int)boxSize];
            int messageCursor = 0;
            for (int j = (int)boxSize; j > 0; j--) {
                for (int k = 0; k < (int)boxSize; k++) {
                    if(messageCursor < message.length()) {
                        box[k][j-1] = message.charAt(messageCursor);
                        messageCursor++;
                    }
                    else {
                        box[k][j-1] = '*';
                    }
                }
            }
            for (int j = 0; j < boxSize; j++) {
                for (int k = 0; k < boxSize; k++) {
                    if (box[j][k] != '*') {
                        System.out.print(box[j][k]);
                    }
                }
            }
            System.out.println();
        }
    }

    public static boolean isPerfectSquare(double x) {
        // Find floating point value of
        // square root of x.
        double sr = Math.sqrt(x);

        // If square root is an integer
        return ((sr - Math.floor(sr)) == 0);
    }

    public static double nextPerfectSquare(int n) {
        double nextN = Math.floor(Math.sqrt(n)) + 1;

        return nextN * nextN;
    }
}
