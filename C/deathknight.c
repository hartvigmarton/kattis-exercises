/*
There once was a champion of WoW
Arthasdk the name he was bestowed
He Death Gripped you to his side
His Chains of Ice stopped your stride
And Obliterates made you say “OWW!”

But one day our hero got puzzled
His Death Grip totally fizzled
In his darkest despair
He could barely hear
“OMG NOOB u Chains of Iced than u Death Gripped”

Input
You are given a recording of the abilities our hero used in his battles.

The first line of input will contain a single integer n (1≤n≤100), the number of battles our hero played.

Then follow n lines each with a sequence of ki (1≤ki≤1000) characters, each of which are either ’C’, ’D’ or ’O’. These denote the sequence of abilities used by our hero in the i-th battle. ’C’ is Chains of Ice, ’D’ is Death Grip and ’O’ is Obliterate.

Output
Output the number of battles our hero won, assuming he won each battle where he did not use Chains of Ice immediately followed by Death Grip.
*/
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
