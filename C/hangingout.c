#include <stdio.h>
#include <string.h>
int main(){
    
    int limit;
    int events;
    scanf("%d %d",&limit,&events);
    
    int denied_entry = 0;
    int people_at_terrace = 0;
    int i;
    for(i = 0;i < events;i++){
        int people;
        char action[5];
        scanf("%s %d",action,&people);
        if(strcmp(action,"leave") == 0){
            people_at_terrace = people_at_terrace - people;
        } 
        else if((strcmp(action,"enter")==0) && (people + people_at_terrace <= limit)){
            people_at_terrace = people + people_at_terrace;
        }
        else {
            denied_entry++;
        }
    }
    
    printf("%d\n",denied_entry);
    return 0;
}
