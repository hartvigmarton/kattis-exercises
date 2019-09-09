#include <stdio.h>

int main(){
	
	int nr_tests;
	scanf("%d",&nr_tests);

	
	int i;
	for(i = 0;i < nr_tests;i++){
		printf("\n");
		int nr_kids;
		scanf("%d",&nr_kids);
		
		int total_candies = 0;
		int j;
		for(j = 0;j < nr_kids;j++){
			int candies;
			scanf("%d",&candies);
			total_candies = total_candies + candies;
		}
		if(total_candies % nr_kids == 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}


	return 0;
}
