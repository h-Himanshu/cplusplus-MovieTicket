#include"header.h"
int store(struct moviedetails,int movie_no);
struct moviedetails person;
struct booked h;
void store2(struct moviedetails e,int Tnum);
void ticket1(int choice,struct moviedetails e,int id2,int price);
void ticket2(int choice,struct moviedetails e,int id2,int price);
void ticket3(int choice,struct moviedetails e,int id2,int price);
void ticket2(int choice,struct moviedetails e,int id2,int price)
{       int i=0;
		printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : BLUE BEETLE\n",id2);
        printf("\t Customer  : %s\n",e.name);
        printf("\t\t\t                              Date      : 18-08-2023\n");
        printf("\t                                              Time      : 04:00pm\n");
        printf("\t                                              Hall      : 01\n");
        printf("\t                                              Seats No. :");
        while(i<e.nseat)
        {
            printf("%d ",e.seats[i]);
            person.seats[i]=e.seats[i];
            i++;
        }
        printf("\n");
        printf("\t                                              Price . : %d  \n\n",(price*e.nseat));
        person.id=id2;
        strcpy(person.name,e.name);
        // person.seat=choice;
        strcpy(person.phone,e.phone);
        strcpy(person.showDate,"18-08-2023");
        strcpy(person.movieName,"BLUE_BEETLE");
        person.nseat=e.nseat;
        store(person,2);
        store2(person,2);
        printf("\t============================================================\n");
        return;
}
void ticket3(int choice,struct moviedetails e,int id2,int price)
{
        int i=0;
		printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : GADAR 2\n",id2);
        printf("\t Customer  : %s\n",e.name);
        printf("\t\t\t                              Date      : 18-08-2023\n");
        printf("\t                                              Time      : 08:00pm\n");
        printf("\t                                              Hall      : 01\n");
        printf("\t                                              Seats No. :");
        while(i<e.nseat)
        {
            printf("%d ",e.seats[i]);
            person.seats[i]=e.seats[i];
            i++;
        }
        printf("\n");
        printf("\t                                              Price . : %d  \n\n",(price*e.nseat));
        person.id=id2;
      
        strcpy(person.phone,e.phone);
        strcpy(person.name,e.name);
        strcpy(person.showDate,"18-08-2023");
        strcpy(person.movieName,"GADAR_2");
        person.nseat=e.nseat;
        printf("\t============================================================\n");
        store(person,3);
        store2(person,3);
        return;
}
void ticket1(int choice,struct moviedetails e,int id2,int price)
{      
        int i=0;
		printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : HINDDA HINDDAI\n",id2);
        printf("\t Customer  : %s\n",e.name);
        printf("\t\t\t                              Date      : 18-08-2023\n");
        printf("\t                                              Time      : 11:00am\n");
        printf("\t                                              Hall      : 01\n");
        printf("\t                                              Seats No. :  ");
        while(i<e.nseat)
        {
            printf("%d ",e.seats[i]);
            person.seats[i]=e.seats[i];
            i++;
        }
        printf("\n");
        printf("\t                                              Price . : %d  \n\n",(price*e.nseat));
		person.id=id2;
        strcpy(person.phone,e.phone);
        strcpy(person.name,e.name);
		strcpy(person.showDate,"18-08-2023");
        strcpy(person.movieName,"HINDDA_HINDDAI");
        person.nseat=e.nseat;
		store(person,1);
        store2(person,1);
        printf("\t============================================================\n");
        return;
}
