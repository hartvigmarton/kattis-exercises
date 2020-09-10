/*
An anagram is a reordering of the letters in a word of phrase. For example, you can rearrange the letters of terraced to get the word retraced. Rearranging them some more will give you the word cratered. You can even make dactrere and redatrec, which are both anagrams of terraced even if they are not legitimate English words.

Input
Input contains up to 200 words, one per line. Each word consists of upper- and lower-case letters (a–z) and may have as many as 100 characters. Input ends at end of file.

Output
For every input word, output the total number of unique anagrams that can be made from it. For the purpose of this problem, upper- and lower-case letters are considered distinct.
NOT FINISHED!!!
*/
#include <stdio.h>
#include <string.h>
long long factorial(long long length){
    if(length == 1){
        return length;
    }
    else{
        return length * factorial(length - 1);
    }
}
int main(){
    
    char word[100];
    char max_input[200];
    

    while ((fgets(max_input,sizeof max_input,stdin) != NULL) && (max_input[0] != '\n')){
                if (sscanf(max_input,"%s",word) == 1){
                        int length = strlen(word);
                        
                        printf("%lli\n",factorial((long long) length));
                        fflush(stdout);
                }
    }
    
    
    return 0;
}
