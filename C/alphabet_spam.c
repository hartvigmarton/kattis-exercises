#include <stdio.h>

int main(){
	int space = 0;
	int upper = 0;
	int lower = 0;
	int special = 0;
	
	long double space_ratio = 0;
	long double upper_ratio = 0;
	long double lower_ratio = 0;
	long double special_ratio = 0;
	
	int length;
	char inputstr[100000];
	
	gets(inputstr);
	
	length = strlen(inputstr);
	int i;
	
	for(i = 0; i < length;i++){
		if(inputstr[i] == '_'){
			space++;
		}
		else if(inputstr[i] > 64 && inputstr[i] < 91){
			upper++;
		}
		else if(inputstr[i] >96 && inputstr[i] < 123){
			lower++;
		}
		else{
			special++;
		}
	}
	space_ratio = (long double)space / (long double)length;
	upper_ratio = (long double)upper / (long double)length;
	lower_ratio = (long double)lower / (long double)length;
	special_ratio = (long double)special / (long double)length;;
	printf("%Lf\n%Lf\n%Lf\n%Lf\n",space_ratio,lower_ratio,upper_ratio,special_ratio);
	
	return 0;
}
