#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"reservation1.h"
#include"movie.h"
#include"store.h"
#include"choices.h"
#include"cancel.h"
#include"merge_file.h"
#include"view_details.h"
#include"clear_all.h"
#include"store_booked_ticket.h"
#include<stdio.h>
#include<time.h>
time_t tme;
void reservation(int *array, int price, int selection);
void viewDetails();
int choiceUser();
int choiceAdmin();
int changePrice(int price);
void cancel(int );
void clear();

int main() {
    struct moviedetails person[300];
    int **seat, price = 500, selection,mselection, i;
     char adminPassword[20];
     int adminChoice;
    seat = (int **)calloc(3, sizeof(int *));
    for (i = 0; i < 3; i++)
        *(seat + i) = (int *)calloc(101, sizeof(int));
    int x = 0;

    while (x != 5) {
        int userType;
        start:
        printf("\nAre you a User or an Admin?\n");
        printf("1. User\n");
        printf("2. Admin\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &userType);

        switch (userType) {
            case 1:
                selection = choiceUser();
                switch (selection) 
				{
                	case 1:
                		mselection=movie(1);
                		switch(mselection)
                		{
                			case 1:
                        		reservation(seat[0], price, 1);
                        		break;
                    		case 2:
                        		reservation(seat[1], price, 2);
                        		break;
                    		case 3:
                        		reservation(seat[2], price, 3);
                        		break;
						}
						break;
                	case 2:
                		mselection=movie(0);
                		cancel(mselection);
                	case 3:
                		 goto start; // Exit
                        break;
                        
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                break;
            case 2:
                // Admin panel with password-based authentication

                printf("Enter the admin password: ");
                scanf("%s", adminPassword);
                if (strcmp(adminPassword, "movie") != 0) {
                    printf("Incorrect password! Access denied.\n");
                } else {
                    
                        adminChoice = choiceAdmin();
                        switch (adminChoice) 
                    {
                        		
                            case 1:
                            viewDetails();
                                break;
                            case 2:
                            clear();
                                break;
                            case 3:
                                goto start;// Exit from admin panel
                                break;
                            default:
                                printf("Invalid choice\n");
                                break;
                    }
                }
                break;
            case 3:
                x = 5; // Exit
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
