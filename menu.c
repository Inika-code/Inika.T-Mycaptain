#include<stdio.h>
int main()
{
	printf("Enter a number:");
	int choice;
	scanf("%d",&choice);
	
	switch(choice)	
    {
    case 1:	
       printf("Food item -French Fries\nPrice-Rs99");
	   break;
	case 2:
	   printf("Food item -Pizza\nPrice-Rs239");
	   break;
	case 3:  
	   printf("Food item -Burger\nPrice-Rs129");
	   break;
	case 4:
	   printf("Food item -Sandwich\nPrice-Rs149");
	   break;
	case 5:
	   printf("Food item -Pasta\nPrice-179");
	   break;
	default:
	   printf("Invalid  choice");
	   return 0;
}
}
