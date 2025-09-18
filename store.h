#include<stdio.h>
int store(struct moviedetails person,int movie_no)
{
		FILE *fp;
		int j=0;
		switch(movie_no)
    {
    	case 1:
    		fp=fopen("details1.txt","a");
    		break;
		case 2:
			fp=fopen("details2.txt","a");
			break;
		
		case 3:
			fp=fopen("details3.txt","a");
			break;
		default:
			printf("Error opening file");
			break;
	}
		fprintf(fp,"%s\t", person.movieName);
        fprintf(fp,"%s\t", person.showDate);
        fprintf(fp,"%s\t", person.name);
        fprintf(fp,"%s\t", person.phone);
		while(j<person.nseat)
        {
            fprintf(fp,"%d,",person.seats[j]);
            j++;
        }
		fprintf(fp,"\t");
        // fprintf(fp,"%d\t", person.seat);
        fprintf(fp,"%d\n", person.id);
        fclose(fp);
}