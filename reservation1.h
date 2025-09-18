#include"structure.h"
#include"header.h"
#include"ticket.h"
void ticket1(int ,struct moviedetails,int ,int );
void ticket2(int ,struct moviedetails,int ,int );
void ticket3(int ,struct moviedetails,int ,int );
struct booked m;
void reservation(int *array, int price, int selection) {
    int i, j,seats[10],ch,y;
    time_t tme;
    time(&tme);
    struct moviedetails person;
    FILE *fp;
    switch(selection)
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

    printf("\n--- SCREEN ---\n\n");
    FILE *fp1=fopen("read.dat","rb");
    rewind(fp1);
    fseek(fp1,(selection-1)*sizeof(m),SEEK_CUR);
    fread(&m,sizeof(m),1,fp1);
    for (i = 1; i < 101; i++) {
        printf("%d\t", m.n[i]);
        if (i % 10 == 0)
            printf("\n\n");
    }
    fclose(fp1);
    printf("how many seats do you want:");
    scanf("%d",&ch);
    person.nseat=ch;
    printf("Please enter your name: ");
    scanf(" %s", &person.name);
    printf("Please enter your phone number: ");
    scanf("%s", person.phone);
    for(i=0;i<ch;i++)
    {
        printf("Which seat number do you want for %d? ",i+1);
        scanf("%d", &seats[i]);
        j=seats[i];
    while(j > 100 || j < 1) 
    {
        printf("Seat number is unavailable in this theater\n");
        printf("Please re-enter the seat number: ");
        scanf("%d", &j);
    }
    while(m.n[j] == 0) {
        printf("Sorry, this seat is already booked! Please choose another seat.\n");
        scanf("%d", &j);
    }
       

    person.seats[i] = j;
    }
    // for(i=0;i<ch;i++)
    // {
    //     printf("%d,",person[count].seats[i]);
    // }
    person.id = tme%1000;
    if (selection == 1)
    {
        ticket1(j,(person), tme%10000, price);
	}	
	else if (selection==2) 	
	{
		ticket2(j,(person),tme%10000,price);
	}
			
	else 
	{
		ticket3(j,(person),tme%10000,price);
	}
    
}
