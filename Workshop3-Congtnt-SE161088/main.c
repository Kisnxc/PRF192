#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) { 
	int a[100]; int i=0;
	do{
	printf("Enter integer number");
	scanf("%d",&a[i]);
	i++;
} while(i!=5);
for (int j=0;j<i;j++)
	printf("Array:%d ",a[j]);
	return 0;
}
