#include <stdio.h>

int main(){

	int nr_tests;
	scanf("%d",&nr_tests);
	
	int i;
	for(i = 0; i < nr_tests;i++){
		char simon[50];
		char says[50];
		char rest[5000];
		scanf("%s %s %[^\n]%*c",simon,says,rest);
		if ((strcmp(simon,"Simon") == 0) && (strcmp(says,"says"))){
		printf("%s\n",rest);
		}
	}
	return 0;
}
