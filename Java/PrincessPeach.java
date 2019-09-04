import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;

public class PrincessPeach {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String testInfo = scanner.nextLine();
        String[] testInfoParts = testInfo.split(" ");
        int nrObstacles = Integer.parseInt(testInfoParts[0]);
        int foundObstacles = Integer.parseInt(testInfoParts[1]);
        HashSet<Integer> obstacles = new HashSet<Integer>();
        int realOnesFound = 0;
        for (int i = 0; i < nrObstacles; i++) {
            obstacles.add(i);
        }

        for (int j = 0; j < foundObstacles; j++) {
            String obstacle = scanner.nextLine();
            int obstacleId = Integer.parseInt(obstacle);
            if (obstacles.contains(obstacleId)){
                obstacles.remove(obstacleId);
                realOnesFound++;
            }
        }

        for (Integer obstacle : obstacles) {
            System.out.println(obstacle);
        }

        System.out.println("Mario got " + realOnesFound + " of the dangerous obstacles.");
    }
}
