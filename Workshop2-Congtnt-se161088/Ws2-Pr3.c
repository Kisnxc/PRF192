#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int checkPrimes (int i){
	int j=2;
	for (j;j<=sqrt(i);j++)
		if (i%j==0) return 0;
	return 1;
}
void printPrimes(int n){
	int count=0,i=2;
	while (count<=n-1){ 
		if (checkPrimes(i)==1) {
			printf ("%d ",i);
			count++; 
		}
		i++;	
	}
}
int main(int argc, char *argv[]) {
	int n;
	do{
		printf("enter positive integer");
		scanf("%d",&n);
	}
	while (n<=1);
	printPrimes(n);
	return 0;
}
