#include<stdio.h>
int main()
{
	int a,b,sum,prod,quotient,difference;
	char operation;
	printf("Enter First Number");
	scanf("%d",&a);
	printf("Enter Second Number");
	scanf("%d",&b);
	printf("Enter The Operator");
	scanf(" %c",&operation);
	switch(operation){
		case '+':
			sum=a+b;
			printf("The Sum is %d",sum);
			break;
			
		case '-':
			difference=a-b;
			printf("The Difference is %d",difference);
			break;
	
		case '*':
			prod=a*b;
			printf("The Product is %d",prod);
			break;
	
		case '/':
			quotient=a/b;
			printf("The Quotient is %d",quotient);
			break;
	
	default:
		printf("Invalid Operation");
}
	
		return ;
}
