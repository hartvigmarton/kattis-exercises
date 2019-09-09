#include <stdio.h>

int main(){
    
    int points = 3;
    int xes[points];
    int ys[points];
    int i;
    for(i = 0;i < points; i++){

        scanf("%d %d",&xes[i],&ys[i]);
    }
    if(xes[0] != xes[1] && xes[0] != xes[2]){
        printf("%d ",xes[0]);
    }
    else if(xes[1] != xes[0] && xes[1] != xes[2]){
        printf("%d ",xes[1]);
    }
    else if(xes[2] != xes[1] && xes[2] != xes[0]){
        printf("%d ",xes[2]);
    }

	printf("%d %d %d\n",ys[0],ys[1],ys[2]);
    if(ys[0] =! ys[1] && ys[0] != ys[2]){
        printf("enter1\n");
	printf("%d\n",ys[0]);
	printf("%d %d %d\n",ys[0],ys[1],ys[2]);
    }
    else if(ys[1] =! ys[0] && ys[1] != ys[2]){
        printf("enter2\n");
	printf("%d\n",ys[1]);
    }
    else if(ys[2] =! ys[0] && ys[2] != ys[1]){
	printf("enter3\n");
        printf("%d\n",ys[2]);
    }
    
    
    return 0;
}
