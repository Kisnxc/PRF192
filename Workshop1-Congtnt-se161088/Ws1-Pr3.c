#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[])
{
    char c=NULL;
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;
	printf("input the string ");		
    while(c!='\n')
    {    c=getchar();
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            alp++;
        }
        else if(c>='0' && c<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }
    }
	printf("Digits : %d\n", digit);
    printf("Letter : %d\n", alp);
    printf("Others : %d\n\n", splch-1);
}
