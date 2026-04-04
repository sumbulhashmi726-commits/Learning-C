#include <stdio.h>

int main() {
    float pop = 100000;
    int year;

    for (year = 1; year <= 10; year++) {
        pop = pop + (pop * 10 / 100);
        printf("Year %d Population = %.0f\n", year, pop);
    }

    return 0;
}
