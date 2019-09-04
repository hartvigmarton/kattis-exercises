public class Operand {

    public Operand(String value) {
        this.value = value;
    }

    private String value;

    public String getValue() {
        return value;
    }

    public void setValue(String value) {
        this.value = value;
    }

    public boolean isValueInteger(String value) {
        try {
            Integer.parseInt(value);
            return true;
        }
        catch(Exception e) {
            return false;
        }
    }


}
