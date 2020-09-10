/*
You are the boss of ACM (Air Conditioned Minions), an upstanding company with a single goal of world domination.

The company has N minions. Each minion works evilly from early morning until evening inside a super secret bunker in Helsinki. After much deliberation, you decided to move your headquarters to Singapore. However, unlike Helsinki, Singapore is very hot, so the entire complex must be air conditioned. With strenuous working hours (under minimum wage too), it is imperative that all your minions work under optimal work condition. In particular, all minions must like the temperatures of the rooms they are in.

You are planning to construct several rooms in your new hideout, and assign your minions there. You fix the temperature of each room to any value you want (different rooms may have different temperatures). After you fix the temperatures, you will assign each of your minions to these rooms (a room can hold any number of minions). You want all minions to like the temperatures of their assigned rooms. Each minion likes an interval of temperature, and these preferences will be given to you.

Air conditioners are very expensive to maintain. Thus, you want to construct as few rooms as possible. What is the minimum number of rooms you need to set up such that it would be possible to assign minions to rooms as discussed earlier?

Input
The first line contains a non-negative integer 2≤N≤100, giving the number of minions in your company. The next N lines each describe the temperature preferences of all your minions. The i-th line consists of two single space separated integers L and U (1≤L≤U≤2N), which denotes that the i-th minion likes any temperature between L and U, inclusively.

Output
Print an integer denoting the minimum number of rooms you need to construct.

Sample Data Explanation
In the first example, one of the possible solutions is to setup two rooms — one with temperature 2, and another with temperature 5. The first two minions can be assigned to the first room, while the third minion can be assigned to the second room.

NOT FINISHED!
*/


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
