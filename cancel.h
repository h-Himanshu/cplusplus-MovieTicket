#include"structure.h"
void cancel(int sel) {
    int Cid, i=0, stop = 0,numseats;
    struct moviedetails e;
	struct booked l;
	int seats[100],d;
    FILE *fp;
    FILE *temp = fopen("temp.txt", "w");
    switch(sel)
    {
    	case 1:
    		fp=fopen("details1.txt","r");
    		break;
		case 2:
			fp=fopen("details2.txt","r");
			break;
		case 3:
			fp=fopen("details3.txt","r");
			break;
		default:
			printf("Error opening file");
			break;
	}
    
    printf("Please enter the ID number of the ticket to cancel: ");
    scanf("%d",&Cid);
    while (fscanf(fp,"%s%s%s%s%s%d",&e.movieName,&e.showDate,&e.name,&e.phone,&e.seats,&e.id)!= EOF) 
	{
        if (e.id != Cid)
        {
        fprintf(temp,"%s\t", e.movieName);
        fprintf(temp,"%s\t", e.showDate);
        fprintf(temp,"%s\t", e.name);
        fprintf(temp,"%s\t", e.phone);
        fprintf(temp,"%s\t", e.seats);
        fprintf(temp,"%d\n", e.id);
        }
        else
		{
        stop=1;
		i=0;
		while(i<e.nseat)
		{
			seats[i]=e.seats[i];
			i++;
		}
		numseats=e.nseat;
		}
            
    }
    fclose(fp);
    fclose(temp);
    switch(sel)
    {
    	case 1:
    		remove("details1.txt");
    		rename("temp.txt", "details1.txt");
    		break;
		case 2:
			remove("details2.txt");
			rename("temp.txt", "details2.txt");
			break;
		case 3:
			remove("details3.txt");
			rename("temp.txt", "details3.txt");
			break;
		default:
			printf("Error!");
			break;
	}

    if(stop == 0)
	{
		printf("Ticket ID number is incorrect. Please enter the correct one to cancel the ticket.\n");
	}
    else
	{
		printf("Ticket cancelled successfully!");
	}   
    fclose(fp);
	i=0;
	fp=fopen("read.dat","rb+");
	while(i<numseats)
	{
	
    if (fp == NULL) {
       exit(0);
    }

    fseek(fp, (sel - 1) * sizeof(l), SEEK_SET);
    fread(&l, sizeof(l), 1, fp);
    while(i<numseats)
    {
        d=e.seats[i];
        l.n[d]=d;
        i++;
    }
    // Write the updated record back to the file
    fseek(fp, (sel - 1) * sizeof(l), SEEK_SET);
    fwrite(&l, sizeof(l), 1, fp);

    fclose(fp);
	}
        
}
