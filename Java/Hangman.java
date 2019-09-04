import java.util.Scanner;

public class Hangman {

    public static void main(String[] args) {


        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine();
        String guess = scanner.nextLine();
        String differentLetters = "";
        int wrongGuesses = 0;
        int goodGuesses = 0;
        for (int i = 0; i < word.length(); i++) {
            if (!differentLetters.contains(word.substring(i,i+1))){
                differentLetters += word.substring(i,i+1);
            }
        }

        for (int i = 0; i < guess.length(); i++) {
            if (!differentLetters.contains(guess.substring(i,i+1))){
                wrongGuesses++;
                if (wrongGuesses == 10){
                    System.out.println("LOSE");
                    break;
                }
            }
            else {
                goodGuesses++;
                if (goodGuesses == differentLetters.length()){
                    System.out.println("WIN");
                    break;
                }
            }
        }

    }
}
