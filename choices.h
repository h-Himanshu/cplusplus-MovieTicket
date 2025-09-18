int choiceUser() {
   int choice;
	printf("                 Simple Movie Ticket Booking System\n");
	printf(" ==================================================================\n");
	printf("||             1- To purchase ticket:                             ||\n");
	printf("||             2- To cancel the seat:                             ||\n");
	printf("||             3- Exit system:                                    ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}

int choiceAdmin() {
    int choice;
	printf("                 Simple Movie Ticket Booking System\n");
	printf(" ==================================================================\n");
	printf("||             1- View details:                                   ||\n");
	printf("||             2- To clear Today's record :                       ||\n");
	printf("||             3- Exit system:                                    ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;

}
