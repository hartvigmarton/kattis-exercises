#include <stdio.h>
#include <math.h>
int main(){
	
	char input[10000];
	scanf("%s",input);
	
	int length = strlen(input);
	double dimension = sqrt((double)length);
	char encoded[(int)dimension][(int)dimension];
	
	printf("%f\n",dimension);
	return 0;
}
