import java.util.*;

public class FreeFood {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nrTests = Integer.parseInt(scanner.nextLine());
        Set<Integer> days = new HashSet<Integer>();


        for (int i = 0; i < nrTests; i++) {
            int starDay = scanner.nextInt();
            int endDay = scanner.nextInt();

            for(int j = starDay; j <= endDay;j++){
                if (!days.contains(j)){
                    days.add(j);
                }
            }
        }
        System.out.println(days.size());
    }
}
