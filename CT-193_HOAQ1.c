#include<stdio.h>
int main (void)
{
	float dosage;
	float weight;
	printf("Enter patients weight:");
	scanf("%f",&weight);
	dosage = weight*0.8;
	printf("The dosage (mg) for patient is: %f",dosage);
	
	
}
