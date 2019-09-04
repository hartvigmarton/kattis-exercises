    import java.util.Scanner;
public class Sibice {






        public static void main(String[] args) {

            Scanner input = new Scanner(System.in);
            int matchCnt = input.nextInt();
            int length = input.nextInt();
            int width = input.nextInt();
            int[] matches = new int[matchCnt];

            for (int i = 0; i < matchCnt; i++) {

                matches[i] = input.nextInt();
            }

            for (int i = 0; i < matches.length; i++) {
                if (matches[i] <= Math.sqrt((length * length) + (width * width))){
                    System.out.println("DA");
                }
                else {
                    System.out.println("NE");
                }
            }

        }
    }

