#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char c1,c2; int t;
	printf("enter 2 characters ");
	scanf("%c %c",&c1,&c2);  
	getchar();
	if (c1>c2){ 
	t=c1; c1=c2; c2=t;
	} 
	printf ("Character  Dec  Octal  Hex\n");
	printf ("---------  ---  -----  ---\n");
	for (c1; c1<=c2;c1++){
		printf ("%5c%9d%7o%5X\n",c1,c1,c1,c1);
	}

	return 0;
}
