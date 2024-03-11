//File handling fputs()
#include <stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("Test1.txt", "a+");
	if(fptr == NULL) {
      printf("Error opening file");
      return(-1);
  	 }
	char str1[100];
	printf("Enter a sentence: ");
	gets(str1);
	fputs(str1, fptr);
	fclose(fptr);
	return 0;
}