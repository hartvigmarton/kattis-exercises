#include <stdio.h>
#include <string.h>
int main(){
    
    	char input[250];
    	scanf("%s",input);
	 
    	int length = strlen(input);
    
    	char output[250];
    	char current_char = input[0];
	output[0] = current_char;
    	int output_cursor = 1;
    	int i;
    	for(i = 0;i < length;i++){
        	if (input[i] != current_char){
            		output[output_cursor] = input[i];
            		current_char = input[i];
            		output_cursor++;
        	}
        
    	}
	output[output_cursor] = '\0';
	printf("%s\n",output);	
    	return 0;
}
