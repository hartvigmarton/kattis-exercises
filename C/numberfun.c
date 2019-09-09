#include <stdio.h>

int main(){
    
    
    int nr_tests;
    scanf("%d",&nr_tests);
    
    int i;
    for( i = 0; i < nr_tests; i++){
        int a;
        int b;
        int c;
        scanf("%d %d %d",&a,&b,&c);
        
        if ((a + b == c) || (a * b == c) || ((float)a /(float)b == (float)c) || (b / a == c) || (a - b == c) || (b - a == c)){
            printf("Possible\n");
        }
        else{
            printf("Impossible\n");
        }
        
    }
    
    return 0;
}
