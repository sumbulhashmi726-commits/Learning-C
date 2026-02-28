#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    if(a>0 && a>b && a>c ) {
        printf("%d is greatest among positive numbers",a);
    } else if(b>0 && b>a && b>c) {
        printf("%d is greatest among positive numbers",b);
    } else if (c>0 && c>a && c>b) {
        printf("%d is greatest among positive numbers",c);
    } else {
        printf("No positive number among the inputs");
    }
    return 0;
}




    
    