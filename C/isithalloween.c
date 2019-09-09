#include <stdio.h>
#include <string.h>
int main(){
    
    char oct[] = "OCT";
    char dec[] = "DEC";
    char month[10];
	int day;
    scanf("%s %d",month,&day); 
    if ((strcmp(oct,month) == 0) && (day == 31) || (strcmp(dec,month) == 0)&& (day == 25)){
        printf("yup\n");
    }
    else {
        printf("nope\n");
    }
    
    return 0;
    
}
