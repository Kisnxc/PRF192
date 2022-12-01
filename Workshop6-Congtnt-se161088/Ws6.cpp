#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a[100],b; char chosse;
	int i=0;
	do{
		system("cls");
		printf("\t\t\t ====================MENU=======================\n");
        printf("\t\t\t |1-	Add  a value\n");
		printf("\t\t\t |2-	Search a value\n");
		printf("\t\t\t |3-	Remove the first existence of a value\n");
		printf("\t\t\t |4-	Remove all existence of a value\n"); 
		printf("\t\t\t |5-	Print out the array \n");
		printf("\t\t\t |6-	Print out even values in array\n");
		printf("\t\t\t |7-	Print out the maximum value of the array\n");
		printf("\t\t\t |8-	Print out values in a range\n");
		printf("\t\t\t |9-	Print out the array in ascending order (bubble sort)\n");
		printf("\t\t\t |0-	End. \n	");			
        printf("\t\t ================================================\n");
        printf("You chosse: "); 
        scanf("%c", &chosse);
        
        switch (chosse){
        	case'0':
        			break;
        	case'1':printf("Enter integer number");
					scanf("%d",&a[i]);
					printf("Add success");
					i++;
       				getch();
       				break;
        	case'5':for (int j;j<=i;j++)
        				printf("Array: %d",a[j]);
        			getch();
        			break;
        	default: printf("Chosse again"); getch();
		}
	} while(chosse!='0');
    return 0;
}





