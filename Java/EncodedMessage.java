import java.util.Scanner;

public class EncodedMessage {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String tests = scanner.nextLine();
        int nrTests = Integer.parseInt(tests);

        for (int i = 0; i < nrTests; i++) {
            int messageIndex = 0;
            String encodedMessage = scanner.nextLine();
            int boxSize = (int) Math.sqrt(encodedMessage.length());
            char[][] box = new char[boxSize][boxSize];
            for (int j = 0; j < boxSize; j++) {
                for (int k = 0; k < boxSize; k++) {
                    box[j][k] = encodedMessage.charAt(messageIndex);
                    messageIndex++;
                }

            }
            for (int j = boxSize - 1; j >= 0 ; j--) {
                for (int k = 0;  k < boxSize ; k++) {
                    System.out.print(box[k][j]);
                }
            }
            System.out.println();
        }
    }
}
