import java.util.ArrayList;
import java.util.Scanner;

public class SecureDoors {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nrLogs = scanner.nextInt();
        ArrayList<String> peopleInside = new ArrayList<String>();
        String input1 = scanner.nextLine();

        for (int i = 0; i < nrLogs; i++) {
            String event = scanner.nextLine();
            String[] details = event.split(" ");
            if (details[0].equals("entry")){
                if (isPersonIn(peopleInside,details[1])){
                    System.out.println(details[1] + " entered (ANOMALY)");
                }
                else {
                    System.out.println(details[1] + " entered");
                    peopleInside.add(details[1]);

                }
            }
            else if(details[0].equals("exit")){
                if (isPersonIn(peopleInside,details[1])){
                    System.out.println(details[1] + " exited");
                    peopleInside.remove(details[1]);
                }
                else {
                    System.out.println(details[1] + " exited (ANOMALY");

                }
            }

        }
    }

    public static boolean isPersonIn(ArrayList<String> peopleInside,String name){
        return peopleInside.contains(name);
    }
}
