#include <stdio.h>
#include <stdlib.h>

int main(){
    
    long long int a;
    long long int b;
    char max_input[100000];
    
    while ((fgets(max_input,sizeof max_input,stdin) != NULL) && (max_input[0] != '\n')){
                if (sscanf(max_input,"%lli %lli",&a,&b) == 2){
                        printf("%lli\n",llabs(a-b));
                        fflush(stdout);
                }
    }
    return 0;
}
