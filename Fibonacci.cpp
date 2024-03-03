//WAP to print the fibonacii series of n number
#include<stdio.h>
int fib(int);
int main()
{
	int n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	printf("Fibonacci series upto %d terms: \n",n);
	for(int i = 0;i < n;i++)
	{
		printf("%d\t",fib(i));
	}
		printf("\n");	
	return 0;
}
int fib(int n)
{
	if(n == 0 || n == 1)
	{
		return n;
	}
	else{
		return fib(n - 1) + fib(n - 2);
	}
}