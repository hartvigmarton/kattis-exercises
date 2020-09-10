/*
A long time ago, the Egyptians figured out that a triangle with sides of length 3, 4, and 5 had a right angle as its largest angle. You must determine if other triangles have a similar property.

Input
Input represents several test cases (at most 1000), followed by a line containing 0 0 0. Each test case has three positive integers, at most 30000, denoting the lengths of the sides of a triangle.

Output
For each test case, a line containing “right” if the triangle is a right triangle, and a line containing “wrong” if the triangle is not a right triangle.
*/

#include <stdio.h>

int main(){

    	int sides[3];

	while(1){
        		scanf("%d %d %d",&sides[0],&sides[1],&sides[2]);
			if((sides[0] == 0) && (sides[1] == 0) && (sides[2] == 0)){
				break;
			}
			else if((sides[0] * sides[0]) + (sides[1] * sides[1]) == sides[2] * sides[2]){
				printf("right\n");
			}
			else if((sides[1] * sides[1]) + (sides[2] * sides[2]) == sides[0] * sides[0]){
				printf("right\n");
			}
			else if((sides[0] * sides[0]) + (sides[2] * sides[2]) == sides[1] * sides[1]){
				printf("right\n");
			
		else{
			printf("wrong\n");
		}
	}
    return 0;
}
