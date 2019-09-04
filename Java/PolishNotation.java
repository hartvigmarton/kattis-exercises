import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class PolishNotation {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int testCnt = 1;
        while (true){
            String input = scanner.nextLine();
            if (input.equals("")){
                break;
            }
            else {

                Term term = buildTerm(input);
                System.out.print("Case " + testCnt + ": ");
                term.evaluate(term.getOperator(),term.getTerm());
                testCnt++;
            }
        }
    }

    public static Term buildTerm(String expression){
        String[] expressionParts = expression.split(" ");
        Term term = new Term();
        term.setOperator(expressionParts[0]);

        if (isOperator(expressionParts[1])){
            term.setTerm(buildTerm(expression.substring(1, expression.length())));
        }
        else {
            term.setFirstOperand(new Operand(expressionParts[1]));
        }
        if (isOperator(expressionParts[2])){
            term.setTerm(buildTerm(expression.substring(2, expression.length())));
        }
        else {
            term.setSecondOperand(new Operand(expressionParts[2]));
        }
        return term;
    }

    public static boolean isOperator(String symbol){
        return symbol.equals("-") || symbol.equals("+") || symbol.equals("*");
    }
}
