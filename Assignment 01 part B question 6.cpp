#include<stdio.h>
int main()
{
	
	char station_available,vehicle_type, membership, disabled_priority ;
	int required_level , current_battery , required_charging, parking_duration, current_time;
	int qualifies=0;
	int charging_cost_final=0;
	int discount=0;
	
	printf("Is station available (Y for yes and N for No):");
	scanf(" %c",&station_available);
	
	printf("Enter vehicle type (E for electric and H for hybrid ):");
	scanf(" %c",&vehicle_type);
	
	printf("what is the current battery%%:");
	scanf("%d",&current_battery);
	
	printf("what required level of battery %% customer wants:");
	scanf("%d",&required_level);
	
	printf("Is customer has a parking membership(Y for yes and N for No)");
	scanf(" %c",&membership);
	
	printf("Is customer has a disabled-person priority status(Y for yes and N for No)");
	scanf(" %c",&disabled_priority);
	
	
	if (station_available == 'N')
	{
		if (vehicle_type == 'H')
		{
            printf("Charging unavailable – Parking only\n");
        }
        else
        {
        	printf("No charging slot available\n");
		}
	}
	else if(station_available == 'Y')
	{
		if(vehicle_type == 'E')	
		{
			qualifies=1;
		}
		else if(vehicle_type == 'H')
		{
			if(current_battery<40)
			{
				qualifies=1;
			}
		else 
			{
				printf("Vehicle does not qualify for EV charging\n");
			}
		}	
	}
	else
	{
		printf("Invalid station available");
	}
	if(qualifies==1)
	{
		required_charging=required_level-current_battery;
	if(required_level<=current_battery)
	{
		printf("No charging required.\n");
	}
	else
	{
		int emergency=0;
		if(current_battery <= 15 && required_level >= 80)
    {
        printf("Emergency Charging Priority\n");
        emergency=1;
    }
    else if(disabled_priority == 'Y' || (membership == 'Y' && current_battery<= 30))
    {
        printf("Priority Charging\n");
    }
    else
    {
        printf("Normal Charging\n");
    }
    printf("Enter current time (24hrs format):");
    scanf("%d",&current_time);
    
    int rate;
    if(current_time < 17 || current_time>22)
    {
    	rate=35;
	}
	else
	{
		rate=50;
	}
	
	int charging_cost=required_charging*rate;
	
	if(emergency==1)
	{
		discount=0;
	}
	else if(membership=='Y')
	{
		if(rate==35)
		{
			discount=(charging_cost*20)/100;
		}
		else
		{
			discount=(charging_cost * 10) / 100;
		}
	}
	charging_cost_final=charging_cost-discount;
	}
	}
	printf("Enter expected parking time (hours):");
	scanf("%d",&parking_duration);
	
	int parking_cost;
	if(parking_duration<=2)
	{
		parking_cost=200;
	}
	else if(parking_duration<=5)
	{
		parking_cost=400;
	}
	else
	{
		parking_cost=700;
	}
	
	int parking_cost_final;
	if(disabled_priority=='Y')
	{
		parking_cost_final=0;
	}
	else if(membership=='Y')
	{
		int parking_discount=(parking_cost*20)/100;
		parking_cost_final=parking_cost - parking_discount;
	}
	else
	{
		parking_cost_final=parking_cost;
	}
	if(parking_duration>8)
	{
		printf("Long stay warning: please relocate your vehicle after charging \n");
	}
	else
	{
		printf("Standard parking duration\n");
	}
	printf("\n\tsummary\t\n");
	printf("Vehicle type:%c\n",vehicle_type);
	printf("Current battery:%d%%\n",current_battery);
	printf("Required charging level percentage:%d%%\n",required_level);
	printf("Parking cost: Rs.%d\n", parking_cost_final);
	
	if(qualifies==1 && required_level > current_battery)
{
    printf("Charging cost: Rs. %d\n", charging_cost_final);
    printf("Charging discount: Rs. %d\n", discount);
    printf("Final payable: Rs. %d\n", charging_cost_final + parking_cost_final);
}
else
{
    printf("Charging cost: Rs. 0\n");
    printf("Final payable: Rs. %d\n", parking_cost_final);
}

return 0;
	
}