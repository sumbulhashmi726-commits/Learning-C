#include<stdio.h>
int main() {
    int number;
    printf("Enter a three-digit integer: ");
    scanf("%d", &number);

    if (number > 99 && number < 1000) {
        printf("The number %d is a three-digit integer.\n", number);
        
    } else {
        printf("The number is not a three-digit integer.\n");
    }

    return 0;
}
