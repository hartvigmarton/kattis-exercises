#include <stdio.h>

int main(){
		
	int nr_tests;
	scanf("%d",&nr_tests);

	int i;
	for(i = 0; i < nr_tests; i++){
		int nr_students;
		scanf("%d",&nr_students);
		
		int sum = 0;
		int students[nr_students];
		int above_average = 0;
		int j;
		char space;
		for(j = 0; j < nr_students;j++){
			
			scanf("%d%c",&students[j],space);
			sum = sum + students[j];
		}
		float average = sum / nr_students;
		for( j = 0; j < nr_students;j++){
			if(students[j] > (int)average){
			above_average++;
			}
		}
		printf("%.3f%\n",((float)above_average/nr_students) * 100);
	}

	return 0;
}
