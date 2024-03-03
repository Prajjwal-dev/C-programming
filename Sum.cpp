//WAP to print sum of n natural number
#include <stdio.h>
int sum(int);

int main()
{
	int n;
	printf("Enter a positive integer:");
	scanf("%d",&n);
	printf("Sum of %d natural number: %d",n,sum(n));
	return 0;	
}
int sum(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else{
		return n + sum(n-1);
	}
}