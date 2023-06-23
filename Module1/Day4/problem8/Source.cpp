#include <stdio.h>

#include <stdlib.h>

unsigned long compTotSec(int hours, int minutes, int seconds) {

    unsigned long totSecs = (hours * 3600) + (minutes * 60) + seconds;

    return totSecs;

}

int main() {

    int hours, minutes, seconds;

    printf("Enter the hours: ");

    scanf("%d", &hours);

    printf("Enter the minutes: ");

    scanf("%d", &minutes);
    printf("Enter the seconds: ");

    scanf("%d", &seconds);

    unsigned long totSecs = compTotSec(hours, minutes, seconds);

    printf("Total Seconds: %lu\n", totSecs);

    return 0;

}
