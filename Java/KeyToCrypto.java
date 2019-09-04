import java.util.HashMap;
import java.util.Scanner;

public class KeyToCrypto {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String cypherText = scanner.nextLine();
        String key = scanner.nextLine();
        String message = "";
        String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        HashMap<String,Integer> shift = new HashMap<String, Integer>();
        for (int i = 0; i < alphabet.length(); i++) {
            shift.put(alphabet.substring(i,i+1),i);
        }

        for (int i = 0; i < cypherText.length(); i++) {
            int jump = cypherText.charAt(i) - shift.get(Character.toString(key.charAt(i)));
            if (jump < 65){
                jump = 91 - (65 - jump);
            }
            message = message + (char)jump;
            key = key + (char)jump;

        }
        System.out.println(message);
    }
}
