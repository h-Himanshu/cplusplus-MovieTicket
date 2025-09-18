#ifndef MOVIETICKET_H
#define MOVIETICKET_H

struct moviedetails {
    char movieName[100];
    char showDate[16];
    char showTime[8];
    char name[50];
    char phone[10];
    int seat;
    int nseat;
    int id;
    int seats[10];
};

struct booked
{
    int n[101];
};
// Function declarations...

#endif