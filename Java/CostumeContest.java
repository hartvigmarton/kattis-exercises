import java.util.HashMap;
import java.util.Scanner;

public class CostumeContest {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nrContestants = Integer.parseInt(scanner.nextLine());
        HashMap<String,Integer> costumes = new HashMap<String, Integer>();
        for (int i = 0; i < nrContestants; i++) {
            String costume = scanner.nextLine();
            if (!costumes.containsKey(costume)){
                costumes.put(costume,1);
            }
            else {
                costumes.put(costume,costumes.get(costume) + 1);
            }
        }
        for (String s : costumes.keySet()) {
            System.out.println(s);
        }
    }
}
