#include <stdio.h>

int main() {
    int year, i, days = 0;

    printf("Enter year: ");
    scanf("%d", &year);

    for(i = 1; i < year; i++) {
        if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            days += 366;
        else
            days += 365;
    }

    days = days % 7;

    if(days == 0) printf("Monday");
    else if(days == 1) printf("Tuesday");
    else if(days == 2) printf("Wednesday");
    else if(days == 3) printf("Thursday");
    else if(days == 4) printf("Friday");
    else if(days == 5) printf("Saturday");
    else printf("Sunday");

    return 0;
}
