#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("\n Enter the first number: ");
	scanf("%d", &a);
	printf("\n Enter the second number: ");
	scanf("%d", &b);
	printf("\n Enter the third number: ");
	scanf("%d", &c);
	
	if(a>b && a>c)
	{
		printf("\n A is the largest number\n");
	}
	else if(b>a && b>c)
	{
		printf("B is the largest number\n");
	}
	else if(c>a && c>b)
	{
		printf("C is the largest number\n");
	}
	else if(a==b && a==c)
	{
		printf("All values are equal\n");
	}
	else if(a==b && a!=c && a>c && b>c)
	{
		printf("A and B both are the largest number\n");
	}
	else if(b==c && b!=a && b>a && c>a)
	{
		printf("B and C both are the largest number\n");
	}
	else if(c==a && c!=b && c>b && a>b)
	{
		printf("A and C both are the largest number\n");
	}
}
