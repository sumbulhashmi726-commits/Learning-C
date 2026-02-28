#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 1st age: ");
    scanf("%d", &a);

    printf("Enter 2nd age: ");
    scanf("%d", &b);

    printf("Enter 3rd age: ");
    scanf("%d", &c);

    if (a < b && a < c)
        printf("%d is youngest\n", a);
    else if (b < a && b < c)
        printf("%d is youngest\n", b);
    else
        printf("%d is youngest\n", c);

    return 0;
}

    
    

