import java.io.BufferedReader;
import java.io.InputStreamReader;

import java.util.Stack;


public class Polish {
    public  static  void main(String args[]) throws Exception{
        Stack<String> stack = new Stack();
        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        String input;
        String trimmedInput[];
        String output = "";
        int count = 1;



        while ((input = sc.readLine()) != null) {

            trimmedInput = input.split(" ");
            System.out.print("Case " + count +": ");
            count++;
            for (int i = trimmedInput.length - 1; i >= 0; i--) {

                if (!isOperator(trimmedInput[i])) {
                    stack.push(trimmedInput[i]);

                }
                performOperation(trimmedInput[i], stack, output);

            }

            while (!stack.isEmpty())
                System.out.println(stack.pop());


        }
    }

    public static boolean isOperator(String str){
        return str.equals("-") || str.equals("+") || str.equals("*");
    }

    public static boolean isValueInteger(String operand){
        try {
            Integer.parseInt(operand);
            return true;
        }
        catch(Exception e) {
            return false;
        }
    }
    public static void performOperation(String operator,Stack<String> stack,String output){
        if (operator.equals("-")){
            performSubtraction(stack,output);
        }
        else if (operator.equals("+")){
            performAddition(stack,output);
        }
        else if (operator.equals("*")){
            performMultiplication(stack,output);
        }
    }

    public static void performSubtraction(Stack<String> stack,String output){
        String number1 = (stack.pop());

        String number2 = (stack.pop());

        if (isValueInteger(number1) && isValueInteger(number2)) {
            int first = Integer.parseInt(number1);
            int second = Integer.parseInt(number2);
            String result = String.valueOf(first - second);
            output = result + output;
        } else {
            output = "- " + number1 + " " + number2 + output;
        }
            stack.push(output);

    }

    public static void performAddition(Stack<String> stack,String output){
            String number1 = (stack.pop());

            String number2 = (stack.pop());

            if (isValueInteger(number1) && isValueInteger(number2)) {
                int first = Integer.parseInt(number1);
                int second = Integer.parseInt(number2);
                String result = String.valueOf(first + second);
                output = result + output;
            } else {
                output = "+ " + number1 + " " + number2 +  output;
            }
                stack.push(output);


    }

    public static void performMultiplication(Stack<String> stack,String output){
        String number1 = (stack.pop());

        String number2 = (stack.pop());

        if (isValueInteger(number1) && isValueInteger(number2)) {
            int first = Integer.parseInt(number1);
            int second = Integer.parseInt(number2);
            String result = String.valueOf(first * second);
            output = result + output;
        } else {
            output = "* " + number1 + " " + number2 +  output;
        }
            stack.push(output);


    }

}