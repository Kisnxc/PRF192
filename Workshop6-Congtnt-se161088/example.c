#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <string.h>

struct Student{
	double score;
	char name[100];
}; 
struct Student ar[100];

void Add(struct Student ar[100],int* n ){
	char c;
	fflush(stdin);
	printf("Input name: ");
	gets(ar[*n].name);
	do {
		fflush(stdin);
		printf("Input score: ");
	}
	while (scanf("%lf%c",&ar[*n].score,&c) !=2 || c!= '\n' || ar[*n].score <0 || ar[*n].score>10);
	(*n)++; 
	printf("Add success");
}

void printList(struct Student ar[100],int* n){
	printf("LIST of Student Name and Score \n");
	for (int i=0; i<n;i++){
		printf("%s",ar[i].name);
		printf("%10lf",ar[i].score);
		printf("\n");
	} 
}
int main(int argc, char *argv[]) {
	char choice;
	int n=0;
	do {
		system("cls");
		printf("1- Add a student into the list\n");
		printf("2- Print out the all list.\n");
		printf("3- Search student by name \n");
		printf("4- Search student by score\n");
		printf("5- Sort the student list by alphabetic order by name\n");
		printf("6- Sort the student list in ascending order by score\n");
		printf("0- Exit.\n");
		printf("Your choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
					Add(ar,&n);
					getch();
					break;
			case 2:
					printList(ar,n);
					getch();
					break;
			case 5:
					
					break;
			case 6:
					
					break;
			case 0:
			
				break;
	
		}
	} while (choice != 0);
	return 0;
}

