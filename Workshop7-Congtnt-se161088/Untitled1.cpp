 
 
 #include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string.h>
#include <ctype.h>
 
 
 
 
 int main(int argc, char *argv[]) {
	int a=10;
	char *s1="abcdefgh";
	char *s2="abcdefdh";
	if (strcmp(s1,s2) >0) printf ("positive"); else printf("negative");
	return 0;

}
