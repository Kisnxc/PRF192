#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <time.h>
int dice()
{
	int n;
	n=1+rand()%6;
	return n;
}
void main()	{
	int i,n,x,y;
	char c,s;
	do{
		printf("Dice Thrower\n================\n");
		printf("Total sought: ");	
		while(scanf("%d%c", &n, &c) != 2 || c != '\n'|| n>12 || n<2)
			{     //check n
			fflush(stdin);
			printf("Total must be an integer in the range[2...12]\n");
			printf("Total sought: ");
			}
		i=0;
		srand(time(NULL));
		do	{
			x=dice();
			y=dice();
			printf("\nResult of throw %d: %d + %d",++i,x,y);
			if ((x+y)==n) printf("\nYou got your total in %d throws!\n",i);
			fflush(stdin);
			sleep(1.5);
		}
		while ((x+y)!=n);
		do{
			fflush(stdin);
			printf("Do you want to continue counting? (n=no/y=yes) \n");
			scanf("%c%c",&c,&s); 
		} while ((c!='n'||s!='\n') && (c!='y'||s!='\n'));
		getch();
		if (c=='y') system("cls");
		if (c=='n') printf("Goodbye!!!");
	} while (c=='y');	
}
