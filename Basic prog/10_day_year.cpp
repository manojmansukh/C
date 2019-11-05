#include<stdio.h>

int main()
{
	int day,week,year;
	printf("enter the days:");
	scanf("%d",&day);
	
	year=day/365;
	week=(day%365)/7;
	day=day-((year*365)+(week*7));
	
	 printf("YEARS: %d\n", year);
    printf("WEEKS: %d\n", week);
    printf("DAYS: %d", day);

}
