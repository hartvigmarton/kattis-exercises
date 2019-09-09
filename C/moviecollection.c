#include <stdio.h>
#include <stdlib.h>
/*
Mr. K. I. has a very big movie collection. He has organized his collection in a big stack. Whenever he wants to watch one of the movies, he locates the movie in this stack and removes it carefully, ensuring that the stack doesn’t fall over. After he finishes watching the movie, he places it at the top of the stack.

Since the stack of movies is so big, he needs to keep track of the position of each movie. It is sufficient to know for each movie how many movies are placed above it, since, with this information, its position in the stack can be calculated. Each movie is identified by a number printed on the movie box.

Your task is to implement a program which will keep track of the position of each movie. In particular, each time Mr. K. I. removes a movie box from the stack, your program should print the number of movies that were placed above it before it was removed.

Input
On the first line a positive integer: the number of test cases, at most 100. After that, for each test case output:

one line with two integers m and r (1≤m,r≤100000): the number of movies in the stack and the number of locate requests, and

one line with r integers a1,…,ar (1≤ai≤m) representing the identification numbers of movies that Mr. K. I. wants to watch.

For simplicity, assume that the initial stack contains the movies with identification numbers 1,2,…,m in increasing order, where the movie box with label 1 is the top-most box.

Output
Per test case:

one line with r integers, where the i-th integer gives the number of movie boxes above the box with label ai, immediately before this box is removed from the stack.

Note that after each locate request ai, the movie box with label ai is placed at the top of the stack.*/

void fill_filmstack(int film_stack[],int nr_films){

        int i;
        for(i = 0; i < nr_films;i++){
                film_stack[i] = i + 1;
        }
}

void update_stack(int film_stack[],int request,int film_pos){
	int tmp = film_stack[0];
	film_stack[0] = request;
	int i;
	for(i = 0; i < film_pos;i++){
		int tmp2 = film_stack[i+1];
		film_stack[i+1] = tmp;
		tmp = tmp2;
	}
}


void find_films(int film_stack[],int nr_queries,int nr_films){
        int j;
        char space;
	int largest_query = 0;
        for(j = 0; j < nr_queries; j++) {
                int request;
                scanf("%d%c",&request,&space);
		if( request > largest_query){
			printf("%d ",request - 1);
			update_stack(film_stack,request,request);
			largest_query = request;
		}
		else{
			int l;
                	for(l = 0; l < nr_films; l++){
                        	if(request == film_stack[l]){
					printf("%d ",l);
					update_stack(film_stack,request,l);
                                	break;
                        	}
                	}
		}
        }
        printf("\n");
}

void run_test(int nr_tests){
        
	//loop where user enters number of films and queries fupdatingt
	int a;
        for(a = 0; a < nr_tests;a++){
                int nr_queries;
                int nr_films;
                scanf("%d %d", &nr_films,&nr_queries);
                int film_stack[nr_films];
		
                fill_filmstack(film_stack,nr_films);
                find_films(film_stack,nr_queries,nr_films);
        }
}

int main(){
        int nr_tests;
        scanf("%d",&nr_tests);
        run_test(nr_tests);
        return 0;
}
