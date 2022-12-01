#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int n; 
	
	
	do {
	printf("Re-enter positive integers ");scanf ("%d",&n) ;
	}
	while (n<0);
	
	if (n<=100){ printf("electric bill is %d",n*950);
	} else if (n<=150){ printf("electric bill is %d",95000+(n-100)*1250);}
	  else if (n<=200){printf("electric bill is %d",95000+1250*50+(n-150)*1350);
	} else {printf("electric bill is %d",95000+1250*50+1350*50+(n-200)*1550);
	}
	
	return 0;
}
