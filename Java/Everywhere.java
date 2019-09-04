import java.util.ArrayList;
import java.util.Scanner;

public class Everywhere {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nr_tests = scanner.nextInt();

        for (int i = 0; i < nr_tests; i++) {
            int nr_cities = scanner.nextInt();
            ArrayList<String> cities = new ArrayList<String>();

            for (int j = 0; j < nr_cities; j++) {
                String city = scanner.next();


                        if (!cities.contains(city)) {
                            cities.add(city);
                        }
                    }
            System.out.println(cities.size());
        }
    }
}

