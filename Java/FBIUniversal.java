import java.util.HashMap;
import java.util.Scanner;

public class FBIUniversal {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nrTests = Integer.parseInt(scanner.nextLine());
        String alphabet = "0123456789ACDEFHJKLMNPRTVWX";
        HashMap<String,Integer> values = new HashMap<String, Integer>();
        for (int i = 0; i < alphabet.length(); i++) {
            values.put(alphabet.substring(i,i+1),i);
        }
        values.put("B",8);
        values.put("G",values.get("C"));
        values.put("I",1);
        values.put("O",0);
        values.put("Q",0);
        values.put("S",5);
        values.put("U",values.get("V"));
        values.put("Y",values.get("V"));
        values.put("Z",2);


        for (int i = 0; i < nrTests; i++) {
            String id = scanner.nextLine();
            String[] parts = id.split(" ");
            int checkDigit = ((2 * values.get(parts[1].substring(0,1))) + (4 * values.get(parts[1].substring(1,2))) + (5 * values.get(parts[1].substring(2,3))) +
                    (7 * values.get(parts[1].substring(3,4))) + (8 * values.get(parts[1].substring(4,5))) + (10 * values.get(parts[1].substring(5,6)))
                    + (11 * values.get(parts[1].substring(6,7))) + (13 * values.get(parts[1].substring(7,8)))) % 27;
            if ( checkDigit % 27 == values.get(parts[1].substring(8,9))){
                double decimalValue = 0;
                int power = parts[1].length()-2;
                for (int j = 0; j < parts[1].length() - 1; j++) {
                    decimalValue += Double.parseDouble(parts[1].substring(j,j+1)) * Math.pow(27,power);
                    power--;
                }
                String outputValue = Double.toString(decimalValue).substring(0, Double.toString(decimalValue).length() - 3);
                
                System.out.println(parts[0] + " " );
            }
            else {
                System.out.println(parts[0] +" Invalid");
            }

        }

    }
}
