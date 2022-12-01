#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int checkPrimes (double i){
	int j=2;
	int a=(int)i;
	for (j;j<=sqrt(a);j++)
		if (a%j==0) return 0;
	return 1;
}
void printPrimes (double n){
	int i=2;
	for (i;i<=n;i++){
		if (checkPrimes(i)==1)
			printf("%d ",i);
	}
}
int main (int argc, char *argv[]){
	double n;
	do{
		printf("enter positive integer ");
		scanf("%lf",&n);
	} while (n<=1 || n != (int)n);
	printPrimes(n);
	return 0;
	
}
