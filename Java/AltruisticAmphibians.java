import java.util.ArrayList;
import java.util.Scanner;

public class AltruisticAmphibians {

    public static void main(String[] args) {

        int minimumNrFrogsThatCanEscape = 0;
        int NrFrogs;
        int WellDepth;

        ArrayList<Frog> frogs = new ArrayList<Frog>();

        Scanner scanner = new Scanner(System.in);
        NrFrogs = scanner.nextInt();
        WellDepth = scanner.nextInt();

       // System.out.println(NrFrogs + " " + WellDepth);

        for (int i = 0; i < NrFrogs; i++) {
            Frog frog = new Frog(scanner.nextInt(),scanner.nextInt(),scanner.nextInt());
            frogs.add(frog);
            if (frog.getJumpCap() > WellDepth){
                frog.setCanJumpOut(true);
                frog.setDistanceMissing(0);
                minimumNrFrogsThatCanEscape++;
            }
            else {
                frog.setDistanceMissing(WellDepth-frog.getJumpCap());
            }
            //System.out.println(frog.getJumpCap() + " " + frog.getWeight() + " " + frog.getHeight() + " " + frog.isCanJumpOut());
        }

        System.out.println(minimumNrFrogsThatCanEscape);
    }
}
