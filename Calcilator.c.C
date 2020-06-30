#include<stdio.h>
#include<stdlib.h>
int main()
 {
    int choice;
    double first, second;
    char ch;
    clrscr();
    do
    {
	printf("\nEnter Your Choice");
	printf("\n\tPress 1 For Addition\n");
	printf("\tPress 2 For Subscration\n");
	printf("\tPress 3 For Multiplication\n");
	printf("\tPress 4 For Division\n");
	printf("\tPress 5 For Exit\n");
	scanf("%d",&choice);
	clrscr();

	if(choice==5)
	{
	     printf("Thank You!");
	     sleep(2);
	     exit(0);
	}
	if (choice>5)
	printf("Please Enter From Below!");

	else if(choice<=0)
	printf("Read Carefully!");
	else
	{
	     printf("Enter two operands: ");
	     scanf("%lf %lf", &first, &second);
	}
    switch (choice)
    {
	case 1:

		printf("%.1lf + %.1lf = %.2lf", first, second,first+second);
		break;
	case 2:

		printf("%.1lf - %.1lf = %.2lf", first, second,first-second);
		break;
	case 3:

		printf("%.1lf * %.1lf = %.2lf", first, second,first*second);
		break;
	case 4:

		printf("%.1lf / %.1lf = %.2lf", first, second,first/second);
		break;
	   }
	 }
       while(choice!=5);

    getch();
 return choice;
}