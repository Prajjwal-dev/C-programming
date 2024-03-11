//File handling fprintf()
#include <stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("Test.txt", "a+");
	if(fptr == NULL) {
      printf("Error opening file");
      return(-1);
  	 }
	char str[100];
	printf("Enter a sentence: ");
	gets(str);
	fprintf(fptr, "%s\n", str);
	fclose(fptr);
	return 0;
}