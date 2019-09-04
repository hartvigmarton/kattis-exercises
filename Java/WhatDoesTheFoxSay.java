import java.util.HashMap;
import java.util.Scanner;

public class WhatDoesTheFoxSay {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nrTestCases = scanner.nextInt();
        String newLine = scanner.nextLine();

        String foxSays = "";
        HashMap<String,String> animals = new HashMap<String, String>();

        for (int i = 0; i < nrTestCases; i++) {
            String test = scanner.nextLine();
            while (true) {
                String animalSound = scanner.nextLine();
                if (animalSound.equals("what does the fox say?")) {
                    break;
                }
                String[] parts = animalSound.split(" ");
                animals.put(parts[2], parts[0]);
            }

            String[] testParts = test.split(" ");
            for (int j = 0; j < testParts.length; j++) {
                if (!animals.containsKey(testParts[j])){
                    foxSays += testParts[j] + " ";
                }

            }
            System.out.println(foxSays);
            foxSays = "";

        }

        ;
    }
}
