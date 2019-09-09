#include <stdio.h>
#include <math.h>
inline int root(int input, int n)
{
  return (pow(input, 1./n));
}

int main(){
	int number = root(212,2);
	printf("%d\n",number);
	return 0;
}
