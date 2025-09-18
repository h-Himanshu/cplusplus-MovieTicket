#include"header.h"
void mergeFiles()
{
	FILE *fp,*fp1;
	char c;
	remove("details.txt");
    fp1=fopen("details.txt","w");
    
    fp=fopen("details1.txt","r");
    while((fscanf(fp,"%c",&c))!=EOF)
    {
    	fprintf(fp1,"%c",c);
	}
    fclose(fp);
    fp=fopen("details2.txt","r");
     while(fscanf(fp,"%c",&c)!=EOF)
    {
	fprintf(fp1,"%c",c);
	}
    fclose(fp);
	fp=fopen("details3.txt","r");
	 while(fscanf(fp,"%c",&c)!=EOF)
    {
	fprintf(fp1,"%c",c);
	}
    fclose(fp);
    fclose(fp1);
}