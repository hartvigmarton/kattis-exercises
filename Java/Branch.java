import java.util.ArrayList;

public class Branch {

    private String id;
    private Branch root;

    public Branch(String id){
        this.id = id;
        root = null;
    }
    public String getId(){
        return id;
    }

    public void setRoot(Branch root){
        this.root = root;
    }
    public Branch getRoot(){
        return root;
    }


}
