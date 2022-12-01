#include <stdio.h>
#include <stdlib.h>
void add(int a[100],int* n);
void output(int *a,int n);
void search(int *a,int n);
void printeven(int *a,int n);
void printmax(int *a,int n);
void printinrange(int *a,int n);
void sort(int* a,int n);
void remove1(int* a,int* n);
void removeall(int* a,int* n);



void add(int a[100],int* n){
	char c;
	do{
		fflush(stdin);
		printf("Enter integer number: ");
	} while (scanf("%d%c",&a[*n],&c)!=2 || c!='\n'|| a[*n]<0);
	(*n)++;
	printf("Add success");
	
}
 void output(int *a,int n){
 	for (int i=0;i<n;i++)
 		printf("%d  ",a[i]);
 }
 
 void search(int *a,int n){
 	int m,flag=0;
 	char c;
 	do{
		fflush(stdin);
		printf("Number you want to search: ");
	}
	while ( scanf("%d%c",&m,&c) !=2 || c!='\n' || m<0);
 	for (int i=0; i<=n;i++){
 		if (a[i] ==m) {
			printf("Index %d\n",i+1);
			flag++;
		}
	}
	if (flag==0) printf("%d dose not exist in array ",m);
 }
 
 void printeven(int *a,int n){
 	int flag=0;
 	for (int i=0;i<n;i++){
 		if (a[i] %2 ==0) {
		  flag++;
		}
	} 
 	if (flag!=0) printf("Even values: ");
 		else printf("No have even value"); 
 	for (int i=0;i<n;i++){
 		if (a[i] %2 ==0) 
			 printf("%4d",a[i]);	
	} 
 }
 
 void printmax(int *a,int n){
 	int max=0;
 	for (int i=0;i<n; i++){
 		if(a[i]>max) max=a[i];
	}
	printf("Max value in array: %d",max); 
 } 	
 
 void printinrange(int *a,int n){
 	int max,min;
 	int flag=0;
 	char c;
 	do{
		fflush(stdin);
		printf("Enter Max value: ");
	} while (scanf("%d%c",&max,&c)!=2 || c!='\n'|| max<0);
	do{
		fflush(stdin);
		printf("Enter Min value: ");
	} while (scanf("%d%c",&min,&c)!=2 || c!='\n'|| min<0);
	printf("\n");
	for (int i=0;i<n;i++){
		if(a[i]<=max && a[i]>=min) {
			printf("%4d",a[i]);
			flag++;
		}
	}
	if (flag==0) printf("No value in range");
 }

 void sort(int* a,int n){
 	int min;
 	int b[100];
 	for (int k;k<n;k++){
 		b[k]=a[k];
	 }
 	for (int i=0;i<n;i++){
 		for (int j=i+1;j<n;j++){
 			if (b[i]>b[j]) {
 				min=b[i];
 				b[i]=b[j];
				b[j]=min; 
			}
		} 
	 }
	 for (int i=0;i<n;i++){
	 	printf("%3d",b[i]);
	 }
 }
void remove1(int* a,int* n){
	int m,flag=0; char c;
	do{
		fflush(stdin);
		printf("Enter integer number: ");
	}
	while ( scanf("%d%c",&m,&c) !=2 || c!='\n' || m<0);
	for (int i=0;i<*n;i++)
		if (a[i]==m){
			flag++;
			for(int j=i+1;j<*n;j++)
				a[j-1]=a[j];
			(*n)--;
			break;	
		}
	if (flag==0) printf("No have %d to remove ",m);
		else printf("Remove success ");		
}

void removeall(int* a,int* n){
	int m,flag=0;
	char c;
	do{
		fflush(stdin);
		printf("Enter integer number: ");
	}
	while ( scanf("%d%c",&m,&c) !=2 || c!='\n' || m<0);
	for (int i=0;i<*n;i++)
		if (a[i]==m){
			flag++;
		    for(int j=i+1;j<*n;j++){
				a[j-1]=a[j];	
			}
			(*n)--;	
			i--;
		}
	if (flag==0) printf("No have %d to remove ",m);
		else printf("Remove success ");		
}
int main(int argc, char *argv[]) {
	int chosse; int a[100];int n=0;
	do{
        system("cls");
		printf("\t\t\t ====================MENU=======================\n");
        printf("\t\t\t |1-	Add  a value\n");
		printf("\t\t\t |2-	Search a value\n");
		printf("\t\t\t |3-	Remove the first existence of a value\n");
		printf("\t\t\t |4-	Remove all existence of a value\n"); 
		printf("\t\t\t |5-	Print out the array \n");
		printf("\t\t\t |6-	Print out even values in array\n");
		printf("\t\t\t |7-	Print out the maximum value of the array\n");
		printf("\t\t\t |8-	Print out values in a range\n");
		printf("\t\t\t |9-	Print out the array in ascending order (bubble sort)\n");
		printf("\t\t\t |0-	End. \n	");			
        printf("\t\t ================================================\n");
        printf("You chosse: "); 
        scanf("%d", &chosse);
        switch(chosse){
        	case 0: 
				printf("Goodbye!!!");
        		getch();
        		break;
        	case 1: 
				add(a,&n);
        		getch();
        		break;
        	case 2:
        		search(a,n);
        		getch();
        		break;
        	case 3:
        		remove1(a,&n);
        		getch();
        		break;
        	case 4:
        		removeall(a,&n);
        		getch();
        		break;
        	case 5: 
				output(a,n);
				getch(); 
				break;	
			case 6:
				printeven(a,n);
				getch();
				break;	
			case 7:
				printmax(a,n);
				getch();
				break;
			case 8: 
				printinrange(a,n);
				getch();
				break;
			case 9:
				sort(a,n);
				getch();
				break;
			default: 
				printf("Chosse again");
				getch();
				break;	
		} 
} while (chosse !=0);
	return 0;
}
