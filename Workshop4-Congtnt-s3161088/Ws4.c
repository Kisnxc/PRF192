#include <stdio.h>
#include <stdlib.h>
void printFibo(n);
void sum(n,a,b);

void printFibo(int n){
	double f=0,t1=1,t2=1;
	printf("1  1  ");
	for (int i=1;i<=n-2;i++ ){
		f=t1+t2;
		t1=t2;
		t2=f;
	printf("%.0f  ",f);
	if(i%5==3) printf("\n");
	}	
	printf("\n");
}

void sum(int n,double a,double b){
double s=0,t=0;
	for (int i=0;i<=n;i++){
	t=(a+i)/(b+i);
	s+=t;
	}
	printf("Sum of expression F=: %f\n",s);
}

int main(int argc, char *argv[]) {
	int n,a,b; char choose,c,s,z;
	
	do {
		system("cls");
		printf("\t\t\t ====================MENU=======================\n");
        printf("\t\t\t |1. Print the Fibonacci sequence \n");
        printf("\t\t\t |2. Sum of the expression \n");
        printf("\t\t\t |3. Exit\n");
        printf("\t\t\t ================================================\n");
       do	
		{
			fflush(stdin);
			printf("You choose: ");
	        scanf("%c%c", &choose,&z);
	    } while ((choose!='1' || z!='\n'  ) && (choose!='2' || z!='\n'  ) && (choose!='3' || z!='\n'  )) ;
	    
	        
       // getchar();
        switch(choose){
	    case '1':
			do{
					do{
						fflush(stdin);
						if (n>=1277) {
							printf("Too much!!!\n");
							n=0;
						}
						printf("Please enter an integer (0 to exit): \n");
					}while(scanf("%d%c", &n, &c) != 2 || c != '\n' || n>=1277 || n<0 );
					if (n==1)
						printf("1\n");
					if (n>1)
						printFibo(n);
			} while (n!=0);
			printf("Goodbye!!!");
			getch();
			break;
		case '2':
			do{
				do{     //check a
					fflush(stdin);
					printf("Please enter integer a: ");	
				}
				while(scanf("%d%c", &a, &c) != 2 || c != '\n' || a<0);	
				do{    //check b
					fflush(stdin);
					printf("Please enter integer b: ");	
				}
				while(scanf("%d%c", &b, &c) != 2 || c != '\n' || b<=0);	
				do{		//check n
					fflush(stdin);
					printf("Please enter integer n: ");	
				}
				while(scanf("%d%c", &n, &c) != 2 || c != '\n' || n<0 );	
				sum(n,a,b);
				do{
					fflush(stdin);
					printf("Do you want to continue counting? (n=no/y=yes) \n");
					scanf("%c%c",&c,&s); 
				} while ((c!='n'||s!='\n') && (c!='y'||s!='\n'));
			} while (c =='y');
			printf("Goodbye!!!");
			getch();
			break;
		case '3': 
			printf("Goodbye!!!");
			break;
	/*	default: 
			printf("Chosse again");
			getch();
			break;*/
		}
	} while (choose!='3');
	return 0;
}
