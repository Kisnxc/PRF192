#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	double a,b; char f; 
	printf("enter first number "); scanf("%lf",&a); 
	getchar();
	printf ("enter '+' or '-' or '*' or '/' or '%%' "); scanf("%c",&f); 
	printf("enter second number "); scanf("%lf",&b);
	switch (f){
		case '+': printf("%lf + %lf = %lf",a,b,a+b);
		break;
		case '-': printf("%lf - %lf = %lf",a,b,a-b);
		break;
		case '*': printf("%lf * %lf = %lf",a,b,a*b);
		break;
		case '/':if(b==0){ printf ("divided by 0 is undefined");}else
			 printf("%lf / %lf = %lf",a,b,a/b);
		break;  
		case '%': if(b==0) printf ("divided by 0 is undefined"); 
		else{
		while (a != (int)a || b != (int)b) 
						{printf ("re-enter the integer ");
						scanf("%lf %lf",&a,&b);} 
			if (a == (int)a && b == (int)b){    
			int z=(int)a; int x=(int)b;
			printf ("%d %% %d = %d ",z,x,z%x);
		}   
	}
		break;
		default: printf("no have %c",f); 
		break;
}
	return 0;
}

