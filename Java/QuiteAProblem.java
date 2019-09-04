import java.io.BufferedReader;
import java.io.InputStreamReader;

public class QuiteAProblem {

    public static void main(String[] args) throws Exception{

        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        String input;
        String problem = "problem";

        while ((input = sc.readLine()) != null){
            if (input.toLowerCase().contains(problem)){
                System.out.println("yes");
            }
            else {
                System.out.println("no");
            }

        }
    }
}
