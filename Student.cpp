//File handling
#include <stdio.h>

int main()
{
	FILE *fptr; //Declaring fptr a pointer for file opening
	fptr = fopen("Student.txt", "a+"); //Opening a file of pointer fptr with relative path
	char str[100];
	printf("Enter a sentence: ");
	gets(str);
//	fputs(str, fptr); For unformatted write
	fprintf(fptr, "%s\n",str);
	fclose(fptr); //Closing a file of fptr pointer
	return 0;
}