#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	system("mode 100, 50");
	system ("color 2");

	int iPin,ichoice,ichoice2,ichoice3;
	int icard = 0,pin=1234,itimes=0,iamount= 1,icontinueTransaction = 1; //pin need to be do in list
    // balance in bank
	char  iname[15]; //  insert name
	

	
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
	float iBankbalance = 5000;
    
    

    printf("\n\n\t\t\t           Do u have anything we can help?\n");
 	printf("\n\t\t\t\t   [1] Yes");
	printf("\n\t\t\t\t   [2] No\n");
	scanf("%d",&ichoice3);
	if (ichoice3 == 1){
		
		printf("\n\n\t\t\t       [ Welcome to Liong's ATM Simulator ]\n\n");  // need to add the font
	}
	else{
		printf("\n\n\t\t\t hoping u can try to use our bank service!! :)\n\n");

		
	}
	




	printf("\n\n\t\t\t             Please enter ur name:");
	scanf("%s",&iname);
	printf("\n%s",iname);

	

	
	printf("\n\n\t\t\t        |          PLEASE            |   ");
	printf("\n\t\t\t        |         your card          |   ");
	printf("\n\t\t\t        |     In the ATM machine     |   \n\n\n\n");
	
	printf( "\t\t\t   ----------------------------------------- \n");
	printf( "\t\t\t   ||||    __________________________    |||| \n");
	printf( "\t\t\t   ------------------------------------------ \n\n\n\n");
	
	while(pin !=iPin){
		//printf("Hi, %d, you need to enter ur pin ",iname);
		printf("\nEnter your pin :");
		scanf("%d",&iPin);
		if (iPin != pin){
			Beep(610,500);
			printf("Invalide pin !!!!");
		}
		itimes++;

		if(itimes == 3 && pin != iPin){
			exit(0);
		}
	}

	while(icontinueTransaction != 0){
			

		printf("\n\t\t\t ==========**Available transaction*===============");
		printf("\n\n\t\t\t[1] Cash withdrawal");
		printf("\n\t\t\t[2] Cash deposition");
		printf("\n\t\t\t[3] Balance Checking.");
		printf("\n\n\t\t      Please select your option:");
		scanf("%d",&ichoice);


		switch(ichoice){
			
			case 1:
						
				while(iamount% 10 != 0){
					printf("\n\t\t Please choose the amount that u want  u want to withdraw:");
					printf("\n\t\t[1] RM10 ");
					printf("\n\t\t[2] RM50");
					printf("\n\t\t[3] RM100");
					printf("\n\t\t[4] >RM100");
					scanf("%d",&ichoice2);
					switch(ichoice2){
						case 1:
							iamount =10;
							continue;
							
						case 2:
							iamount =50;
							continue;
							
						case 3:
							iamount =100;
							continue;
							
						default :
						    printf("\n\t\tEnter the amount:");
						    scanf("%d",&iamount);
						    if (iamount % 100 != 0)
						    printf("\n\t the amount should be multipled of 100");

		                
					}
				
				
				}			
				if(iBankbalance < iamount){
					printf("\n\t Sorry insuffiecient balance");	
					iamount= 1;				
					break;
				}
				else{
					iBankbalance -= iamount;
					printf("\n\t\t you have withdrawn RM%d.Your new balance is %.2f",iamount,iBankbalance);
					iamount= 1;
					break;
				}
				
			case 2:
				printf("\n\t\t Please enter the amount :");
				scanf("%d", &iamount);
				iBankbalance +=iamount;

				printf("\n\t\t You have deposited RM%d. Your new balance is %.2f", iamount , iBankbalance);
				printf(" \n\t\t ============== Have a Nice day ================");
				iamount = 1;
				break;	

			case 3:

				printf("\n\t\t Your balance is RM%.2f",iBankbalance);
			    break;
    
                          
				
            default:
			    Beep(610,500);
                printf("\n\t\t Invalid Option!!!");	
				break;
	}
    printf("\n\t\tDo you wish to perform another transaction? Press 1[Yes],0[No]");
	scanf("%d",&icontinueTransaction);
	if(icontinueTransaction == 0)
	printf("\n\n\t\t\t         Liong's ATM Simulator Receipt   \n\n\n             ");
	printf("\n======================================================================================\n\n");
	printf("\n\nName: %s",iname);

	printf("Card: 0929 0517 2002 0019");
	//printf("\nAmount Withdrawl: RM%d",iamount*ichoice);
	printf("\nAmount fee: RM0.00");
	printf("\nAmount Balance: RM%.2f",iBankbalance);
	printf("\n\n======================================================================================");
	printf("\n\t\t Thanks for choosing our Bank ! %s\n\t\t Hope u have a Nice Day\n",iname);
	

    }// print receipt
    
	return 0;
}

												

		
