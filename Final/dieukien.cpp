




//   Dieu kien cho menu
do	
		{
			fflush(stdin);
			printf("You choose: ");
	        scanf("%c%c", &choose,&z);
	    } while ((choose!='1' || z!='\n'  ) && (choose!='2' || z!='\n'  ) && (choose!='3' || z!='\n'  )) ;
	    
// dieu kien cho so nguyen n
do{
						fflush(stdin);
						if (n>=1277) {
							printf("Too much!!!\n");
							n=0;
						}
						printf("Please enter an integer (0 to exit): \n");
					}while(scanf("%d%c", &n, &c) != 2 || c != '\n' || n>=1277 || n<0 );
