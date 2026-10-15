//#include<stdio.h>
//int main ()
//{
//	int elevator_currentfloor=0, floor_request1,floor_request2  ;
//	printf("Enter on which floor you want to proceed : \n");
//	scanf("%d",&floor_request1);
//	
//	if(floor_request1>elevator_currentfloor)
//	{
//		printf("Moving up \n");
//		printf("you are now on floor no : %d\n",floor_request1);
//	}
//	else if(floor_request1<elevator_currentfloor)
//	{
//		printf("Moving down \n");
//		printf("you are now on %d floor\n",floor_request1);
//	}
//	else 
//	{
//		printf("Doors opening \n");
//		printf("you are now on %d floor\n",floor_request1);
//	}
//	elevator_currentfloor=floor_request1;
//	printf("Enter on which floor you want to proceed : \n");
//	scanf("%d",&floor_request2);
//	if(floor_request2>elevator_currentfloor)
//	{
//		printf("Moving up \n");
//		printf("you are now on floor no : %d\n",floor_request2);
//	}
//	else if (floor_request2<elevator_currentfloor)
//	{
//		printf("Moving down \n");
//		printf("you are now on %d floor\n",floor_request2);
//	}
//	else 
//	{
//		printf("Doors opening \n");
//		printf("you are now on %d floor",floor_request2);
//	}
//	return 0;
//
//}
#include<stdio.h>
int main ()
{
    int elevator_currentfloor = 0, floor_request, N;

    printf("Enter number of floor requests : \n");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
        printf("Enter on which floor you want to proceed : \n");
        scanf("%d", &floor_request);

        if(floor_request > elevator_currentfloor)
        {
            printf("Moving up \n");
            printf("you are now on floor no : %d\n", floor_request);
        }
        else if(floor_request < elevator_currentfloor)
        {
            printf("Moving down \n");
            printf("you are now on %d floor\n", floor_request);
        }
        else
        {
            printf("Doors opening \n");
            printf("you are now on %d floor\n", floor_request);
        }

        elevator_currentfloor = floor_request;
    }

    return 0;
}