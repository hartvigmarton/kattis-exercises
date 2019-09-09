#include <stdio.h>
#include <string.h>

int main(){
    int nr_t = 0;
    int nr_g = 0;
    int nr_c = 0;
    
    char seq[50];
    scanf("%s",seq);
    
    int len = strlen(seq);
    
    int i;
    for (i = 0; i < len; i++){
        if (seq[i] == 'T'){
            nr_t = nr_t + 1;
        }
        else if (seq[i] == 'G'){
            nr_g++;
        }
        else if ( seq[i] == 'C'){
            nr_c++;
        }
    }
    int t_score = nr_t * nr_t;
    int g_score = nr_g * nr_g;
    int c_score = nr_c * nr_c;
    
    int j;
    int lowest = nr_t;
    if (lowest > nr_g){
        lowest = nr_g;
    }
    if(lowest > nr_c){
        lowest = nr_c;
    }
    
    printf("%d\n",t_score + g_score + c_score + lowest * 7);

    return 0;
}
