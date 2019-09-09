#include <stdio.h>
#include <string.h>

int main(){
    
    int nr_games;
    
    scanf("%d",&nr_games);
    
    int games_won = nr_games;
    int i;
    for(i = 0;i < nr_games;i++){
        char abilities[1000];
        scanf("%s",abilities);
        
        int length = strlen(abilities);
        int j;
        for(j = 0;j < length;j++){
            if((j + 1 < length) && (abilities[j] =='C' && abilities[j+1] =='D')){
                printf("in condition");
		games_won--;
                break;
            }
        }
    }
    
    printf("%d\n",games_won);
    
    return 0;
}
