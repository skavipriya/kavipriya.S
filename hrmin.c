#include <stdio.h>

int main(void) {
	int hours,minutes,total_minutes;
	printf("enter the time in hours and minutes");
	printf("hours:");
	scanf("%d",&hours);
	printf("minutes:");
	scanf("%d",&minutes);
	total_minutes=(hours+60)+minutes;
	printf("%dtotal time in minutes",total_minutes);
	return 0;
}
