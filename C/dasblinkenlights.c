#include <stdio.h>

int main(){
    int a;
    int b;
    int interval;
    scanf("%d %d %d",&a,&b,&interval);
    char answer[3] = "no";
    int i;
    for (i = 1; i <= interval;i++){
    
        if((i % a == 0) && (i % b == 0)){
                (void)strncpy(answer, "yes", sizeof(answer));
                break;
        }
    }
    printf("%s\n",answer);                                                            return 0;
    }
