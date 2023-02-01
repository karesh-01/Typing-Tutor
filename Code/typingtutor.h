/*Include the necessary header files*/
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<MMsystem.h>
#include<dos.h>
#define MAX 1000
#define LEN 30
#define SIZE 30
/*Declaring and initializing the necessary variables*/
char name[30],date[30];
char queue[MAX], queue1[MAX], queue2[MAX];
char queue3[MAX], queue4[MAX], queue5[MAX];
int i=1,ch,j,r,error,speed,len=0;
float accuracy;
clock_t begin,end;
double cpu_time_used;
int size,n=0,m=0,reply,reply1,reply2;
int reply3,reply4,reply5;
int sml=1;
char w[MAX],s[MAX],p[MAX];
char w1[MAX],s1[MAX],p1[MAX];
char w2[MAX],s2[MAX],p2[MAX];
char word[MAX],sen[MAX],para[MAX];
int front=-1,rear=-1;
FILE *fp;
FILE *fp1;
FILE *fp2;
/*Function prototypes*/

void test();
void practice();
void help();
void about();
void getscore(int speed,float accuracy);
void scorecard();
