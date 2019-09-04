import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class DiceCup {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int firstDice = scanner.nextInt();
        int secondDice = scanner.nextInt();
        int resultMatrix[][] = new int[firstDice][secondDice];
        HashMap<Integer,Integer> probabilities = new HashMap<Integer, Integer>();


        ArrayList<Integer> mostProbables = new ArrayList<Integer>();

        for (int i = 2; i < firstDice + secondDice; i++) {
            for (int j = 1; j < i; j++) {

            }
        }
    }
}
