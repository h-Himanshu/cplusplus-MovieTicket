#include<stdio.h>
#include<stdlib.h>
void store2(struct moviedetails s,int mvieno);
struct booked g;
void store2(struct moviedetails s,int mvieno)
{
    int i=0,d;
    FILE *file = fopen("read.dat", "rb+");
    if (file == NULL) {
       exit(0);
    }

    fseek(file, (mvieno - 1) * sizeof(g), SEEK_SET);
    fread(&g, sizeof(g), 1, file);
    while(i<s.nseat)
    {
        d=s.seats[i];
        g.n[d]=0;
        i++;
    }
    // Write the updated record back to the file
    fseek(file, (mvieno - 1) * sizeof(g), SEEK_SET);
    fwrite(&g, sizeof(g), 1, file);

    fclose(file);
}