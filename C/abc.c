/*
You will be given three integers A, B and C. The numbers will not be given in that exact order, but we do know that A is less than B and B less than C. In order to make for a more pleasant viewing, we want to rearrange them in a given order.

Input
The first line contains the three positive integers A, B and C, not necessarily in that order. The three numbers will be less than or equal to 100.

The second line contains three uppercase letters ’A’, ’B’ and ’C’ (with no spaces between them) representing the desired order.

Output
Output A, B and C in the desired order on a single line, separated by single spaces.
*/

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
