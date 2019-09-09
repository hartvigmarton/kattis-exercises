#include <stdio.h>

int main(){

    	int sides[3];

	while(1){
        		scanf("%d %d %d",&sides[0],&sides[1],&sides[2]);
			if((sides[0] == 0) && (sides[1] == 0) && (sides[2] == 0)){
				break;
			}
			else if((sides[0] * sides[0]) + (sides[1] * sides[1]) == sides[2] * sides[2]){
				printf("right\n");
			}
			else if((sides[1] * sides[1]) + (sides[2] * sides[2]) == sides[0] * sides[0]){
				printf("right\n");
			}
			else if((sides[0] * sides[0]) + (sides[2] * sides[2]) == sides[1] * sides[1]){
				printf("right\n");
			
		else{
			printf("wrong\n");
		}
	}
    return 0;
}
