#include<stdio.h>
int main ()
{
	//for one student 
	float math , phy , pf , fe , pst,sum,Avg;
	printf("Enter maths marks (out of 100):");
	scanf("%f",&math);
	printf("Enter physics marks (out of 100):");
	scanf("%f",&phy);
	printf("Enter programming fundamental marks (out of 100):");
	scanf("%f",&pf);
	printf("Enter functional english marks (out of 100):");
	scanf("%f",&fe);	
	printf("Enter pst marks (out of 100):");
	scanf("%f",&pst);
	sum=math+phy+pf+fe+pst;
	printf("Sum = %.2f\n",sum);
	Avg=sum/5;
	printf("Average = %.3f\n",Avg);
	if (math>=33 && phy>=33 && pf>=33 && fe>=33 && pst>=33)
	{
		if(Avg>=80 && Avg<=100)
		{
			printf("Student got a distinction \n");
		}
		else if(Avg>=60 && Avg<=80)
		{
			printf("Student is pass \n");
		}
		else
		{
			printf("Student is fail \n");
		}
	}
	else 
	{
		printf("Fail_Subject Deficiency\n");
	}
	return 0;
}
//
//#include<stdio.h>
//int main ()
//{
//    int N;
//    printf("Enter number of students : ");
//    scanf("%d", &N);
//
//    for(int s = 1; s <= N; s++)
//    {
//        float math , phy , pf , fe , pst, sum, Avg;
//
//        printf("\n--- Student %d ---\n", s);
//
//        printf("Enter maths marks (out of 100):");
//        scanf("%f",&math);
//        printf("Enter physics marks (out of 100):");
//        scanf("%f",&phy);
//        printf("Enter programming fundamental marks (out of 100):");
//        scanf("%f",&pf);
//        printf("Enter functional english marks (out of 100):");
//        scanf("%f",&fe);	
//        printf("Enter pst marks (out of 100):");
//        scanf("%f",&pst);
//
//        sum=math+phy+pf+fe+pst;
//        printf("Sum = %.2f\n",sum);
//        Avg=sum/5;
//        printf("Average = %.3f\n",Avg);
//
//        if (math>=33 && phy>=33 && pf>=33 && fe>=33 && pst>=33)
//        {
//            if(Avg>=80 && Avg<=100)
//            {
//                printf("Student got a distinction \n");
//            }
//            else if(Avg>=60 && Avg<80)
//            {
//                printf("Student is pass \n");
//            }
//            else
//            {
//                printf("Student is fail \n");
//            }
//        }
//        else 
//        {
//            printf("Fail_Subject Deficiency\n");
//        }
//    }
//
//    return 0;
//}