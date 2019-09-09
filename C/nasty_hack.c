#include <stdio.h>

int main(){

	int nr_tests;
	scanf("%d",&nr_tests);
	char* answers[nr_tests];
	int i;
	for(i = 0;i < nr_tests;i++){
		int r;
		int e;
		int c;
		scanf("%d %d %d",&r,&e,&c);
			if(r > (e - c)){
				answers[i] = "do not advertise";
			}
			else if(r == (e - c)){
				answers[i] = "does not matter";
			}
			else{
				answers[i] = "advertise";
			}
	}
	for(i = 0; i < nr_tests;i++){
		printf("%s\n",answers[i]);
	}
	
	return 0;
} 
