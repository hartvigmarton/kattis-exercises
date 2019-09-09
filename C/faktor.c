#include <stdio.h>

int main(){
	
	int tp;
	int imp;
	scanf("%d %d",&tp,&imp);
	
	float imp2 = (float)imp - 0.99;
	float tc = (float)tp * imp2;
	printf("%d\n",(int)ceil(tc));	
	return 0;
}
