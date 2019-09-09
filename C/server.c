#include <stdio.h>

int main(){
	int nr_tasks;
	int time;
	scanf("%d %d",&nr_tasks,&time);
	
	int elapsed_time = 0;
	int runnable_tasks = 0;
	int i;
	for(i = 0; i < nr_tasks; i++){
		int task;
		scanf("%d ",&task);
		if(task + elapsed_time <= time){
			runnable_tasks++;
			elapsed_time += task;
		}
		else{
			break;
		}
	}
	printf("%d\n",runnable_tasks);
	
	return 0;
}
