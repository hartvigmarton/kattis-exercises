import java.util.Scanner;

public class Election2 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int nrCandidates = scanner.nextInt();
        String[] candidates = new String[nrCandidates];
        String[] parties = new String[nrCandidates];
        int[] votes = new int[nrCandidates];
        String bullshit = scanner.nextLine();

        for (int i = 0; i < nrCandidates; i++) {
            candidates[i] = scanner.nextLine();
            parties[i] = scanner.nextLine();
            votes[i] = 0;
        }

        int nr_votes = scanner.nextInt();
        String bullshit2 = scanner.nextLine();
        for (int i = 0; i < nr_votes; i++) {
            String vote = scanner.nextLine();
            for (int j = 0; j < nrCandidates; j++) {
                if (vote.equals(candidates[j])){
                    votes[j]++;
                }
            }
        }

        int mostVotes = 0;
        int winnerIndex = 0;
        for (int i = 0; i < nrCandidates; i++) {
            if (votes[i] > mostVotes){
                mostVotes = votes[i];
                winnerIndex = i;
            }
        }
        int nrMatches = 0;
        for (int i = 0; i < nrCandidates; i++) {
            if (votes[i] == mostVotes){
                nrMatches++;
                }
            }

        if (nrMatches > 1) {
            System.out.println("tie");
        }
        else {
            System.out.println(parties[winnerIndex]);
        }
    }
}
