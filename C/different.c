/*
Write a program that computes the difference between non-negative integers.

Input
Each line of the input consists of a pair of integers. Each integer is between 0 and 1015 (inclusive). The input is terminated by end of file.

Output
For each pair of integers in the input, output one line, containing the absolute value of their difference.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    long long int a;
    long long int b;
    char max_input[100000];
    
    while ((fgets(max_input,sizeof max_input,stdin) != NULL) && (max_input[0] != '\n')){
                if (sscanf(max_input,"%lli %lli",&a,&b) == 2){
                        printf("%lli\n",llabs(a-b));
                        fflush(stdout);
                }
    }
    return 0;
}
