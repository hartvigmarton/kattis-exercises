#include <stdio.h>
#include <string.h>
int main(){
    
    int nr_tests;
    scanf("%d",&nr_tests);
    
    int i;
    for(i = 0; i < nr_tests;i++){
        char first[50];
        char second[50];
        scanf("%s",first);
	printf("%s\n",first);
        scanf("%s",second);
	printf("%s\n",second);
        
        int length = strlen(first);
        int j;
        for (j = 0;j < length; j++){
            if(first[j] == second[j]){
                printf(".");
            }
            else{
                printf("*");
            }
        }
        printf("\n\n");
    }
    
    return 0;
}
