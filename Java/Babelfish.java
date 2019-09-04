import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Scanner;

public class Babelfish{

    public static void main(String[] args) throws Exception{
        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        Scanner scanner = new Scanner(System.in);
        HashMap<String,String> dictionary = new HashMap<String, String>();
        String query;

        while(true){

                String input = scanner.nextLine();
                if (input.equals("")) {
                    break;
                }
                String[] parts = input.split(" ");
                dictionary.put(parts[1], parts[0]);

        }

        while ((query = sc.readLine()) != null){


                if (!dictionary.keySet().contains(query)){
                    System.out.println("eh");
                }
                else {
                    System.out.println(dictionary.get(query));
                }
            }
        }
    }

