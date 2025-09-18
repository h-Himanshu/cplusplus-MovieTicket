void mergeFiles();
void viewDetails() {
    int i=0;
    struct moviedetails e;
    char c;
    FILE *fp1;
	mergeFiles();
    fp1=fopen("details.txt","r");
    
        printf("\n--- RESERVED TICKETS DETAILS ---\n");
        while(c=fgetc(fp1)!=EOF)
        {
        	fseek(fp1,-1,SEEK_CUR);
        	fscanf(fp1,"%s%s%s%s%s%d",&e.movieName,&e.showDate,&e.name,&e.phone,&e.seats,&e.id);
        	printf("\n");
            printf("Movie Name: %s\n", e.movieName);
            printf("Show Date: %s\n", e.showDate);
            printf("Customer Name: %s\n", e.name);
            printf("Customer Phone: %s\n", e.phone);
            printf("Reserved Seat No.: %s\n", e.seats);
            printf("Reservation ID: %d\n", e.id);
            fseek(fp1,1,SEEK_CUR);
            printf("%c",fgetc(fp1));
		}
		fclose(fp1);
    
}
