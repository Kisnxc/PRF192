#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int sumDigit();
int isFibo();


int sumDigit(int n){
	int sum=0,a;
	do{
		a=n%10;
		n=n/10;
		sum+=a;
	} while (n>0);
	return sum;
}
int isFibo(int n){
	int t1=1,t2=1,f=1,d=0;
	for (int i=0;i<=n;i++){
		f =t1+t2;
		t1=t2;
		t2=f;
	if (n==f) return 1;
	}
	if (n==1) return 1;
	return 0;
}
int main(int argc, char *argv[]) {
	int n,chosse;
	char c;
	do {
		system("cls");
		printf("\t\t\t ====================MENU=======================\n");
        printf("\t\t\t |1. Sum of decimal digits \n");
        printf("\t\t\t |2. Check Fibonacci\n");
        printf("\t\t\t |3. Exit\n");
        printf("\t\t\t ================================================\n");
        printf("You chosse: ");
        scanf("%d", &chosse);
        switch(chosse){
			case 1:
				do {
					do{
 						do{
							fflush(stdin);
							printf("Please enter an integer (0 exit): ");	
						}
						while(scanf("%d%c", &n, &c) != 2 || c != '\n');	
 					} while(n<0);
					if (n>0)
 						printf("Sum of %d decimal digit: %d \n",n,sumDigit(n)); 	
 				} while (n!=0);
 				printf("Goodbye!!!");
 				getch();
 				break;
 			case 2:
 				do{
					do{
						do{
							fflush(stdin);
							printf("Please enter an integer (0 exit): ");	
						}while(scanf("%d%c", &n, &c) != 2 || c != '\n');	
					}while (n<0);
					if (n!=0){
						if (isFibo(n)==1) printf("%d is a Fibonacci element\n",n);
						else printf ("%d is not a Fibonacci element\n",n);	
					}
				} while (n!=0);
				printf("Goodbye!!!");
				getch();
				break;
			case 3: break;
			default: printf("No have %d, chosse again",chosse); getch(); break;
		}
	} while(chosse!=3);
 	return 0;
 }
 
 
