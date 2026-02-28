#include<stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 3 == 0) {
        if (number % 5 == 0) {
            printf("the number is divisible by 5 and 3" );
        } else {
            printf("the number is not divisible by 3 and 5" );
        }
    } else {
        printf("the number is not divisible by 3 and 5" );
    }
            

    
    return 0;
}