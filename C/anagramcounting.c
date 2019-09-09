#include <stdio.h>
#include <string.h>
long long factorial(long long length){
    if(length == 1){
        return length;
    }
    else{
        return length * factorial(length - 1);
    }
}
int main(){
    
    char word[100];
    char max_input[200];
    

    while ((fgets(max_input,sizeof max_input,stdin) != NULL) && (max_input[0] != '\n')){
                if (sscanf(max_input,"%s",word) == 1){
                        int length = strlen(word);
                        
                        printf("%lli\n",factorial((long long) length));
                        fflush(stdout);
                }
    }
    
    
    return 0;
}
