#include <stdio.h>

int main(void)
{

int minutes, hour;
int time, fhour;

printf("Enter minutes: ");
scanf("%d", &minutes);

printf("Enter hour: ");
scanf("%d", &hour);

time = minutes / 60; //Formula area
fhour = hour + (minutes/60) ; //Formula Perimeter

printf("Time: %d:%02d\n", time);
printf("Expected hour to end: %.2f\n", fhour, time);

}
