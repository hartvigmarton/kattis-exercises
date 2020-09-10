/*
It is said that 90% of frosh expect to be above average in their class. You are to provide a reality check.
Input
The first line of standard input contains an integer 1≤C≤50, the number of test cases. C data sets follow. Each data set begins with an integer, N, the number of people in the class (1≤N≤1000). N integers follow, separated by spaces or newlines, each giving the final grade (an integer between 0 and 100) of a student in the class.

Output
For each case you are to output a line giving the percentage of students whose grade is above average, rounded to exactly 3 decimal places.
*/

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
