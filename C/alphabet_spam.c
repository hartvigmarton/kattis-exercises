/*
About 90 percent of the 300 billion emails sent every day are spam. Thus, a fast spam detection mechanism is crucial for large email providers. Lots of spammers try to circumvent spam detection by rewriting words like “M0n3y”, “Ca$h”, or “Lo||ery”.
A very simple and fast spam detection mechanism is based on the ratios between whitespace characters, lowercase letters, uppercase letters, and symbols. Symbols are defined as characters that do not fall in one of the first three groups.

Input
The input consists of:

one line with a string consisting of at least 1 and at most 100000 characters.

A preprocessing step has already transformed all whitespace characters to underscores (_), and the line will consist solely of characters with ASCII codes between 33 and 126 (inclusive).

Output
Output four lines, containing the ratios of whitespace characters, lowercase letters, uppercase letters, and symbols (in that order). Your answer should have an absolute or relative error of at most 10−6.
*/

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
