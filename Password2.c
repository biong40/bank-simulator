#include<stdio.h>


#define ENTER 13
#define TAB 9
#define BSKP 8
#define SPACE 32

 int main()
{
	char pin[100];
	int i=0;
	char ch;
	printf("RNter your pin:\n");
	while(1)
	{
		ch=getch();
		if(ch==ENTER)
		{
			pin[i]=0;
			break;
		}
		else if( ch == BSKP)
		{
			if (i>0)
			{
				i--;
				printf("\b \b");
			}
		}
		else if(ch== TAB || ch==SPACE)
		{
			continue;
		}
		else{
			pin[i]=ch;
			i++;
			printf("*");
		}
		
		
	}
	printf("\n\n Your password is :%c", pin);
	printf("\nLength:%d",i);
	getch();
	return 0;


		
}