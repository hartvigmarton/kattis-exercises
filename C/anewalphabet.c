/*
A New Alphabet has been developed for Internet communications. While the glyphs of the new alphabet don’t necessarily improve communications in any meaningful way, they certainly make us feel cooler.

You are tasked with creating a translation program to speed up the switch to our more elite New Alphabet by automatically translating ASCII plaintext symbols to our new symbol set.

The new alphabet is a one-to-many translation (one character of the English alphabet translates to anywhere between 1 and 6 other characters), with each character translation as follows:

Original

New

English Description

Original

New

English Description

a

@

at symbol

n

[]\[]

brackets, backslash, brackets

b

8

digit eight

o

0

digit zero

c

(

open parenthesis

p

|D

bar, capital D

d

|)

bar, close parenthesis

q

(,)

parenthesis, comma, parenthesis

e

3

digit three

r

|Z

bar, capital Z

f

#

number sign (hash)

s

$

dollar sign

g

6

digit six

t

']['

quote, brackets, quote

h

[-]

bracket, hyphen, bracket

u

|_|

bar, underscore, bar

i

|

bar

v

\/

backslash, forward slash

j

_|

underscore, bar

w

\/\/

four slashes

k

|<

bar, less than

x

}{

curly braces

l

1

digit one

y

`/

backtick, forward slash

m

[]\/[]

brackets, slashes, brackets

z

2

digit two

For instance, translating the string “Hello World!” would result in:

[-]3110 \/\/0|Z1|)!
Note that uppercase and lowercase letters are both converted, and any other characters remain the same (the exclamation point and space in this example).

Input
Input contains one line of text, terminated by a newline. The text may contain any characters in the ASCII range 32–126 (space through tilde), as well as 9 (tab). Only characters listed in the above table (A–Z, a–z) should be translated; any non-alphabet characters should be printed (and not modified). Input has at most 10000 characters.

Output
Output the input text with each letter (lowercase and uppercase) translated into its New Alphabet counterpart.
*/
#include <stdio.h>
#include <string.h>

int main(){
	
	char input[10000];
	scanf("%[^\n]%*c",input);
	int length = strlen(input);
	
	int i;
	for(i = 0; i < length; i++){
		switch(input[i])
		{
			case 'a':
				printf("@");
				break;
			case 'b':
				printf("8");
				break;
			case 'c':
				printf("(");
				break;
			case 'd':
				printf("|)");
				break;
			case 'e':
				printf("3");
				break;
			case 'f':
				printf("#");
				break;
			case 'g':
				printf("6");
				break;
			case 'h':
				printf("[-]");
				break;
			case 'i':
				printf("|");
				break;
			case 'j':
				printf("_|");
				break;
			case 'k':
				printf("|<");
				break;
			case 'l':
				printf("1");
				break;
			case 'm':
				printf("[]\\/[]");
				break;
			case 'n':
				printf("[]\\[]");
				break;
			case 'o':
				printf("0");
				break;
			case 'p':
				printf("|D");
				break;
			case 'q':
				printf("(,)");
				break;
			case 'r':
				printf("|Z");
				break;
			case 's':
				printf("$");
				break;
			case 't':
				printf("']['");
				break;
			case 'u':
				printf("|_|");
				break;
			case 'v':
				printf("\\/");
				break;
			case 'w':
				printf("\\/\\/");
				break;
			case 'x':
				printf("}{");
				break;
			case 'y':
				printf("`/");
				break;
			case 'z':
				printf("2");
				break;
			case 'A':
                                printf("@");
                                break;
                        case 'B':
                                printf("8");
                                break;
                        case 'C':
                                printf("(");
                                break;
                        case 'D':
                                printf("|)");
                                break;
                        case 'E':
                                printf("3");
                                break;
                        case 'F':
                                printf("#");
                                break;
                        case 'G':
                                printf("6");
                                break;
                        case 'H':
                                printf("[-]");
                                break;
                        case 'I':
                                printf("|");
                                break;
                        case 'J':
                                printf("_|");
                                break;
                        case 'K':
                                printf("|<");
                                break;
                        case 'L':
                                printf("1");
                                break;
                        case 'M':
                                printf("[]\\/[]");
                                break;
                        case 'N':
                                printf("[]\\[]");
                                break;
                        case 'O':
                                printf("0");
                                break;
                        case 'P':
                                printf("|D");
                                break;
                        case 'Q':
                                printf("(,)");
                                break;
                        case 'R':
                                printf("|Z");
                                break;
                        case 'S':
                                printf("$");
                                break;
                        case 'T':
                                printf("']['");
                                break;
                        case 'U':
                                printf("|_|");
				break;
			case 'V':
                                printf("\\/");
                                break;
                        case 'W':
                                printf("\\/\\/");
                                break;
                        case 'X':
                                printf("}{");
                                break;
                        case 'Y':
                                printf("`/");
                                break;
                        case 'Z':
                                printf("2");
                                break;

			default:
				printf("%c",input[i]);
		}
	}
	printf("\n");
	return 0;
}
