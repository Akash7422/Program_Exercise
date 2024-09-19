#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include "math.h"

int main()
{
    int hour, minute;
    float angle;
    float AnglOfMinHand, AnglOfHorHand;
    printf("Enter the time in 12-hour format (HH:MM): ");
    scanf("%d:%d", &hour, &minute);
    printf("%d\n %d", hour, minute);

    AnglOfMinHand = (minute / 5) * 30;
    printf("\n%f", AnglOfMinHand);
    AnglOfHorHand = (hour * 30) + (minute * 0.5);
    printf("\n%f", AnglOfHorHand);
    angle = fabs(AnglOfHorHand - AnglOfMinHand);
    printf("\n%.2f", angle);
}