#include<stdio.h>
#include<string.h>
int main()
{
	 char word[] = "Programming";
    char shortWord[5]; 
    strncpy(shortWord, word, 4);
    shortWord[4] = '\0'; 
    printf("Shortened word: %s\n", shortWord);
}