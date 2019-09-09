#include <stdio.h>

int main(){
    
    int numbers[3];
    
    scanf("%d %d %d",&numbers[0],&numbers[1],&numbers[2]);
    
    int a = numbers[0];
    int b = numbers[1];
    int c = numbers[2];
    
    if((numbers[0] > b) && (numbers[0] > c)){
	a = numbers[2];
        c = numbers[0];
    }
    else if((numbers[1] > a) && numbers[1] >c){
	b = numbers[2];
        c = numbers[1];
    }
    
    if(a > b){
	int tmp = a;
        a = b;
        b = tmp;
    }
    
    char abc[3];
    scanf("%s",abc);
    
    int i;
    for(i = 0;i < 3;i++){
        if(abc[i] == 'A'){
            printf("%d ",a);
        }
        else if(abc[i] == 'B'){
            printf("%d ",b);
        }
        else{
            printf("%d ",c);
        }
    }
    return 0;
}
