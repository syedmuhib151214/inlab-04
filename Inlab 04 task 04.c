#include<stdio.h>
int main()
{
	int yr;
	printf("Enter Year");
	scanf("%d",&yr);
	
	
	if(yr%4==0&&yr%100!=0||yr%400==0){
		printf("It is a leap year",yr);
	}
	else{
		printf("It is not a leap year");
	}
	return 0;
}
