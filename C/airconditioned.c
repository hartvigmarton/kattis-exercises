#include <stdio.h>
#include <stdlib.h>
struct Minion{
	int min;
	int max;
};

struct Minion_register{
	int nr_minions;
	struct Minion* minion;
};

struct Minion_register* create_reg(int nr_minions){
	struct Minion_register* min_reg = (struct Minion_register*) malloc(sizeof(struct Minion_register));
	min_reg->nr_minions = nr_minions;
	min_reg->minion = (struct Minion*) malloc(sizeof(struct Minion) * nr_minions);
	return min_reg;
};

int fits_room(struct Minion minion1,struct Minion minion2){

	return ((minion2.max < minion1.min) || (minion2.min > minion1.max));
}
int main(){
	
	int nr_minions;
	scanf("%d",&nr_minions);
	
	struct Minion_register* min_reg = create_reg(nr_minions);
	
	int nr_rooms = 1; //1 room at least is necessary
	
	int i;
	for(i = 0;i < nr_minions; i++){
		struct Minion minion;
		scanf("%d %d",&minion.min,&minion.max);
		min_reg->minion[i] = minion;
		//printf("minion %d initialized\n",i);
		if( i > 0){
			//printf("%d. comparison begins\n",i);
			int not_fitting_rooms = 0;
			int j;
			for(j = 0; j < i; j++){
				//printf("comparing current minion with minion %d\n",j);
				not_fitting_rooms += fits_room(min_reg->minion[j],minion);
			}
			if (not_fitting_rooms == i){
				//printf("minion does not fit any rooms\n");
				nr_rooms++;
			}
		}
	}
	printf("%d\n",nr_rooms);	
	return 0;
}
