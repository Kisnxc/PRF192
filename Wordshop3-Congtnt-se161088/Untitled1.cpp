#include <stdio.h>
#include <stdlib.h>
 
int clean_stdin() {
    while (getchar() != 'n') {
    }
    return 1;
}
int CheckInteger(){	
	int number; char c;
	int check = 0;	
	do{
		printf("Please enter an integer: \n");	
	}while(scanf("%d%c", &number, &c) != 2 || c != '\n');	
	return number;
}
 
int main(void) {
    int input;
    char c;
    printf("%d",CheckInteger()); 
}
