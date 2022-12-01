#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isFibo(int n){
	int t1=1,t2=1,f=1,d=0;
	for (int i=0;i<=n;i++){
		f =t1+t2;
		t1=t2;
		t2=f;
	if (n==f) return 1;
	}
	return 0;
}
int main(int argc, char *argv[]) {
	int n;
	do{
		do{
			printf("Enter a positive integer "); scanf("%d",&n);
		}while (n<0);
		if (n!=0){
		if (isFibo(n)==1) printf("%d is a Fibonacci element\n",n);
				else printf ("%d is not a Fibonacci element\n",n);	
		}
	} while (n!=0);
	printf("Goodbye!!!");
	return 0;
}
