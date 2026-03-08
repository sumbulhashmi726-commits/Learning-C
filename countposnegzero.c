#include <stdio.h>

int main() {
    int n;
    int p = 0, ng = 0, z = 0;
    char c;

    do {
        printf("Enter number: ");
        scanf("%d", &n);

        if (n > 0)
            p++;
        else if (n < 0)
            ng++;
        else
            z++;

        printf("More? (y/n): ");
        scanf(" %c", &c);

    } while (c == 'y' || c == 'Y');

    printf("Positive = %d\n", p);
    printf("Negative = %d\n", ng);
    printf("Zero = %d", z);

    return 0;
}
