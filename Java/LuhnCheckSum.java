import java.util.Scanner;

public class LuhnCheckSum {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nrTests = Integer.parseInt(scanner.nextLine());

        for (int i = 0; i < nrTests; i++) {
            String number = scanner.nextLine();
            String checkSum = "";
            int cursor = 0;
            for (int j = number.length(); j > 0 ; j--) {
                if (cursor % 2 == 0){
                    checkSum = number.charAt(j-1) + checkSum;
                }
                else {
                    int digit = Integer.parseInt(Character.toString(number.charAt(j-1))) * 2;
                    if (digit > 9) {
                        int digitSum = 0;
                        String sum = Integer.toString(digit);
                        digitSum = Integer.parseInt(Character.toString(sum.charAt(0))) + Integer.parseInt(Character.toString(sum.charAt(1)));
                        checkSum = digitSum + checkSum;
                    } else {
                        checkSum = digit + checkSum;
                    }
                }
                cursor++;

            }
            int sum = 0;
            for (int j = 0; j < checkSum.length(); j++) {
                int part = Integer.parseInt(checkSum.substring(j,j+1));
                sum = sum + part;
            }


            if (sum % 10 == 0){
                System.out.println("PASS");
            }
            else {
                System.out.println("FAIL");
            }
        }
    }
}
