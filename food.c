#include<stdio.h>
main()
{
int choice=4;
	switch(choice)
	{
		case 1:printf("food item is pasta,price is 239.");
		break;
        case 2:printf("food item is burger,price is 129.");
        break;
        case 3:printf("food item is pasta,price is 179.");
        break;
        case 4:printf("food item is french fries,price is 99.");
        break;
        case 5:printf("food is sandwich,price of 149.");
        default:
        	printf("choice is invalid");
	}
	return 0;
}
