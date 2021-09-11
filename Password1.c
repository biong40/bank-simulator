#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	const int maxPasswordLength = 15;
	char password[maxPasswordLength+ 1];
	char ch;
	char loginpassword[] = "Learning Lad";
	int characterPosition = 0;
	printf("Pls enter the password.Length 1-%d\n", maxPasswordLength);
	while(1){
		ch =getch();
		if(ch = 13){
			break;
		}else if(ch ==8){
			if(characterPosition > 0){
				characterPosition--;
				password[characterPosition]='\0';
				printf("\b \b");
			}
		}else if( ch == 32 || ch == 9){
			continue;
		}else{
			if(characterPosition < maxPasswordLength){
				password[characterPosition]= ch;
				printf("*");	
			}else{
				printf("\nYour Password Length Exceeds max maxPassword Legth.Only First %d characters will be considered  ");
				break;
				
			}
		}
		
	}
	password[characterPosition] = '\0';
	printf("\n");
	if(strlen(password)== 0){
		printf("No password Entered");
	}else{
		if(strcmp(password,loginpassword)== 0){
			printf("Login Success");
		}
	}
	
}