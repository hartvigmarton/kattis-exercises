#include <stdio.h>
#include <string.h>
int main(){
	
	char command;
	char space;
	char input[100];
	scanf("%c%c%s",&command,&space,input);
	int length = strlen(input);
	int i;
	if(command == 'E'){
		char current_char = input[0];
		int char_count = 0;
		for(i = 0; i < length; i++){
			if(input[i] != current_char){
				printf("%c%d",current_char,char_count);
				current_char = input[i];
				char_count = 1;
				if(i == length-1){
					printf("%c%d",input[i],char_count);
				}	
			}
			else{	
				if(i == length-1){
					char_count++;
					printf("%c%d",current_char,char_count);
				}
				else{
					char_count++;
				}
			}
		}
	}
	else if(command == 'D') {
		printf("in condition\n");
		for(i = 0; i < length; i++){
			int letter_count = input[i+1] - '0';
		//	printf("current letter: %c letter count: %d\n",input[i],letter_count);
		
			int j;
			for(j = 0; j < letter_count; j++){
				printf("%c",input[i]);
			}
		i++;
		}
	}
	printf("\n");	
	return 0;
}
