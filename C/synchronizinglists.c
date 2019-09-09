#include <stdio.h>

int main(){
	
	while(1){
		int list_length;
		scanf("%d",&list_length);
		if (list_length == 0){
			break;
		}
		else {
			int list_a[list_length];
			int list_b[list_length];
			int list_sorted[list_length];
			int i;
			int a_smallest;
			int a_largest = 0;
			int smallest_pos = 0;
			int largest_pos = 0;
			for(i = 0; i < list_length; i++){
				scanf("%d",&list_a[i]);
				if (i == 0){
					a_smallest = list_a[i];
				}
				else if ( list_a[i] > a_largest){
					a_largest = list_a[i];
					largest_pos = i;
				}
				
				
			}
			for(i = 0; i < list_length; i++){
				scanf("%d",&list_b[i]);
			}
	}
	return 0;
}
