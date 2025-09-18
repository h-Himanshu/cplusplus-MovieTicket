void mergeFiles();
struct a
{
    int g[101];
} k;
void clear()
{
    FILE *fp,*fp1;
    int i;
    char c;
    for(i=1;i<=100;i++)
    {
        k.g[i]=i;
    }
    fp=fopen("read.dat","wb");
    fwrite(&k,sizeof(k),1,fp);
    fclose(fp);
    for(i=0;i<2;i++)
    {
        fp=fopen("read.dat","ab");
        fwrite(&k,sizeof(k),1,fp);
        fclose(fp);
    }
    mergeFiles();
    fp1=fopen("details.txt","r");
    fp=fopen("record.txt","a");
    while(fscanf(fp1,"%c",&c)!=EOF)
    {
        fprintf(fp,"%c",c);
    }
    fclose(fp);
    fclose(fp1);
    remove("details1.txt");
    fp=fopen("details.txt","w");
    fclose(fp);

    remove("details2.txt");
    fp=fopen("details2.txt","w");
    fclose(fp);

    remove("details3.txt");
    fp=fopen("details3.txt","w");
    fclose(fp);
    printf("\nRecord has been cleared succesfully!\n");
    
}
