/*
DRM Encryption is a new kind of encryption. Given an encrypted string (which we’ll call a DRM message), the decryption process involves three steps: Divide, Rotate and Merge. This process is described in the following example with the DRM message “EWPGAJRB”:

Divide
– First, divide the message in half to “EWPG” and “AJRB”.
Rotate
– For each half, calculate its rotation value by summing up the values of each character (A=0,B=1,…,Z=25). The rotation value of “EWPG” is 4+22+15+6=47. Rotate each character in “EWPG” 47 positions forward (wrapping from Z to A when necessary) to obtain the new string “ZRKB”. Following the same process on “AJRB” results in “BKSC”.
Merge
– The last step is to combine these new strings (“ZRKB” and “BKSC”) by rotating each character in the first string by the value of the corresponding character in the second string. For the first position, rotating ‘Z’ by ‘B’ means moving it forward 1 character, which wraps it around to ‘A’. Continuing this process for every character results in the final decrypted message, “ABCD”.
Input
The input contains a single DRM message to be decrypted. All characters in the string are uppercase letters and the string’s length is even and ≤15000.

Output
Display the decrypted DRM message.
*/
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
