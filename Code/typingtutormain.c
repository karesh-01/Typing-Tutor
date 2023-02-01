#include"D:\C\Test\Typing Tutor\typingtutor.c"

int main(){

    int ch;

	time_t t;/*The time() function is defined in time.h header file.*/
	time(&t);/*This function returns the time since 00:00:00 UTC, January 1, 1970 (Unix timestamp) in seconds.*/

    Beep(523, 500);

    setColor(27);
	printf("\n\t\t                                          *                                                        ");
	printf("\n\t\t                                        * * *                                                        ");
	printf("\n\t\t                                      * * * * *                                                        ");
	printf("\n\t\t                                    * * * * * * *                                                      ");
	printf("\n\t\t                                  * * * * * * * * *                                                       ");
	printf("\n\t\t                                * * * * * * * * * * *                                                     ");
	printf("\n\t\t                              * * * * * * * * * * * * *                                                    ");
	printf("\n\t\t                            * * * * * * * * * * * * * * *                                                       ");
	printf("\n\t\t                             ~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");
	printf("\n\t\t                                WELCOME TO TYPING TUTOR    ");
	printf("\n\t\t                             ~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");
	printf("\n\t\t                            * * * * * * * * * * * * * * *                                                       ");
	printf("\n\t\t                              * * * * * * * * * * * * *                                                      ");
	printf("\n\t\t                                * * * * * * * * * * *                                                       ");
	printf("\n\t\t                                  * * * * * * * * *                                                       ");
	printf("\n\t\t                                    * * * * * * *                                                      ");
	printf("\n\t\t                                      * * * * *                                                        ");
	printf("\n\t\t                                        * * *                                                        ");
	printf("\n\t\t                                          *                                                         ");
	printf("\n\nEnter any key to continue");
    getch();
    Beep(523, 750);
    system("cls");
	printf("%s",ctime(&t));
    setColor(30);
	printf("Enter your name::");
	gets(name);
	printf("Enter today's date:");
	gets(name);
	Beep(523, 750);
	system("cls");


    setColor(28);
    printf("\t\t\t~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t   ..MAIN MENU..\n");
	printf("\t\t\t~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t1. PLAY\n");
	printf("\t\t\t2. SCORECARD\n");
	printf("\t\t\t3. HELP\n");
	printf("\t\t\t4. ABOUT US\n");
	printf("\t\t\t5. EXIT\n");
    setColor(38);
	printf("Enter your choice::");
	scanf("%d",&ch);
	Beep(523, 750);
    system("cls");
switch(ch)
	{
		//case 1:practice();break;
		case 1:test();break;
		case 2:scorecard();
               main();
               break;
		case 3:help();
               main();
		       break;
		case 4:about();
               main();
               break;
		case 5:exit(1);
		default: printf("Sorry! Wrong input\nPlease choose a valid option\n");main();
	}
}

//return 0;
