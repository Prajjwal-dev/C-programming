//File handling fscanf()
#include <stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("Test.txt", "r");
	if(fptr == NULL) {
      printf("Error opening file");
      return(-1);
  	 }
	char str[100];
	int i = 1;
	printf("Student's Details: \n");
	while(fscanf(fptr, "%s %s", str) != EOF)
	{
		printf("Student %d: %s\n", i, str);
		i++;
	}	
	fclose(fptr);
	return 0;
}