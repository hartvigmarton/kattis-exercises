/*
Alex wants to send a love poem to his girlfriend Bridget. Unfortunately, she has a nosy friend, Ellen, who might intercept his message and invade their privacy.

To prevent this, Alex has invented a scheme to make his missives indecipherable to Ellen. He arranges the letters into a square, which is rotated a quarter-turn clockwise, and then he puts the resulting letters on a single line again. (For simplicity’s sake, Alex doesn’t use whitespace or punctuation in his poems.)

For example, the text “RosesAreRedVioletsAreBlue” would be encoded as
“eedARBtVrolsiesuAoReerles” using the following intermediate steps:

R

o

s

e

s

A

r

e

R

e

d

V

i

o

l

e

t

s

A

r

e

B

l

u

e

⇒
e

e

d

A

R

B

t

V

r

o

l

s

i

e

s

u

A

o

R

e

e

r

l

e

s

Ellen has intercepted some of Alex’s messages but they make no sense to her. Can you write a program to help her decode them?

Input
On the first line one positive number: the number of test cases, at most 100. After that per test case:

one line with an encoded message: a string consisting of upper-case and lower-case letters only. The length of the message is a square between 1 and 10 000 characters.

Output
Per test case:

one line with the original message.

*/
#include <stdio.h>
#include <math.h>
int main(){
	
	char input[10000];
	scanf("%s",input);
	
	int length = strlen(input);
	double dimension = sqrt((double)length);
	char encoded[(int)dimension][(int)dimension];
	
	printf("%f\n",dimension);
	return 0;
}
