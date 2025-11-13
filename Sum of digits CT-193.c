#include <stdio.h>




int main() {
	int num,digit,sum,i;
	printf("enter any number:");
	scanf("%d",&num);
	do{digit=num%10;
	sum=sum+digit;
	num=num/10;
	}
	while(num!=0)
	;printf("\nthe sum of digits is %d",sum);
	
	return 0;
}
