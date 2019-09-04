import java.util.Scanner;

public class oddManOut {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nrTests = scanner.nextInt();

        for (int i = 0; i < nrTests; i++) {
            int nrPeople = scanner.nextInt();
            int[] people = new int[nrPeople];
            for (int j = 0; j < nrPeople; j++) {
                people[j] = scanner.nextInt();
            }
            for (int j = 0; j < nrPeople; j++) {
                int idCount = 0;
                for (int k = 0; k < nrPeople; k++) {
                    if (people[j] == people[k]){
                        idCount++;
                    }
                }
                if (idCount == 1){
                    System.out.println("Case #" + (i + 1) + ":" + people[j]);
                }
            }

        }
    }
}
