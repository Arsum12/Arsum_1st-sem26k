//#include<stdio.h>
//int main ()
//{
//	// for 1 vehicle due to not use of loop
//	int no_of_vehicles=1;
//	int zoneA=20,zoneB=40,zoneC=15 , accepted=0 , rejected=0,cars=0, bikes=0,vans=0;
//	char vehicle_type , user_category , parking_permit,emergency;
//	printf("Enter vehicle type (Cfor car , B for bike and V for van):");
//	scanf(" %c",&vehicle_type);
//	printf("Enter  user category (F for faculty , S for student and G for visitor/guest):");
//	scanf(" %c",&user_category);
//	printf("Is vehicle have the valid parking permit(Y for yes and N for no): ");
//	scanf(" %c",&parking_permit);
//	switch(parking_permit)
//	{
//		case 'Y':
//			{
//				switch(user_category)
//				{
//					case 'F':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneA>=1)
//										{
//											printf("Accept the car \n");
//											zoneA=zoneA-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneA>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneA=zoneA-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneA>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneA=zoneA-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//									break;
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//						break;
//							}
//						}
//						break;
//					case 'S':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneB>=1)
//										{
//											printf("Accept the car \n");
//											zoneB=zoneB-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneB>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneB=zoneB-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneC>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneC=zoneC-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//						break;
//						}
//						break;
//					case 'G':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneC>=1)
//										{
//											printf("Accept the car \n");
//											zoneC=zoneC-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneC>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneC=zoneC-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneC>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneC=zoneC-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//						break;
//						}
//					default:
//						{
//							printf("Invalid parking permit\n");
//				            break;
//						}
//				}
//			break;
//			}
//		case 'N':
//			{
//				printf("Is there an emergency vehicle (Y/N):");
//				scanf(" %c",&emergency);
//				switch(emergency)
//				{
//					case 'Y':
//						{
//							switch(user_category)
//				{
//					case 'F':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneA>=1)
//										{
//											printf("Accept the car \n");
//											zoneA=zoneA-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneA>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneA=zoneA-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneA>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneA=zoneA-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//						    break;
//							}
//						break;
//						}
//					case 'S':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneB>=1)
//										{
//											printf("Accept the car \n");
//											zoneB=zoneB-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneB>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneB=zoneB-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneC>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneC=zoneC-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//						break;
//						}
//						break;
//					case 'G':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneC>=1)
//										{
//											printf("Accept the car \n");
//											zoneC=zoneC-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneC>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneC=zoneC-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneC>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneC=zoneC-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//						break;
//									}
//									break;
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//						}
//			default:
//						{
//							printf("Invalid user category\n");
//				            break;
//						}
//				}
//				break;
//						}
//				    case 'N':
//					    {
//					    	printf("no permit because no emergency!\n");
//					    	rejected=rejected+1;
//					    	break;
//						}
//		   }
//			        default:
//						{
//							printf("Invalid emergency input \n");
//							break;
//						}
//			    } 
//			    break;
//		}
//	    default:
//		    {
//				printf("Invalid user category\n");
//                rejected = rejected + 1;
//                break;
//			}
//	} 
//
//}
//
//#include<stdio.h>
//int main ()
//{
//	// for 1 vehicle due to not use of loop
//	int no_of_vehicles=1;
//	int zoneA=20,zoneB=40,zoneC=15 , accepted=0 , rejected=0,cars=0, bikes=0,vans=0;
//	char vehicle_type , user_category , parking_permit,emergency;
//	printf("Enter vehicle type (Cfor car , B for bike and V for van):");
//	scanf(" %c",&vehicle_type);
//	printf("Enter  user category (F for faculty , S for student and G for visitor/guest):");
//	scanf(" %c",&user_category);
//	printf("Is vehicle have the valid parking permit(Y for yes and N for no): ");
//	scanf(" %c",&parking_permit);
//	switch(parking_permit)
//	{
//		case 'Y':
//			{
//				switch(user_category)
//				{
//					case 'F':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneA>=1)
//										{
//											printf("Accept the car \n");
//											zoneA=zoneA-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneA>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneA=zoneA-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneA>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneA=zoneA-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//							}
//						}
//						break;
//					case 'S':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneB>=1)
//										{
//											printf("Accept the car \n");
//											zoneB=zoneB-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneB>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneB=zoneB-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneC>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneC=zoneC-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//							}
//						}
//						break;
//					case 'G':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneC>=1)
//										{
//											printf("Accept the car \n");
//											zoneC=zoneC-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneC>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneC=zoneC-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneC>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneC=zoneC-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//							}
//						}
//						break;
//					default:
//						{
//							printf("Invalid user category\n");
//				            break;
//						}
//				}
//			break;
//			}
//		case 'N':
//			{
//				printf("Is there an emergency vehicle (Y/N):");
//				scanf(" %c",&emergency);
//				switch(emergency)
//				{
//					case 'Y':
//						{
//							switch(user_category)
//				{
//					case 'F':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneA>=1)
//										{
//											printf("Accept the car \n");
//											zoneA=zoneA-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneA>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneA=zoneA-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneA>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneA=zoneA-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//						    }
//						}
//						break;
//					case 'S':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneB>=1)
//										{
//											printf("Accept the car \n");
//											zoneB=zoneB-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneB>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneB=zoneB-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneC>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneC=zoneC-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//							}
//						}
//						break;
//					case 'G':
//						{
//							switch(vehicle_type)
//							{
//								case 'C':
//									{
//										if(zoneC>=1)
//										{
//											printf("Accept the car \n");
//											zoneC=zoneC-1;
//											cars=cars+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'B':
//									{
//										if(zoneC>=1)
//							            {
//							            	printf("Accept the bike \n");
//							            	zoneC=zoneC-1;
//											bikes=bikes+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								case 'V':
//									{
//										if(zoneC>=2)
//							            {
//							            	printf("Accept the van \n");
//							            	zoneC=zoneC-2;
//											vans=vans+1;
//											accepted=accepted+1;
//										}
//										else
//										{
//											printf("zone is full\n");
//											rejected = rejected + 1;
//										}
//										break;
//									}
//								default:
//									{
//										printf("invalid");
//										rejected=rejected+1;
//										break;
//									}
//							}
//						}
//						break;
//			default:
//						{
//							printf("Invalid user category\n");
//				            break;
//						}
//				}
//				break;
//						}
//				    case 'N':
//					    {
//					    	printf("no permit because no emergency!\n");
//					    	rejected=rejected+1;
//					    	break;
//						}
//					default:
//						{
//							printf("Invalid emergency input \n");
//							break;
//						}
//		   }
//			    break;
//		}
//	    default:
//		    {
//				printf("Invalid parking permit\n");
//                rejected = rejected + 1;
//                break;
//			}
//	} 
//
//	printf("\n\t Summary \t\n");
//	printf("Accepted: %d, Rejected: %d\n", accepted, rejected);
//	printf("Cars: %d, Bikes: %d, Vans: %d\n", cars, bikes, vans);
//	printf("Zone A remaining: %d, Zone B remaining: %d, Zone C remaining: %d\n", zoneA, zoneB, zoneC);
//    
//    int occA = 20 - zoneA;
//	int occB = 40 - zoneB;
//	int occC = 15 - zoneC;
// 
//	if(occA >= occB && occA >= occC)
//		printf("Zone with highest occupancy: Zone A\n");
//	else if(occB >= occA && occB >= occC)
//		printf("Zone with highest occupancy: Zone B\n");
//	else
//		printf("Zone with highest occupancy: Zone C\n");
// 
//	if(zoneA==0 && zoneB==0 && zoneC==0)
//		printf("Campus parking facility is FULL.\n");
//	else
//		printf("Campus parking facility is NOT full.\n");
// 
//	return 0;
//}
//
//#include<stdio.h>
//int main ()
//{
//	// for 1 vehicle due to not use of loop
//	int zoneA=20,zoneB=40,zoneC=15 , accepted=0 , rejected=0,cars=0, bikes=0,vans=0;
//	char vehicle_type , user_category , parking_permit , emergency;
//	int allowed=0;   
//	int parked=0;
//
//	printf("Enter vehicle type (C for car , B for bike and V for van):");
//	scanf(" %c",&vehicle_type);
//	printf("Enter user category (F for faculty , S for student and G for visitor/guest):");
//	scanf(" %c",&user_category);
//	printf("Is vehicle have the valid parking permit(Y for yes and N for no): ");
//	scanf(" %c",&parking_permit);
//
//	switch(parking_permit)
//	{
//		case 'Y':
//			allowed=1;
//			break;
//		case 'N':
//			printf("Is there an emergency vehicle (Y/N):");
//			scanf(" %c",&emergency);
//			switch(emergency)
//			{
//				case 'Y':
//					allowed=1;
//					break;
//				case 'N':
//					printf("no permit because no emergency!\n");
//					rejected=rejected+1;
//					break;
//				default:
//					printf("Invalid emergency input\n");
//					rejected=rejected+1;
//					break;
//			}
//			break;
//		default:
//			printf("Invalid parking permit\n");
//			rejected=rejected+1;
//			break;
//	}
//
//	if(allowed==1)
//	{
//		switch(user_category)
//		{
//			case 'F':
//				switch(vehicle_type)
//				{
//					case 'C':
//					case 'B':
//						if(zoneA>=1){ zoneA=zoneA-1; parked=1; }
//						break;
//					case 'V':
//						if(zoneA>=2){ zoneA=zoneA-2; parked=1; }
//						break;
//					default:
//						printf("Invalid vehicle type\n");
//						break;
//				}
//				if(parked)
//					printf("Accepted -> Zone A. Remaining: %d\n", zoneA);
//				else
//					printf("zone is full\n");
//				break;
//
//			case 'S':
//				switch(vehicle_type)
//				{
//					case 'C':
//					case 'B':
//						if(zoneB>=1){ zoneB=zoneB-1; parked=1; }
//						if(parked)
//							printf("Accepted -> Zone B. Remaining: %d\n", zoneB);
//						else
//							printf("zone is full\n");
//						break;
//					case 'V':
//						if(zoneC>=2){ zoneC=zoneC-2; parked=1; }
//						if(parked)
//							printf("Accepted -> redirected to Zone C. Remaining: %d\n", zoneC);
//						else
//							printf("no space in Zone C for student van\n");
//						break;
//					default:
//						printf("Invalid vehicle type\n");
//						break;
//				}
//				break;
//
//			case 'G':
//				switch(vehicle_type)
//				{
//					case 'C':
//					case 'B':
//						if(zoneC>=1){ zoneC=zoneC-1; parked=1; }
//						break;
//					case 'V':
//						if(zoneC>=2){ zoneC=zoneC-2; parked=1; }
//						break;
//					default:
//						printf("Invalid vehicle type\n");
//						break;
//				}
//				if(parked)
//					printf("Accepted -> Zone C. Remaining: %d\n", zoneC);
//				else
//					printf("zone is full\n");
//				break;
//
//			default:
//				printf("Invalid user category\n");
//				break;
//		}
//
//		if(parked)
//		{
//			accepted=accepted+1;
//			switch(vehicle_type)
//			{
//				case 'C': cars=cars+1;
//			    break;
//				case 'B': bikes=bikes+1;
//			    break;
//				case 'V': vans=vans+1; 
//				break;
//			}
//		}
//		else
//		{
//			rejected=rejected+1;
//		}
//	}
//
//	printf("\n\tSummary\t\n");
//	printf("Accepted: %d, Rejected: %d\n", accepted, rejected);
//	printf("Cars: %d, Bikes: %d, Vans: %d\n", cars, bikes, vans);
//	printf("Zone A remaining: %d, Zone B remaining: %d, Zone C remaining: %d\n", zoneA, zoneB, zoneC);
//
//	int occA = 20 - zoneA;
//	int occB = 40 - zoneB;
//	int occC = 15 - zoneC;
//
//	if(occA >= occB && occA >= occC)
//		printf("Zone with highest occupancy: Zone A\n");
//	else if(occB >= occA && occB >= occC)
//		printf("Zone with highest occupancy: Zone B\n");
//	else
//		printf("Zone with highest occupancy: Zone C\n");
//
//	if(zoneA==0 && zoneB==0 && zoneC==0)
//		printf("Campus parking facility is FULL.\n");
//	else
//		printf("Campus parking facility is NOT full.\n");
//
//	return 0;
//}



#include<stdio.h>
int main ()
{
	// for 1 vehicle due to not use of loop
	int zoneA=20,zoneB=40,zoneC=15 , accepted=0 , rejected=0,cars=0, bikes=0,vans=0;
	char vehicle_type , user_category , parking_permit , emergency;

	printf("Enter vehicle type (C for car , B for bike and V for van):");
	scanf(" %c",&vehicle_type);
	printf("Enter user category (F for faculty , S for student and G for visitor/guest):");
	scanf(" %c",&user_category);
	printf("Is vehicle have the valid parking permit(Y for yes and N for no): ");
	scanf(" %c",&parking_permit);

	switch(parking_permit)
	{
		case 'Y':
			switch(user_category)
			{
				case 'F':
					switch(vehicle_type)
					{
						case 'C':
						case 'B':
							if(zoneA>=1)
							{ printf("Accepted, Zone A\n"); zoneA--; accepted++; if(vehicle_type=='C') cars++; else bikes++; }
							break;
						case 'V':
							if(zoneA>=2)
							{ printf("Accepted, Zone A\n"); zoneA=zoneA-2; vans++; accepted++; }
							else { printf("zone is full\n"); rejected++; }
							break;
						default:
							printf("invalid vehicle type\n"); rejected++; break;
					}
					break;

				case 'S':
					switch(vehicle_type)
					{
						case 'C':
						case 'B':
							if(zoneB>=1)
							{ 
							   printf("Accepted, Zone B\n"); zoneB--; accepted++; 
							   if(vehicle_type=='C') cars++;
							   else bikes++; }
							else { printf("zone is full\n"); rejected++; }
							break;
						case 'V':
							if(zoneC>=2)
							{ printf("Accepted, go to Zone C\n"); zoneC=zoneC-2; vans++; accepted++; }
							else { printf("no space in Zone C for student van\n"); rejected++; }
							break;
						default:
							printf("invalid vehicle type\n"); rejected++; break;
					}
					break;

				case 'G':
					switch(vehicle_type)
					{
						case 'C':
						case 'B':
							if(zoneC>=1)
							{ printf("Accepted, Zone C\n"); zoneC--; accepted++; if(vehicle_type=='C') cars++; else bikes++; }
							else { printf("zone is full\n"); rejected++; }
							break;
						case 'V':
							if(zoneC>=2)
							{ printf("Accepted, Zone C\n"); zoneC=zoneC-2; vans++; accepted++; }
							else { printf("zone is full\n"); rejected++; }
							break;
						default:
							printf("invalid vehicle type\n"); rejected++; break;
					}
					break;

				default:
					printf("Invalid user category\n"); rejected++; break;
			}
			break;

		case 'N':
			printf("Is there an emergency vehicle (Y/N):");
			scanf(" %c",&emergency);
			switch(emergency)
			{
				case 'Y':
					// emergency vehicle -> same zone rules as above, based on category
					switch(user_category)
					{
						case 'F':
							switch(vehicle_type)
							{
								case 'C':
								case 'B':
									if(zoneA>=1)
									{ printf("Accepted -> Zone A\n"); zoneA--; accepted++; if(vehicle_type=='C') cars++; else bikes++; }
									else { printf("zone is full\n"); rejected++; }
									break;
								case 'V':
									if(zoneA>=2)
									{ printf("Accepted -> Zone A\n"); zoneA=zoneA-2; vans++; accepted++; }
									else { printf("zone is full\n"); rejected++; }
									break;
								default:
									printf("invalid vehicle type\n"); rejected++; break;
							}
							break;

						case 'S':
							switch(vehicle_type)
							{
								case 'C':
								case 'B':
									if(zoneB>=1)
									{ printf("Accepted -> Zone B\n"); zoneB--; accepted++; if(vehicle_type=='C') cars++; else bikes++; }
									else { printf("zone is full\n"); rejected++; }
									break;
								case 'V':
									if(zoneC>=2)
									{ printf("Accepted -> redirected to Zone C\n"); zoneC=zoneC-2; vans++; accepted++; }
									else { printf("no space in Zone C for student van\n"); rejected++; }
									break;
								default:
									printf("invalid vehicle type\n"); rejected++; break;
							}
							break;

						case 'G':
							switch(vehicle_type)
							{
								case 'C':
								case 'B':
									if(zoneC>=1)
									{ printf("Accepted -> Zone C\n"); zoneC--; accepted++; if(vehicle_type=='C') cars++; else bikes++; }
									else { printf("zone is full\n"); rejected++; }
									break;
								case 'V':
									if(zoneC>=2)
									{ printf("Accepted -> Zone C\n"); zoneC=zoneC-2; vans++; accepted++; }
									else { printf("zone is full\n"); rejected++; }
									break;
								default:
									printf("invalid vehicle type\n"); rejected++; break;
							}
							break;

						default:
							printf("Invalid user category\n"); rejected++; break;
					}
					break;

				case 'N':
					printf("no permit because no emergency!\n"); rejected++; break;

				default:
					printf("Invalid emergency input\n"); rejected++; break;
			}
			break;

		default:
			printf("Invalid parking permit\n"); rejected++; break;
	}

	printf("\n--- Summary ---\n");
	printf("Accepted: %d, Rejected: %d\n", accepted, rejected);
	printf("Cars: %d, Bikes: %d, Vans: %d\n", cars, bikes, vans);
	printf("Zone A remaining: %d, Zone B remaining: %d, Zone C remaining: %d\n", zoneA, zoneB, zoneC);

	int occA = 20 - zoneA;
	int occB = 40 - zoneB;
	int occC = 15 - zoneC;

	if(occA >= occB && occA >= occC)
		printf("Zone with highest occupancy: Zone A\n");
	else if(occB >= occA && occB >= occC)
		printf("Zone with highest occupancy: Zone B\n");
	else
		printf("Zone with highest occupancy: Zone C\n");

	if(zoneA==0 && zoneB==0 && zoneC==0)
		printf("Campus parking facility is FULL.\n");
	else
		printf("Campus parking facility is NOT full.\n");

	return 0;
}



//#include<stdio.h>
//int main ()
//{
//	int zoneA=20,zoneB=40,zoneC=15;
//	int accepted=0,rejected=0,cars=0,bikes=0,vans=0;
//	int N;
//	char vehicle_type,user_category,parking_permit,emergency;
//
//	printf("Enter number of vehicles expected: ");
//	scanf("%d",&N);
//
//	for(int v=1; v<=N; v++)
//	{
//		int allowed=0, parked=0;
//
//		printf("\n--- Vehicle %d ---\n", v);
//
//		// validate vehicle_type - keep asking until valid
//		for( ; ; )
//		{
//			printf("Enter vehicle type (C for car , B for bike and V for van):");
//			scanf(" %c",&vehicle_type);
//			if(vehicle_type=='C' || vehicle_type=='B' || vehicle_type=='V')
//			{
//				break;
//			}
//			printf("Invalid vehicle type, enter again\n");
//		}
//
//		// validate user_category - keep asking until valid
//		for( ; ; )
//		{
//			printf("Enter user category (F for faculty , S for student and G for visitor/guest):");
//			scanf(" %c",&user_category);
//			if(user_category=='F' || user_category=='S' || user_category=='G')
//			{
//				break;
//			}
//			printf("Invalid user category, enter again\n");
//		}
//
//		// validate parking_permit - keep asking until valid
//		for( ; ; )
//		{
//			printf("Is vehicle have the valid parking permit(Y for yes and N for no): ");
//			scanf(" %c",&parking_permit);
//			if(parking_permit=='Y' || parking_permit=='N')
//			{
//				break;
//			}
//			printf("Invalid permit input, enter again\n");
//		}
//
//		switch(parking_permit)
//		{
//			case 'Y':
//			{
//				allowed=1;
//				break;
//			}
//			case 'N':
//			{
//				printf("Is there an emergency vehicle (Y/N):");
//				scanf(" %c",&emergency);
//				switch(emergency)
//				{
//					case 'Y':
//					{
//						allowed=1;
//						break;
//					}
//					case 'N':
//					{
//						printf("no permit because no emergency!\n");
//						rejected=rejected+1;
//						break;
//					}
//					default:
//					{
//						printf("Invalid emergency input\n");
//						rejected=rejected+1;
//						break;
//					}
//				}
//				break;
//			}
//		}
//
//		if(allowed==1)
//		{
//			switch(user_category)
//			{
//				case 'F':
//				{
//					switch(vehicle_type)
//					{
//						case 'C':
//						{
//							if(zoneA>=1)
//							{
//								printf("Accept the car \n");
//								zoneA=zoneA-1;
//								cars=cars+1;
//								parked=1;
//							}
//							else
//							{
//								printf("zone is full\n");
//							}
//							break;
//						}
//						case 'B':
//						{
//							if(zoneA>=1)
//							{
//								printf("Accept the bike \n");
//								zoneA=zoneA-1;
//								bikes=bikes+1;
//								parked=1;
//							}
//							else
//							{
//								printf("zone is full\n");
//							}
//							break;
//						}
//						case 'V':
//						{
//							if(zoneA>=2)
//							{
//								printf("Accept the van \n");
//								zoneA=zoneA-2;
//								vans=vans+1;
//								parked=1;
//							}
//							else
//							{
//								printf("zone is full\n");
//							}
//							break;
//						}
//					}
//					break;
//				}
//				case 'S':
//				{
//					switch(vehicle_type)
//					{
//						case 'C':
//						{
//							if(zoneB>=1)
//							{
//								printf("Accept the car \n");
//								zoneB=zoneB-1;
//								cars=cars+1;
//								parked=1;
//							}
//							else
//							{
//								printf("zone is full\n");
//							}
//							break;
//						}
//						case 'B':
//						{
//							if(zoneB>=1)
//							{
//								printf("Accept the bike \n");
//								zoneB=zoneB-1;
//								bikes=bikes+1;
//								parked=1;
//							}
//							else
//							{
//								printf("zone is full\n");
//							}
//							break;
//						}
//						case 'V':
//						{
//							if(zoneC>=2)
//							{
//								printf("Accept the van, redirected to Zone C \n");
//								zoneC=zoneC-2;
//								vans=vans+1;
//								parked=1;
//							}
//							else
//							{
//								printf("no space in zone C for student van\n");
//							}
//							break;
//						}
//					}
//					break;
//				}
//				case 'G':
//				{
//					switch(vehicle_type)
//					{
//						case 'C':
//						{
//							if(zoneC>=1)
//							{
//								printf("Accept the car \n");
//								zoneC=zoneC-1;
//								cars=cars+1;
//								parked=1;
//							}
//							else
//							{
//								printf("zone is full\n");
//							}
//							break;
//						}
//						case 'B':
//						{
//							if(zoneC>=1)
//							{
//								printf("Accept the bike \n");
//								zoneC=zoneC-1;
//								bikes=bikes+1;
//								parked=1;
//							}
//							else
//							{
//								printf("zone is full\n");
//							}
//							break;
//						}
//						case 'V':
//						{
//							if(zoneC>=2)
//							{
//								printf("Accept the van \n");
//								zoneC=zoneC-2;
//								vans=vans+1;
//								parked=1;
//							}
//							else
//							{
//								printf("zone is full\n");
//							}
//							break;
//						}
//					}
//					break;
//				}
//			}
//
//			if(parked==1)
//			{
//				accepted=accepted+1;
//			}
//			else
//			{
//				rejected=rejected+1;
//			}
//		}
//	}
//
//	printf("\n\tSummary\t\n");
//	printf("Total vehicles processed: %d\n", N);
//	printf("Accepted: %d, Rejected: %d\n", accepted, rejected);
//	printf("Cars: %d, Bikes: %d, Vans: %d\n", cars, bikes, vans);
//	printf("Zone A remaining: %d, Zone B remaining: %d, Zone C remaining: %d\n", zoneA, zoneB, zoneC);
//
//	int occA = 20 - zoneA;
//	int occB = 40 - zoneB;
//	int occC = 15 - zoneC;
//
//	if(occA >= occB && occA >= occC)
//	{
//		printf("Zone with highest occupancy: Zone A\n");
//	}
//	else if(occB >= occA && occB >= occC)
//	{
//		printf("Zone with highest occupancy: Zone B\n");
//	}
//	else
//	{
//		printf("Zone with highest occupancy: Zone C\n");
//	}
//
//	if(zoneA==0 && zoneB==0 && zoneC==0)
//	{
//		printf("Campus parking facility is FULL.\n");
//	}
//	else
//	{
//		printf("Campus parking facility is NOT full.\n");
//	}
//
//	return 0;
//}