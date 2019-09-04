import java.util.ArrayList;
import java.util.Scanner;

public class Nodup {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        ArrayList<String> differentWords = new ArrayList<String>();
        String[] words = input.split(" ");

        for (int i = 0; i < words.length; i++) {
            if (differentWords.contains(words[i])){
                System.out.println("no");
                break;
            }
            else {
                differentWords.add(words[i]);
                if (i == words.length - 1){
                    System.out.println("yes");
                }
            }
        }
    }
}
