#include<stdio.h>
#include<string.h>
int movie(int sel)
{
	int i;
	char **a,usr[10];
	system("cls");
	if(sel==1)
	{
		strcpy(usr,"book");
	}
	else
	{
		strcpy(usr,"cancel");
	}
	printf("\t\t\twhich movie ticket you want to %s?\n",usr);
	printf("\t\t\t----------------------------\n\n");
	printf("\t\t\tpress 1 for HINDDA HINDDAI\n\n");
	printf("\t\t\tpress 2 for BLUE BEETLE\n\n");
	printf("\t\t\tpress 3 for GADAR 2\n");
	scanf("%d",&i);
	return i;
}