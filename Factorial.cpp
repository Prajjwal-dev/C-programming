//WAP to print factorial of n number
#include <stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter a positive number: ");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,fact(n));
	return 0;
}
int fact(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else{
		return n + fact(n-1);
	}
}