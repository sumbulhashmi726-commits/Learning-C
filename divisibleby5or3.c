#include<stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number % 5 == 0 || number % 3 == 0) {
        printf("The number %d is divisible by 5 or 3.\n", number);
    } else {
        printf("The number %d is not divisible by 5 or 3.\n", number);
    }
    return 0;
}

    
