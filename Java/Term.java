public class Term {

    private String operator;
    private Operand firstOperand;
    private Operand secondOperand;
    private Term term;

    public String getOperator() {
        return operator;
    }

    public void setOperator(String operator) {
        this.operator = operator;
    }

    public Operand getFirstOperand() {
        return firstOperand;
    }

    public void setFirstOperand(Operand firstOperand) {
        this.firstOperand = firstOperand;
    }

    public Operand getSecondOperand() {
        return secondOperand;
    }

    public void setSecondOperand(Operand secondOperand) {
        this.secondOperand = secondOperand;
    }

    public Term getTerm() {
        return term;
    }

    public void setTerm(Term term) {
        this.term = term;
    }

    public void evaluate(String operator, Term term) {
        if (term == null) {
            switch (operator.charAt(0)) {
                case '-':
                    evaluateSubtract();
                    break;
                case '+':
                    evaluateAdd();
                    break;
                case '*':
                   evaluateMultiply();
                    break;

            }
        }
        else {
            evaluate(term.getOperator(),term.getTerm());
        }
    }

    public boolean containsVariable(){
        return !firstOperand.isValueInteger(firstOperand.getValue()) || !secondOperand.isValueInteger(secondOperand.getValue());
    }
    public void evaluateSubtract(){
        if (containsVariable()) {
            System.out.println(operator + " " + firstOperand.getValue() + " " + secondOperand.getValue());
        } else {
            System.out.println(Integer.parseInt(firstOperand.getValue()) - Integer.parseInt(secondOperand.getValue()));
        }
    }

    public void evaluateAdd(){
        if (containsVariable()) {
            System.out.println(operator + " " + firstOperand.getValue() + " " + secondOperand.getValue());
        } else {
            System.out.println(Integer.parseInt(firstOperand.getValue()) + Integer.parseInt(secondOperand.getValue()));
        }
    }

    public void evaluateMultiply(){
        if (containsVariable()) {
            System.out.println(operator + " " + firstOperand.getValue() + " " + secondOperand.getValue());
        } else {
            System.out.println(Integer.parseInt(firstOperand.getValue()) * Integer.parseInt(secondOperand.getValue()));
        }
    }


}
