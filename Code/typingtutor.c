#include"D:\C\Test\Typing Tutor\typingtutor.h"

/***************************************************************************************/
/*****  NAME       :  insq                                                          ****/
/***** Description :  function to insert words,sentences and paragraphs in queues   ****/
/*****  Inputs     :  queue array,rear pointer,data to be inserted                  ****/
/****   Outputs    :  int                                                           ****/
/***************************************************************************************/

int insq(char queue[MAX][100], int *rear, char data[100])
{
      if(*rear == MAX -1)/*if the queue is full*/
            return(-1);
      else/*else if the queue is not full*/
      {
            *rear = *rear + 1;/*increment the rear pointer*/
            strcpy(queue[*rear], data);/*copy the data to be inserted inside the queue at rear pointer*/
            return(1);
      }
}


/*******************************************************************************************************/
/*****  NAME       :  getscore                                                                      ****/
/***** Description :  function to append the name,speed and the accuracy of the user in the file    ****/
/*****  Inputs     :  speed and accuracy                                                            ****/
/****   Outputs    :  void                                                                          ****/
/*******************************************************************************************************/

void getscore(int speed,float accuracy)
{
	FILE *fp;/*Declaring a file pointer*/
	char name1[10]=".txt";/*initializing a string*/
	char n[50];
	strcpy(n,name);/*Copying the name of the user to a new string*/
	strncat(name, &name1,4);/*concatinating the strings to get proper file name*/
	fp=fopen(name,"a"); /*fopen is a function used to open a file,file is opened in append mode(creating files in the name of the users)*/
    if(fp==NULL) /*if the file pointer points to null*/
        printf("Error in opening file"); /*print the error statement*/
    else
        fprintf(fp,"\nName=%s\t\t\tDate=%s\t\t\tSpeed=%d\t\t\tAccuracy %0.2f %\n\n",n,date,speed,accuracy);/*append the name,speed and accuracy inside the file*/
        //fclose(fp);/*Close the file*/
        printf("\n\tScore updated\n\n");
        setColor(15);
}


/******************************************************************************/
/*****  NAME       :  scorecard                                            ****/
/***** Description :  function to read the contents inside the file        ****/
/*****  Inputs     :  none                                                 ****/
/****   Outputs    :  void                                                 ****/
/******************************************************************************/

void scorecard()
{
    setColor(30);
    FILE *fp;/*Declaring a file pointer*/
	system("cls");
	printf("\tCheck your performance here!!!!!");
	printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	setColor(42);
	printf("\n\tSPEED\n\tNeed to improve:below 40 \n\tGood: 40 to 50 \n\tExcellent:Above 50");
	setColor(45);
	printf("\n\tACCURACY\n\tNeed to improve:Below 75\% \n\tGood: 75-90\%\n\tExcellent:Above 90\%");
	setColor(65);
	printf("\t\t\t....Your scores are...\n");
	setColor(11);
	char name1[10]=".txt";/*initializing a string*/
	strncat(name, &name1,4);/*concatinating the strings to get proper file name*/
	fp=fopen(name,"r"); /*fopen is a function used to open a file,file is opened in read mode*/
	while((ch=fgetc(fp))!=EOF)/*traversing till the file pointer reaches EOF and storing the characters encountered in a variable ch*/
	{
		printf("%c",ch);/*printing the character ch*/
	}
	setColor(300);
    printf("\nEnter any key:");
	getch();/*waiting for a character from the user*/

}


/*****************************************************************************/
/*****  NAME       :  about                                               ****/
/***** Description :  function to print about our project                 ****/
/*****  Inputs     :  none                                                ****/
/****   Outputs    :  void                                                 ***/
/*****************************************************************************/

void about()
{
    setColor(10);
	printf("This typing tutor project is developed in C language by \nA S Kareshmmaa and Priyanka K of B.E Computer Science and Engineering.\n");
	printf("\nThis project is done under the supervision of Dr. R Manimegalai,Head of Department\n");
	setColor(10);
	printf("\nEnter any key to continue...");
	getch();/*waiting for a character from the user*/
	system("cls");/*clearing the screen*/
	viewscore();/*calling viewscore function*/

}


/*******************************************************************************************/
/*****  NAME       :  help                                                              ****/
/***** Description :  function to print about the different levels in our project       ****/
/*****  Inputs     :  none                                                              ****/
/****   Outputs    :  void                                                               ***/
/*******************************************************************************************/

void help()
{
    setColor(15);
	printf("....INTRODUCTION TO TYPING TUTOR....\n");
	setColor(20);
	printf("There are altogether 3 levels in this tutor.\nFirst level helps you to learn to type combination of letters and words.\n");
	printf("Second level makes you practice typing single line sentences.\n");
	printf("Third level makes you practice typing paragraphs.\n");
	setColor(10);
	printf("\nEnter any key to continue...");
	getch();/*waiting for a character from the user*/
	system("cls");/*clearing the screen*/
	viewscore();/*calling viewscore function*/
}


/************************************************************************************************************/
/*****  NAME       :  qcompare                                                                           ****/
/***** Description :  function to compare two queues                                                     ****/
/*****  Inputs     :  char array which is already present and the character array typed by the user      ****/
/****   Outputs    :  int                                                                                 ***/
/************************************************************************************************************/

int qcompare(char word1[],char w1[]){

            int error=0,i;/*declaring and initializing the variables*/
            for(int i=0;(word1[i]!='\0'||w1[i]!='\0');i++)/*traversing till the null character is reached*/
                    {
                        if(word1[i]!=w1[i])/*if the characters doesn't match*/
                        {

                            error++;/*increment the error value*/
                        }
                    }
            return error;/*returning the error calculated*/


}


/*******************************************************************************************************/
/*****  NAME       :  cal                                                                           ****/
/***** Description :  function to return the sum of the accuracies                                  ****/
/*****  Inputs     :  accuracy                                                                      ****/
/****   Outputs    :  float                                                                         ****/
/*******************************************************************************************************/

float cal(float accuracy){

    float ave=0.0f;/*initializing a variable*/
    ave+=accuracy;/*adding the accuracy to the variable ave*/
    return ave;/*returning the sum of the accuracies calculated*/
    }


/**************************************************************************************/
/*****  NAME       :  viewscore                                                    ****/
/***** Description :  a replica function for main                                  ****/
/*****  Inputs     :  none                                                         ****/
/****   Outputs    :  void                                                         ****/
/**************************************************************************************/

void viewscore(){

				printf("\n\t 1. HELP");
                printf("\n\t 2. ABOUT US");
                printf("\n\t 3. EXIT");
				int choice;
				setColor(28);
				printf("\nEnter your choice..");
				scanf("%d",&choice);
				switch(choice){
                case 1:
                    system("cls");
                    help();break;
                case 2:
                    system("cls");
                    about();break;
                case 3:
                    system("cls");
                    printf("\t\t******THANK YOU FOR PLAYING*********");
                    printf("\n\t\t****PLAY MORE TO IMPROVE YOUR TYPING SKILLS****");
                    setColor(20);
                    exit(1);
                    break;
				}
}


/****************************************************************************************************/
/*****  NAME       :  test                                                                       ****/
/***** Description :  function to perform the different levels                                   ****/
/*****  Inputs     :  none                                                                       ****/
/****   Outputs    :  void                                                                       ****/
/****************************************************************************************************/

void test()
{
/*declaring and initializing the necessary variables*/
    float accuracy,ave1=0.0f,ave2=0.0f,ave3=0.0f,ave4=0.0f,ave5=0.0f,ave6=0.0f,ave7=0.0f,ave8=0.0f,ave9=0.0f;
    clock_t begin,end;
    double cpu_time_used;
    int len,len1,len2,speed1,speed2;
    int count=0,count1=0,count2=0;
    float accuracy1,accuracy2;
    int fspeed;
    float faccuracy;

    /*Opening the necessary files in read mode*/
    fp=fopen("words.txt","r");
    fp1=fopen("sentences.txt","r");
    fp2=fopen("paragraphs.txt","r");
        setColor(25);
        printf("\t\t********************Instructions to be followed*******************************");
        setColor(30);
        printf("\n\t\t->Your left-hand fingers should be placed over the A, S, D, and F keys.\n\t\t->The right-hand fingers should be placed over the J, K, L, and ; keys. \n\t\t->These keys are considered the home row keys.\n\t\t->Your thumb should either be in the air or very lightly touching the spacebar ");
        setColor(37);
        printf("\n\t\t->When typing, your palms should be raised and not resting on any surface,\n\t\tincluding a wrist pad, and held at a 10 to 30-degree angle.\n\t\t->Enter space key whenever asked to proceed further.");
        setColor(10);
        printf("\n\nEnter any key");
        getch();/*waiting for a character to be entered*/

        system("cls");

        setColor(10);

        printf("TEST LEVEL 1\n");

        /*scanning the contents of the file which the file pointer fp pointing to,and storing it in the array 'w',till it reaches the end of the file*/
        while(fscanf(fp , "%s" ,&w[n])==1)
        {
            reply = insq(queue, &rear, w);/*inserting the scanned contents inside the queue*/

        if(reply == -1 )/*if the queue is full */
                printf("\nQueue is Full \n");/*printng error message*/

		printf("\n%s",w);/*printing the scanned word*/

		setColor(50);

		printf("\nStart typing....\n ");

		setColor(55);

        printf("\nEnter the word displayed:");

        int begin1=clock();/*Starting the clock*/

        scanf("%s",&word[n]);/*Scanning the word from the user and storing it in 'word'*/

        count++;/*Incrementing the count variable (to keep the track for the number of lines)*/

        reply3 = insq(queue3, &rear, word);/*Inserting the word scanned from the user inside another queue*/

        if(reply3 == -1 )/*if the queue is full*/
                printf("\nQueue is Full \n");/*printing the error message*/

        int end1=clock(); /*Ending the clock*/

        int e=qcompare(w,word);/*Comparing the contents stored in the queue by calling qcompare function and storing the error value returned in a variable 'e'*/

		cpu_time_used+=((double)(end1-begin1))/CLOCKS_PER_SEC;/*Calculating the time used*/

		len=strlen(w);/*finding the length of the word typed by the user(to calculate error)*/

        setColor(60);

		printf("\nTotal number of errors: %d",e);/*printing the number of errors*/

		setColor(65);

		printf("\n\nEnter space key");/*Asking the user for a space key*/

		int a=getch();/*Storing the value entered by the user in a variable 'a'*/

		if(a!=32){ /*if the key entered is not a space,repeat the level*/

            setColor(70);

            printf("!!!!OOPS!!!!");
             Beep(523, 500);
            printf("\nYOU HAVEN'T ENTERED SPACE KEY....RESTART THE LEVEL");

            getch();/*waiting for a character to be entered*/

            system("cls");

            test();/*return again to test function*/

		}
		else/*if the key entered is a space*/

        system("cls");

		begin=0;/*Set the clock again as zero*/

		speed=(len*60)/cpu_time_used;/*Calculating the speed*/

		accuracy=((len-e)*100.0)/len;/*Calculating the accuracy*/

		ave1+=cal(accuracy);/*Adding the accuracy calculated by calling cal() function*/

        //printf("\n------------------------------------------------------------------------------------------------------------\n");
    }
    ave2=ave1/count;/*Finding the average of the accuracies*/

    ave3=abs(ave2);

    setColor(10);

    printf("\nAccuracy is %0.2f %\n\n",ave3);/*Printing the accuracy*/

    setColor(45);

    printf("\nTotal time used %0.5f seconds",cpu_time_used);/*printing the time used*/

	if(ave2<75.0 || cpu_time_used>140.0)/*if the accuracy is less than 75 or the time taker exceeds 140 seconds...*/
	{
	    setColor(15);

	    printf("\n\n\t!!!!!!!!!!!!!!!!!!!!!OOPS!!!!!!!!!!!!!!!!!!!!!");
        Beep(523, 500);
	    setColor(25);

	    printf("\nYour accuracy is less or time taken exceeds 25 seconds");

		printf("\nREPEAT LEVEL 1\n");/*Repeat the level*/

		setColor(80);

		printf("\n\nEnter any key");

		getch();/*waiting for a character to be entered*/

        system("cls");

		test();/*return to the test() function*/
	}
	else if(ave2>=75.0)/*if the average is greater than or equal to 75*/
	{

		setColor(15);
		printf("\n************************CONRATULATIONS,YOU HAVE PASSED LEVEL 1********************\n\n");
		Beep(523, 500);Beep(523, 500);Beep(523, 500);
		setColor(20);
		printf("---------------------------------------------------------------------------------------------\n");
		setColor(25);

		printf("\nALL THE BEST FOR LEVEL 2 \n\n");/*Move to level 2*/

		setColor(300);

		printf("\n\nEnter any key");

		getch();/*waiting for a character to be entered*/

        system("cls");
        /*scanning the contents of the file which the file pointer fp1 pointing to,and storing it in the array 's',till it reaches the end of the file*/
        while(fscanf(fp1 , "%[^\n]%*c" ,&s[n])==1)
        {
            reply1 = insq(queue1, &rear, s);/*inserting the scanned contents inside the queue*/

            if(reply1 == -1 )/*if the queue is full */
                printf("\nQueue is Full \n");/*printng error message*/

            printf("\n%s",s);/*printing the scanned sentence*/

            setColor(50);

            printf("\nStart typing....\n ");

            setColor(55);

            printf("\nEnter the sentence displayed:");

            int begin2=clock();/*Starting the clock*/

            scanf("%s",&sen[n]);/*Scanning the sentence from the user and storing it in 'sen'*/

            count1++;/*Incrementing the count variable (to keep the track for the number of lines)*/

            reply4 = insq(queue4, &rear, sen);/*Inserting the word scanned from the user inside another queue*/
            if(reply4== -1 )/*if the queue is full*/
                printf("\nQueue is Full \n");/*printing the error message*/

            int end2=clock();/*Ending the clock*/

            int e1=qcompare(s,sen);/*Comparing the contents stored in the queue by calling qcompare function and storing the error value returned in a variable 'e1'*/

            cpu_time_used+=((double)(end2-begin2))/CLOCKS_PER_SEC;/*Calculating the time used*/

            len1=strlen(s);/*finding the length of the sentence typed by the user(to calculate error)*/

            setColor(60);

            printf("\nTotal number of errors: %d",e1);/*printing the number of errors*/

            setColor(65);

            printf("\n\nEnter space key");/*Asking the user for a space key*/

            int a=getch();/*Storing the value entered by the user in a variable 'a1'*/

            if(a!=32){/*if the key entered is not a space,repeat the level*/

            setColor(15);

            printf("!!!!OOPS!!!!");
            Beep(523, 800);

            setColor(25);

            printf("\nYOU HAVEN'T ENTERED SPACE KEY....RESTART THE LEVEL");

            getch();/*waiting for a character to be entered*/

            system("cls");

            test();/*return again to test function*/
		}
		else/*if the key entered is a space*/
            system("cls");

            begin=0;/*Set the clock again as zero*/

            speed1=(len1*60)/cpu_time_used;/*Calculating the speed*/

            accuracy2=((len1-e1)*100.0)/len1;/*Calculating the accuracy*/

            ave4+=cal(accuracy2);/*Adding the accuracy calculated by calling cal() function*/

            setColor(20);
		//printf("\n------------------------------------------------------------------------------------------------------------\n");
        }
        ave5=ave4/count1;/*Finding the average of the accuracies*/

        ave6=abs(ave5);

        setColor(40);

        printf("\nAccuracy is %0.2f %\n\n",ave6);/*Printing the accuracy*/

        setColor(45);

        printf("\nTotal time used %0.5f seconds\n",cpu_time_used);/*printing the time used*/

        if(ave6<75.0 || cpu_time_used>200.0)/*if the accuracy is less than 75 or the time taker exceeds 200 seconds...*/
        {
            setColor(15);

            printf("\n\n\t!!!!!!!!!!!!!!!!!!!!!OOPS!!!!!!!!!!!!!!!!!!!!!");
            Beep(523, 800);
            setColor(25);

            printf("\nYour accuracy is less or time taken exceeds 200 seconds");

            setColor(80);

            printf("\nREPEAT LEVEL 1\n");/*Repeat the level*/

            printf("\n\nEnter any key");

            getch();/*waiting for a character to be entered*/

            system("cls");

            test();/*return to the test() function*/
        }

		else if(ave6>=75.0)/*if the average is greater than or equal to 75*/
		{
		    setColor(15);

			printf("********************CONGRATULATIONS,YOU HAVE PASSED LEVEL 2***********************\n");
            Beep(659, 400);Beep(659, 400);Beep(659, 400);
			setColor(20);

			printf("-----------------------------------------------------------------------------------------------------\n");

			setColor(25);

			printf("ALL THE BEST FOR TEST LEVEL 3\n");

			//begin=0;

            printf("\n\nEnter any key");

		    getch();

            system("cls");

            /*scanning the contents of the file which the file pointer fp2 pointing to,and storing it in the array 'p',till it reaches the end of the file*/
        while(fscanf(fp2 , "%[^\n]%*c" ,&p[n])==1)
           {
                reply2 = insq(queue2, &rear, p);/*inserting the scanned contents inside the queue*/

            if(reply2 == -1 )/*if the queue is full */
                    printf("\nQueue is Full \n");

            else
                printf("%s",p);/*printing the scanned paragraphs*/

                setColor(50);

                printf("\nStart typing....\n ");

                setColor(55);

                printf("\nEnter the word displayed:\n");

                int begin3=clock();/*Starting the clock*/

                scanf("%s",&para[n]);/*Scanning the word from the user and storing it in 'para'*/

                count2++;/*Incrementing the count variable (to keep the track for the number of lines)*/

                reply5 = insq(queue5, &rear, para);/*Inserting the word scanned from the user inside another queue*/

                if(reply5== -1 )/*if the queue is full*/
                            printf("\nQueue is Full \n");/*printing the error message*/

                int end3=clock();/*Ending the clock*/

                system("cls");

                int e2=qcompare(para,p);/*Comparing the contents stored in the queue by calling qcompare function and storing the error value returned in a variable 'e2'*/

                cpu_time_used+=((double)(end3-begin3))/CLOCKS_PER_SEC;/*Calculating the time used*/

                len2+=strlen(p);/*finding the length of the word typed by the user(to calculate error)*/

                setColor(60);

                printf("\nTotal number of errors: %d",e2);/*printing the number of errors*/

                setColor(65);

                printf("\n\nEnter space key");/*Asking the user for a space key*/

                int a=getch();/*Storing the value entered by the user in a variable 'a1'*/

                if(a!=32){/*if the key entered is not a space,repeat the level*/
                    setColor(15);

                    printf("!!!!OOPS!!!!");
                    Beep(523, 800);
                    setColor(25);

                    printf("\nYOU HAVEN'T ENTERED SPACE KEY....RESTART THE LEVEL");

                    getch();/*waiting for a character to be entered*/

                    system("cls");

                    test();/*return again to test function*/
                }
                else/*if the key entered is a space*/
                    system("cls");

                    begin=0;

                    speed2=(len2*60)/cpu_time_used;/*calculating the speed*/

                    accuracy2=((len2-e2)*100.0)/len2;/*calculating the accuracy*/

                    ave7+=cal(accuracy2);

                    setColor(20);

                    //printf("\n------------------------------------------------------------------------------------------------------------\n");
        }


        ave8=ave7/count2;/*Finding the average of the accuracies*/

        ave9=abs(ave8);

        setColor(40);

		printf("\nAccuracy is %0.2f %\n\n",ave9);/*Printing the accuracy*/

		printf("\nTotal time used %0.5f seconds\n",cpu_time_used);/*Printing the time taken*/

        }
			if(ave9>75.0)
			{
				//setcolor(23);
				setColor(23);
				Beep(523, 500);
                Beep(523, 500);
                Beep(523, 500);
                setColor(30);
				printf("\n\t*****************************************************************************");
				printf("\n\t******CONGRATULAIONS YOU HAVE SUCCESSFULLY COMPLETED ALL THE LEVELS!!*******\n");
				printf("\n\t*****************************************************************************");
			}
			else
			{
				setColor(15);

				printf("\nYOU HAVE FAILED LEVEL 3\n");
                 Beep(523, 500);
				setColor(20);
				printf("------------------------------------------------------------------------------------------------------\n");
				setColor(25);

				printf("START FROM LEVEL 1\n");

			}

		}
		fspeed=(speed+speed1+speed2)/3;/*finding the average speed of all the three levels*/

		faccuracy=(ave3+ave6+ave9)/3;/*finding the average accuracy of all the three levels*/

		getscore(fspeed,faccuracy);/*Updating the scores*/
		//scorecard();
		//getch();
		printf("Press any key to continue..\n");
		getch();
		system("cls");
		printf("\tCheck your performance here!!!!!");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        setColor(42);
        printf("\n\tSPEED\n\tNeed to improve:below 40 \n\tGood: 40 to 50 \n\tExcellent:Above 50");
        setColor(45);
        printf("\n\tACCURACY\n\tNeed to improve:Below 75\% \n\tGood: 75-90\%\n\tExcellent:Above 90\%");
        setColor(65);
        printf("\t\t\t....Your scores are...\n");
        printf("\n\t\tSpeed=%d\t\t\tAccuracy %0.2f %\n\n\n",fspeed,faccuracy);
        if(faccuracy<50)
        {
            setColor(10);
            printf("Try harder. Push yourself,because no one else is going to do it for you.\n");
            printf("Come back stronger.\n\n");
        }
        else if(faccuracy>50 && faccuracy<75)
        {
            setColor(10);
            printf("You are close. The harder you work for something,the greater you’ll feel when you achieve it.\n");
            printf("Fantastic,aim for a hundred percent accuracy.\n\n");
        }
        else if(faccuracy>=75)
        {
            setColor(10);
            printf("Bravo. Sometimes we’re tested not to show our weaknesses,but to discover our strengths.\n");
            printf("You are an inspiration now.Keep learning and more practice sessions \nwith interesting words and phrases will be updated soon.\n\n");
        }
		viewscore();

}


/**********************************************************************/
/*****  NAME       :  setColor                                     ****/
/***** Description :  function to set colors                       ****/
/*****  Inputs     :  int                                          ****/
/****   Output     :  void                                         ****/
/**********************************************************************/

void setColor(int ForgC)
 {
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;  //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))//Mask out all but the background attribute, and add in the forgournd     color
         {
             wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
             SetConsoleTextAttribute(hStdOut, wColor);
         }
     return;
 }
