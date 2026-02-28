#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    int d;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("Enter 4th number: ");
    scanf("%d", &d);
    if(a>b && a>c ) {
        printf("%d is greatest",a);
    } if(b>a && b>c) {
        printf("%d is greatest",b);
    } if (c>a && c>b) {
        printf("%d is greatest",c);
    } if(d>a && d>b && d>c) {
        printf("%d is greatest",d);
    }

    return 0;
    
    }
