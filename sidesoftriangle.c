#include<stdio.h>
int main() {
    int a;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    int c;
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    if((a+b)>c && (b+c)>a && (c+a)>b) {
        printf("valid triangle");
    } 
    else {
        printf("invalid triangle");
    } 
    return 0;
    
    }
