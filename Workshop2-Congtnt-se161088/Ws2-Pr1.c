#include <stdio.h>
#include <stdlib.h>
void printDivisors(double n){
	int i=1;
	int a = (int)n ;
	for (i; i<=n/2; i++)
		if (a%i==0)  printf ("%d ",i);
}
int sumDivisors(double n){
	int sum=0;
	int i=1; 
	int a = (int)n ;
	for (i;i<=n/2;i++){
		if (a%i==0)
			sum+=i;
	}
	return sum;	
}
int main (int argc, char *argv[]){
	double n;
	do {
		printf("input a positive integer");
		scanf("%lf",&n);
   	} while (n<=1 || n != (int)n );
	printDivisors(n);
	printf ("\nSum of Divisor: %d",sumDivisors(n));
}
