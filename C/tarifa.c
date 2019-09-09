#include <stdio.h>

int main(){
    
    int data;
    int months;
    scanf("%d",&data);
    scanf("%d",&months);
    
    int available = data;
    int i;
    for(i = 0;i < months;i++){
        int internet_use;
        scanf("%d",&internet_use);
        available = available - internet_use;
        available += data;
    }
    printf("%d\n",available);
    return 0;
}
