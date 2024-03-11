//WAP to read sentence from file 
//a) using string
//b) using character
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
	//Read sentence from file using string
	printf("Read Sentence From File\na)Using String:\n");
	while(fscanf(fptr, "%s %s", str) != EOF)
	{
		printf("Student %d: %s\n", i, str);
		i++;
	}	
	fclose(fptr);
	
	//Read Sentence from file using character
	fptr = fopen("Test.txt", "r");
	char str1;
	int j = 1;
	if(fptr == NULL) {
      printf("Error opening file");
      return(-1);
  	 }
	//Read sentence from file using string
	printf("\nb)Using Character:\n");
	printf("Student's Details: \n");
	printf("Student %d: ", j);
	while(feof(fptr) == 0)
	{
		fscanf(fptr, "%c", &str1);
		printf("%c", str1);
		if(str1 == '\n')
		{
			break;
		}
	}	
	j++;
	printf("Student %d: ", j);
	while(feof(fptr) == 0)
	{
		fscanf(fptr, "%c", &str1);
		printf("%c", str1);
	}
	fclose(fptr);
	return 0;
}