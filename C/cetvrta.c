/*
Mirko needs to choose four points in the plane so that they form a rectangle with sides parallel to the axes. He has already chosen three points and is confident that he hasn’t made a mistake, but is having trouble locating the last point. Help him.

Input
Each of the three points already chosen will be given on a separate line. All coordinates will be integers between 1 and 1000.

Output
Output the coordinates of the fourth vertex of the rectangle.
NOT FINISHED!!
*/
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
