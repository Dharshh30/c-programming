#include<stdio.h>
int main()
{
	float principle,year,sinterest;
	int time,ch;
	printf("enter principle amount,year%% and time\n");
	scanf("%f %f %d", &principle,&year, &time);
	sinterest = (principle * year * time)/100;
	printf("principle amount = %5.2f\n",principle);
	printf("year %% = %5.2f\n",year);
	printf("time = %d years\n",time);
	printf("simple interest = %5.2f\n",sinterest);
	printf("is customer a citizen?:");
	printf("if yes press yes or no:");
	scanf("%d",&ch);	
}

