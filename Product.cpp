//WAP to find the product of n natural number
#include <stdio.h>
int product(int);

int main()
{
	int n;
	printf("Enter a positive integer:");
	scanf("%d",&n);
	printf("Product of %d natural number: %d",n,product(n));
	return 0;	
}
int product(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else{
		return n * product(n-1);
	}
}