#include <stdio.h>
#include <stdlib.h>

 main()
{
	FILE *fptr;
	char fname[20];
	char str;

	fptr = fopen ("logo.txt", "r");  
	if (fptr == NULL)
	{
		printf(" File does not exist or cannot be opened.\n");
		exit(0);
	}

	str = fgetc(fptr);
	while (str != EOF)
		{
			printf ("%c", str);
			str = fgetc(fptr);
		}
	fclose(fptr);
    printf("\n\n");
    return 0;
}

//C:\\Users\\Asus\\Desktop\\Code\\Cfree\\C-free 5\\Assignments\\logo.txt