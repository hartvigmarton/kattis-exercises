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
