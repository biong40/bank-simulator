#include <stdio.h>
#include <conio.h>
int main()
{
char password[10], ch, gl;
int i, j;

printf("Password : ");
for(i = 0;i < 100;i++)
{
ch = getch();
if(ch == 13)
break;
password[i] = ch;
ch = '*' ;
printf("%c ", ch);
}
password[i] = '\0';
printf("\nYour password is hacked : ");
for(j = 0;j < i;j++)
printf("%c ", password[j]);
password[j] = gl;
if (gl == "1234")
{
	printf("1234");
}
else;{
	print("Invalid");
}
return 0;
}
/*			pin[i]=ch;
			i++;
			printf("*")
			*/