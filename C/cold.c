#include <stdio.h>

int main(){
    
    int nr_days;
    scanf("%d",&nr_days);
    int minus_cnt = 0;
    int days[nr_days]; 
    char space;
    int i = 0;
    do{
        scanf("%d%c",&days[i],&space);
        if (days[i] < 0 ){
            minus_cnt++;
        }
	i++;
    }while(i < nr_days);
    
    printf("%d\n",minus_cnt);
    return 0;
}
