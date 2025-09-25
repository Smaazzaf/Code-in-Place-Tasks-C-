#include<stdio.h>
int main()
{
	int elecunit;
	float elecbill=0;
	printf("Enter the total number of units used");
	scanf("%d",&elecunit);
	if(elecunit<=100){
		elecbill = elecunit *5;
		
	}
	else if(elecunit<=200){
		elecbill = (100*5)+((elecunit -100)*7);
		
		
	}
	else{
		elecbill = (100*5) +(100*7) + ((elecunit-200)*10);
		
		
	}
	printf("The total electricity bill for this month is = Rs.%.2f",elecbill);
	
	
	
}