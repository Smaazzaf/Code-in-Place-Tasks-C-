#include <stdio.h>

int main() {
    char charac;
	printf("Enter a character: ");
    scanf("%c", &charac);

    if (charac >= 'A' && charac <= 'Z') {
        printf("'%c' is an Uppercase Letter.", charac);
    }
    else if (charac >= 'a' && charac <= 'z') {
        printf("'%c' is a Lowercase Letter.", charac);
    }
    else if (charac >= '0' && charac <= '9') {
        printf("'%c' is a Digit.", charac);
    }
    else {
        printf("'%c' is a Special Character.", charac);
    }

    return 0;
}