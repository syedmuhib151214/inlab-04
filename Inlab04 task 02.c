#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter The first number:");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("Largest is a");
	}
	else if(b>a&&b>c){
		printf("Largest is b");
		
	}
	else{
		printf("Largest is c");
	}
	return 0;
	
}
