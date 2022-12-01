#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string.h>
#include <ctype.h>


char* lTrim(char s[]){
	int i=0;
	while(s[i]==' ') i++;
	if (i>0) strcpy(&s[0],&s[i]);
	return s;
}

char* rTrim(char s[]){
	int i=strlen(s)-1;
	while(s[i]==' ') i--;
	s[i+1]='\0';
	return s;
}

char* trim(char s[]){
	rTrim(lTrim(s));
	char* ptr= strstr(s, "  ");
	while( ptr != NULL){
		strcpy(ptr,ptr+1);
		ptr =strstr(s, "  ");
	}
	return s;
}

char* nameStr(char s[]){
	trim(s);
	strlwr(s);
	for (int i=0;i<strlen(s);i++)
		if (i==0|| (i>0 && s[i-1]==' ')) s[i] =toupper(s[i]);
	return s;
}
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

void printList(struct Student ar[100],int n){
	printf("\tLIST of Student Name and Score \n");
	for (int i=0; i<n;i++){
		nameStr(ar[i].name);
		printf("%-20s",ar[i].name); 
		printf("\t%.2lf",ar[i].score);
		printf("\n");
	} 
}

void searchByscore(struct Student ar[100],int n){
	char c; double m; int flag;
	do {
		fflush(stdin);
		printf("Input score you want to search: ");
	}
	while (scanf("%lf%c",&m,&c) !=2 || c!= '\n' || m <0 || m>10);
	for (int i=0;i<n;i++){
		if (m==ar[i].score ) {
			printf("%-20s",ar[i].name); 
			printf("\t%.2lf",ar[i].score);
			printf("\n");
			flag ++;
		}
	}  
	if (flag == 0) printf ("Not found.");
}

void sortScore(struct Student ar[100],int n) {
	struct Student b[100];
	struct Student a[100];   
	for (int i;i<n;i++){
		b[i]=ar[i];
	}
	for (int j=0;j<n;j++)
		for (int k=j+1;k<n;k++)
			if (b[j].score > b[k].score){
				a[j]=b[j];
				b[j]=b[k];
				b[k]=a[j];
			}
	for (int j=0;j<n;j++){
		printf("%-20s",b[j].name); 
		printf("\t%.2lf",b[j].score);
		printf("\n");
	}	
}

void searchByname(struct Student ar[100],int n){
	char a[100]; int flag=0;
	fflush(stdin);
	printf("Input name you want to search: ");
	gets(a);
	nameStr(a);
	for (int i=0;i<n;i++)
		if (strstr(ar[i].name,a)!=NULL){
			printf("%-20s",ar[i].name); 
			printf("\t%.2lf",ar[i].score);
			printf("\n");	
			flag++;
		} 
		if (flag ==0) printf("Name not exist.");
}

void sortName(struct Student ar[100],int n){
	struct Student c[100];
	struct Student t[100];
	for (int a=0;a<n;a++)
		c[a]=ar[a];
	for (int i=0;i<n;i++)
		for (int j=i+1;j<n;j++)
			if (strcmp(c[i].name,c[j].name)==1){
				strcpy(t[i].name,c[i].name);
				strcpy(c[i].name,c[j].name);
				strcpy(c[j].name,t[i].name);
			}
		for (int j=0;j<n;j++){
			printf("%-20s",c[j].name); 
			printf("\t%.2lf",c[j].score);
			printf("\n");
		}
}

void readFile(struct Student ar[100],int *n){
	FILE* pf= fopen("students1.txt","r");
	if (pf!=NULL) {
		while (fscanf(pf,"%[^;];%lf%*c",&ar[*n].name,&ar[*n].score)==2){
			(*n)++;
		}
		fclose(pf);
	}
}

void writeFile(struct Student ar[100],int n){
	FILE* f= fopen("students2.txt","w");
	for (int i=0;i<n;i++){
		fprintf(f,"%s;%.2lf\n",ar[i].name,ar[i].score);
	}
	fclose(f);
}

int main(int argc, char *argv[]) {
	char choice;
	int n=0;
	readFile(ar,&n);
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
			case 3: searchByname(ar,n);
					getch();					
					break;
			case 4: searchByscore(ar, n);
					getch();
					break;
			case 5:	sortName( ar,n);
					getch();
					break;
			case 6:
					sortScore(ar, n);
					getch();
					break;
			case 0:
				printf("Goodbye.");
				break;
			default: 
				printf("Chosse again");
				getch();
				break;
	
		}
	} while (choice != 0);
	writeFile(ar,n);
	return 0;
}

