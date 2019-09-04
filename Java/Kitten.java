import java.util.HashMap;
import java.util.Scanner;

public class Kitten {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String kitten = scanner.nextLine();
        HashMap<String,Branch> branchHashMap = new HashMap<String, Branch>();


        while (true){
            String input = scanner.nextLine();
            if (input.equals("-1")){
                break;
            }
            else {
                String[] branchIDs = input.split(" ");
                Branch root;
                if (branchHashMap.containsKey(branchIDs[0])) {
                    root = branchHashMap.get(branchIDs[0]); }
                else {
                    root = new Branch(branchIDs[0]);
                }
                for (int i = 1; i < branchIDs.length; i++) {
                    Branch branch;
                    if (branchHashMap.containsKey(branchIDs[i])) {
                        branch = branchHashMap.get(branchIDs[i]); }
                    else {
                        branch = new Branch(branchIDs[i]);
                    }
                    branch.setRoot(root);
                    branchHashMap.put(branchIDs[i],branch);

                }
                branchHashMap.put(branchIDs[0], root);

            }
        }
        getDown(branchHashMap.get(kitten));

    }
    public static void getDown(Branch currentBranch){
        System.out.print(currentBranch.getId() + " ");
        if (currentBranch.getRoot() != null){
            getDown(currentBranch.getRoot());
        }else{
            System.out.println();
        }
    }
}
