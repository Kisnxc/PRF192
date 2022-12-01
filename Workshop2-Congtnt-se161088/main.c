#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//workshop2 
//Pr1
int checkPrime(int i){
	for (int j=2; j<=sqrt(i);j++)
		if (i%j==0) return 0;
	return 1;
}
void printPrime(int n){
	for (int i=2;i<=n;i++)
		if (checkPrime(i)==1) printf("%d ",i);
}
	//Pr2
int validDate(int d ,int m,int y){
	if (y>0){
	if ((d>=1 && d<=31) && (m==1||m==3||m==5||m==7||m==8||m==10||m==12)) 
		return 1;
	else if ((d>=1 && d<=28) && m==2) return 1;
	else if ((d>=1 && d<=30)&& (m==4||m==6||m==9||m==11)) return 1;
	else return 0;
	} else return 0;
}
	//Pr3
void getCircle(double r,double x,double y1 ){
	if ((x*x+y1*y1) > (r*r)) printf ("The point is out of circle ");
	else if ((x*x+y1*y1) < (r*r)) printf("The point is in the circle");
	else if ((x*x+y1*y1) == (r*r)) printf("The point is on the circle");	
}
	//Pr4
void getfactorial(int n){
	int t=1;
	for (int i=1; i<=n;i++){
		t*=i;
	}
	printf("Factorial of %d is:%d\n",n,t);	
}
	//Pr5
void getFibo(int n ){
	int t1=1,t2=1,f=1;
	printf("Fibonacci to %d position: 1 1 ",n);
	for (int i=3;i<=n;i++){
		f =t1+t2;
		t1=t2;
		t2=f;
		printf("%d ",f);
	}  
}
	//Pr6
int isFibo(int n){
	int t1=1,t2=1,f=1,d=0;
	for (int i=3;i<=n;i++){
		f =t1+t2;
		t1=t2;
		t2=f;
	if (n==f) return 1;
	}
	return 0;
} 
	//Pr7
int sumDigit(int n){
	int sum=0,a;
	do{
		a=n%10;
		n=n/10;
		sum+=a;
	} while (n>0);
	return sum;
}
	//Pr8
double makeD(int p, int f){
	double df=f;
	while (df>1) df=df/10;
	if (p<0) return p-df;
	return p+df;
}
	//Pr9
int gcd(int a, int b){
	for (int i=a;i>=0;i--)
		if (a%i==0 && b%i==0) return i;
} 
int lcm(int a, int b){
	return a*b/gcd(a,b);
}
	//Pr10
void printmaxmin(int n){
	int min,max,r,digit;
		digit=n%10;
		n=n/10;
		max=min=digit;
	while(n>0){
		digit=n%10;
		n=n/10;
		if (min>digit) min=digit;
		if (max<digit) max=digit;
	}
	printf("%d  %d",min,max);
}
int main(int argc, char *argv[]) {
	int chosse;
	int d,m,y,n,p,f,a,b;
	double x,y1,r;
	do {
		system("cls");
		printf("\t\t\t ====================MENU=======================\n");
        printf("\t\t\t |1. Print out primes between 2 and n \n");
        printf("\t\t\t |2. ValidDate                  		\n");
        printf("\t\t\t |3. Circle                           \n");
        printf("\t\t\t |4. Factorial					    \n");
        printf("\t\t\t |5. Fibonacci      				    \n");
        printf("\t\t\t |6. Check Fibonacci      			\n");
        printf("\t\t\t |7. Sum Digits      				    \n");
        printf("\t\t\t |8. Real Numbers    				    \n");
        printf("\t\t\t |9. GCM & LCM     				    \n");
        printf("\t\t\t |10.Print min max digit  			\n");
        printf("\t\t\t |11. Exit                            \n");
        printf("\t\t\t ================================================\n");
        printf("You chosse: ");
        scanf("%d", &chosse);
        switch(chosse){
        	case 1: 
				do{
					printf("Enter a positive integer"); scanf("%d",&n);
				} while (n<=1);
        		printPrime(n);
        		getch();
        		break;
        	case 2: 
        		do {
					printf("Enter positive date (DD/MM/YYYY): ");
					scanf("%d/%d/%d",&d,&m,&y);
				} while (d<0||m<0||y<0);
				if (validDate(d,m,y)==0)
					printf("Invalid Date");
	 			else printf("Valid Date");
	 			getch();
	 			break;
        	case 3:	
        		do{ 
					printf("Enter Radius: "); scanf("%lf",&r); 
				} while (r<0);
				printf("Enter position x,y of point "); scanf("%lf%lf",&x,&y1);
				getCircle(r,x,y1);
        		getch();
        		break;
        	case 4: 
        		do{
					printf("Enter a positive integer"); scanf("%d",&n);
					while (n>12){
						printf ("Too long enter again"); scanf("%d",&n);
					}
				} while (n<=0 );
				getfactorial(n);
        		getch();
				break;
        	case 5:
        		do{
					printf("Enter a positive integer "); scanf("%d",&n);
					while (n>46){
						printf ("Too long enter again "); scanf("%d",&n);
					}
				} while (n<1);
				getFibo(n);
				getch();
        		break;
        	case 6:
        		do{
					printf("Enter a positive integer "); scanf("%d",&n);
					while (n>2147483647){
						printf ("Too long enter again "); scanf("%d",&n);
					}		
				} while (n<1);
				if (isFibo(n)==1) printf("%d is a Fibonacci element",n);
				else printf ("%d is not a Fibonacci element",n);
				getch();
				break;
			case 7:
				do{
					printf("Enter a positive integer (n<0 to exit) "); scanf("%d",&n);
					while (n>2147483647){
						printf ("Too long enter again "); scanf("%d",&n);
					}
					if (n>=0)
					printf("Sum digits of %d is %d\n",n,sumDigit(n));
				} while (n>=0);
				getch();
				break;
			case 8:
				printf("Enter ipart ");
				scanf("%d",&p);
				printf("Enter fraction ");
				scanf("%d",&f);
				printf("The real number i: %f",makeD(p,f));
				getch();
				break;
			case 9: 
				printf("Enter 2 numbers to find GDC & LCM "); scanf("%d%d",&a,&b);
				printf("GCD: %d\n",gcd(a,b));
				printf("LCM: %d\n",lcm(a,b));
				getch();
				break;
			case 10:
				do{
					printf("Enter a positive integer "); scanf("%d",&n);
				} while (n<1);
				printmaxmin(n);
				getch();
				break;
        	case 11: break;
        	default: printf("No have %d, chosse again",chosse); getch(); break;
		}
	}
	while (chosse !=11);
	return 0;
}
