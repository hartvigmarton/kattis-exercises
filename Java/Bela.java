import java.util.Scanner;

public class Bela {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String testDetails = scanner.nextLine();
        String[] testParts = testDetails.split(" ");
        int nrPlayers = Integer.parseInt(testParts[0]);
        String dominant = testParts[1];
        int sum = 0;

        for (int i = 0; i < nrPlayers * 4; i++) {
            String input = scanner.nextLine();
            if (input.substring(0,1).equals("A")){
                sum += 11;
            }
            else if (input.substring(0,1).equals("K")){
                sum += 4;
            }
            else if (input.substring(0,1).equals("Q")){
                sum += 3;
            }
            else if (input.substring(0,1).equals("J")){
                if (input.substring(1,2).equals(dominant)){
                    sum += 20;
                }
                else {
                    sum += 2;
                }
            }
            else if(input.substring(0,1).equals("T")){

                sum += 10;
            }
            else if (input.substring(0,1).equals("9")){
                if (input.substring(1,2).equals(dominant)){
                    sum += 14;
                }
            }

        }
        System.out.println(sum);
    }
}
