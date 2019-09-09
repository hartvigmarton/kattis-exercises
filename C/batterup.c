#include <stdio.h>

int main(){
    
    int nr_hits;
    scanf("%d",&nr_hits);
    
    int hits[nr_hits];
    int total = 0;
    int valid = 0;
    
    int i;
    for(i = 0; i < nr_hits; i++){
        
        char space;
        scanf("%d%c",&hits[i],space);
        
        if(hits[i] >= 0){
            total += hits[i];
            valid++;
        }
    }
    
    printf("%f",(float)total / (float)valid);
    
    return 0;
}
