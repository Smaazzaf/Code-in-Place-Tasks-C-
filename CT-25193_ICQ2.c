#include <stdio.h>

int main() {
    int var1, var2, var3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d", &var1);
    scanf("%d", &var2);
    scanf("%d", &var3);

    if ((var1 + var2 > var3) && (var1 + var3 > var2) && (var2 + var3 > var1)) {
        if (var1 == var2 && var2 == var3) {
            printf("This is an Equilateral Triangle\n");
        }
        else if (var1 == var2 || var1 == var3 || var2 == var3) {
            printf("This is an Isosceles Triangle\n");
        }
        else {
            printf("This is a Scalene Triangle\n");
        }
    }
    else {
        printf("Sides entered are invalid for a triangle\n");
    }

    return 0;
}
		
	
	
	
