#include<stdio.h>
#include<string.h>
int main()
{
	char first[50] = "Syed Maaz ";
    char last[] = "Zafar";
    strcat(first, last);
    printf("Full name: %s\n", first);
}