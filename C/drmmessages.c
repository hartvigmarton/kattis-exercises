#include <stdio.h>

int main(){
	
	char input[15000];
	scanf("%s",input);
	int length = strlen(input);
	
	int rot_sum_first = 0;
	int rot_sum_second = 0;
	int rot_val_first[length/2];
	int rot_val_second[length/2];
	int i;
	for(i = 0; i < length / 2;i++){
		int current_first = (int)input[i] - 65;
		int current_second = (int)input[i+(length/2)] - 65;
		rot_sum_first += current_first;
		rot_sum_second += current_second;
	}
	
	int j;
	for(j = 0; j < length / 2; j++){
		rot_val_first[j] = (((int)input[j] - 65) + rot_sum_first) % 26;
		rot_val_second[j] = (((int)input[j + (length/2)]- 65) + rot_sum_second) % 26;
		printf("%c",((rot_val_first[j]+rot_val_second[j]) % 26) + 65);
	} 
	printf("\n");
		
	return 0;
}
