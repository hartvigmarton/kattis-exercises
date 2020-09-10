/*
You have just moved from Waterloo to a big city. The people here speak an incomprehensible dialect of a foreign language. Fortunately, you have a dictionary to help you understand them.

Input
Input consists of up to 100000 dictionary entries, followed by a blank line, followed by a message of up to 100000 words. Each dictionary entry is a line containing an English word, followed by a space and a foreign language word. No foreign word appears more than once in the dictionary. The message is a sequence of words in the foreign language, one word on each line. Each word in the input is a non-empty sequence of at most 10 lowercase letters.

Output
Output is the message translated to English, one word per line. Foreign words not in the dictionary should be translated as “eh”.
NOT FINISHED!!
*/
#include <stdio.h>
#include <string.h>

typedef struct Entry{
	char english[10];
	char foreign[10];
	Entry *left;
	Entry *right;
}Entry;

void set_leaf(Entry root,Entry leaf){
	
	if(strcmp(root.foreign,leaf.foreign) == 1){
		}
}
		

int main(){
	
	Entry root;
	char max_input[100000];
	int entry_index = 0;
	char english[100];
	char foreign[100];
	int root_init = 0;
	
	while ((fgets(max_input,sizeof max_input,stdin) != NULL) && (max_input[0] != '\n')){
		Entry entry;
		if (sscanf(max_input,"%s %s",entry.english,entry.foreign) == 2){
			if(root_init == 0){
				root = entry;
				root->left = NULL;
				root->right = NULL;
				root_init = 1;
			}
			else{
				set_leaf(root,entry);
		}
	}
	
	while ((fgets(max_input,sizeof max_input,stdin) != NULL) && (max_input[0] !='\n')){
		char query[100];
		if (sscanf(max_input,"%s",query) == 1){
			int i;
			int exists = 0;
			for(i = 0; i < entry_index;i++){
				if(strcmp(query,dictionary.entries[i].foreign) == 0){
					exists = 1;
					printf("%s\n",dictionary.entries[i].english);
				}
			}
			if(!exists){
				printf("eh\n");
			}
		}
	}
	
	return 0;
}
