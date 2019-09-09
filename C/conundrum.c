#include <stdio.h>
#include <string.h>

int main(){
    
    char cyphertext[300];
    
    scanf("%s",cyphertext);
    
    int len = strlen(cyphertext);
    int solution = 0;
    int i;
    while (i < len){
        if(i < len && (cyphertext[i] != 'p' && cyphertext[i] != 'P')){
            solution++;
        }
        if(i+1 < len && (cyphertext[i+1] != 'e' && cyphertext[i+1] != 'E')){
            solution++;
        }
        if(i+2 < len && (cyphertext[i+2] != 'r' && cyphertext[i+2] != 'R')){
            solution++;
        }
	i = i + 3;
    }
    
    printf("%d\n",solution);
    return 0;
}
