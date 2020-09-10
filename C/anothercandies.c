/*
A class went to a school trip. And, as usually, all N kids have got their backpacks stuffed with candy. But soon quarrels started all over the place, as some of the kids had more candies than others. Soon, the teacher realized that he has to step in: "Everybody, listen! Put all the candies you have on this table here!"

Soon, there was quite a large heap of candies on the teacher’s table. "Now, I will divide the candies into N equal heaps and everyone will get one of them." announced the teacher.

"Wait, is this really possible?" wondered some of the smarter kids.

Task
You are given the number of candies each child brought. Find out whether the teacher can divide the candies into N exactly equal heaps. (For the purpose of this task, all candies are of the same type.)

Input
The first line of the input file contains an integer T,1≤T≤100 specifying the number of test cases. Each test case is preceded by a blank line.

Each test case looks as follows: The first line contains N,1≤N≤20000 – the number of children. Each of the next N lines contains the number of candies one child brought. Each child has less than 263.

Output
For each of the test cases output a single line with a single word "YES" if the candies can be distributed equally, or "NO" otherwise.
NOT FINISHED!!
*/
#include <stdio.h>

int main(){
	
	int nr_tests;
	scanf("%d",&nr_tests);

	
	int i;
	for(i = 0;i < nr_tests;i++){
		printf("\n");
		int nr_kids;
		scanf("%d",&nr_kids);
		
		int total_candies = 0;
		int j;
		for(j = 0;j < nr_kids;j++){
			int candies;
			scanf("%d",&candies);
			total_candies = total_candies + candies;
		}
		if(total_candies % nr_kids == 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}


	return 0;
}
