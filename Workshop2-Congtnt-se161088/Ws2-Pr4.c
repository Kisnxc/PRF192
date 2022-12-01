#include <stdio.h>
#include <stdlib.h>


int min(int a,int b){
		if (a>b) return b; 
			else return a;
}
int printGCD(int a,int b){
	int i,d;	
	min(a,b);
	for (i=min;i>0;i--){
		if((a%i==0)&&(b%i==0))
		 return i;
	}
}
int printLCM(int a,int b){
	int i,d=0;
	for (i=1; ;i++){
		if ((i%a==0)&&(i%b==0)) 
			return i;
	}
}  
int main(int argc, char *argv[]) {
	int a,b;
	do{
		printf("Enter 2 positive integers ");
		scanf("%d%d",&a,&b); 
	} while (a<=1 || b<=1);
	printf("GCD: %d\n",printGCD(a,b));
	printf("LCM: %d",printLCM(a,b));
	return 0;
}
