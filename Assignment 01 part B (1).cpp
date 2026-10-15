#include<stdio.h>
int main ()
{
	int no_of_guests=1 , season_name , room_type , no_of_nights , room_price, discount,price, total_price , Hotel_total_revenue;
	printf("Enter season name (1 for peak and 2 for off peak)\n");
	scanf("%d",&season_name);
	printf("Enter room type (1 for standard, 2 for deluxe, 3 for suite)\n");
	scanf("%d",&room_type);
	switch(season_name)
	{
		case 1:
			switch(room_type)
			{
				case 1:
					room_price=5000;
			        printf("room price of standard room per night is Rs. %d /night \n",room_price);
			        break;
			    case 2:
			    	room_price=8000;
			        printf("room price of deluxe room per night is Rs. %d /night \n",room_price);
			        break;
			    case 3:
				    room_price=12000;
			        printf("room price of suite room per night is Rs. %d /night \n",room_price);
			        break;
			    default:
			        printf("Invalid room type\n ");	
			}
			break;
		case 2:
			switch(room_type)
			{
				case 1:
					room_price=3000;
			        printf("room price of standard room per night is Rs. %d /night \n",room_price);
			        break;
			    case 2:
			    	room_price=5000;
			        printf("room price of deluxe room per night is Rs. %d /night \n",room_price);
			        break;
			    case 3:
			    	room_price=8000;
		 	        printf("room price of suite room per night is Rs. %d /night \n",room_price);
			        break;
			    default:
			    	printf("Invalid room type\n ");	
			}
		    break;
		default:
			printf("Invalid season name \n ");
	}
	printf("how many nights guest want to stay ? \n");
	scanf("%d",&no_of_nights);
	if (no_of_nights > 7)
	{
		price=room_price*no_of_nights;
		discount=price*15/100;
		printf("dicount=%d \n",discount);
		total_price=(room_price*no_of_nights)-discount;
		printf("Total price of guest: %d \n",total_price);
	}
	else
	{
		total_price=room_price*no_of_nights;
		printf("Total price of guest: %d \n",total_price);
	}
	Hotel_total_revenue=total_price;
	printf("Hotel total revenue of one available guest is %d ",Hotel_total_revenue);
	return 0;
}

    
	


//   {
//		
//		
//		
//		if(room_type==1)
//		{
//			room_price=5000;
//			printf("room price of standard room per night is Rs. %d /night \n",room_price);
//		}
//		else if(room_type==2)
//		{
//			room_price=8000;
//			printf("room price of deluxe room per night is Rs. %d /night \n",room_price);
//		}
//		else if(room_type==3)
//		{
//			room_price=12000;
//			printf("room price of suite room per night is Rs. %d /night \n",room_price);
//		}
//		else
//		{
//			printf("Invalid room type\n ");
//		}
//	}
//	else if(season_name==2)
//	{
//		if(room_type==1)
//		{
//			room_price=3000;
//			printf("room price of standard room per night is Rs. %d /night \n",room_price);
//		}
//		else if(room_type==2)
//		{
//			room_price=5000;
//			printf("room price of deluxe room per night is Rs. %d /night \n",room_price);
//		}
//		else if(room_type==3)
//		{
//			room_price=8000;
//			printf("room price of suite room per night is Rs. %d /night \n",room_price);
//		}
//		else
//		{
//			printf("Invalid room type\n ");
//		}
//	}
//	else
//	{
//		printf("Invalid season name \n ");
//	}
//	printf("how many nights guest want to stay ? \n");
//	scanf("%d",&no_of_nights);
//	if (no_of_nights > 7)
//	{
//		price=room_price*no_of_nights;
//		discount=price*15/100;
//		printf("dicount=%d \n",discount);
//		total_price=(room_price*no_of_nights)-discount;
//		printf("Total price of guest: %d \n",total_price);
//	}
//	else
//	{
//		total_price=room_price*no_of_nights;
//		printf("Total price of guest: %d \n",total_price);
//	}
//	Hotel_total_revenue=total_price;
//	printf("Hotel total revenue of one available guest is %d ",Hotel_total_revenue);
//	return 0;
//}