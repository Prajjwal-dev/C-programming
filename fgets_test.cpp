//File handling fgets()
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
   if( fgets (str, 100, fptr)!= NULL ) {
      /* writing content to stdout */
      printf("Student %d: %s\n", i, str);
//	puts(str);
      i++;;
   }
	fclose(fptr);
	return 0;
}