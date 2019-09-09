#include <stdio.h>

int main(){
    
    int nr_tests;
    scanf("%d",&nr_tests);
    
    int i;
    for (i = 0;i < nr_tests; i++){
        int nr_candidates;
        int sum_votes = 0;
        int winner_votes = 0;
        int winner_id;
        int nr_winners = 0;
	int only_winner = 0;
        scanf("%d",&nr_candidates);
        int votes[nr_candidates];
        
        int j;
        for(j = 0; j < nr_candidates; j++){
            scanf("%d",&votes[j]);
            sum_votes += votes[j];
            if(votes[j] > winner_votes){
                winner_votes = votes[j];
		only_winner = 1;
                winner_id = j + 1;
            }
		else if( votes[j] == winner_votes){
			only_winner = 0;
            
        	}
	}
	if(only_winner){
		if( winner_votes > sum_votes - votes[winner_id-1]){
			printf("majority winner %d\n",winner_id);
		}
		else{
			printf("minority winner %d\n",winner_id);
		}
	}
	else{
		printf("no winner\n");
	}
	}
    
    return 0;
}
