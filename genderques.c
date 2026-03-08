#include<stdio.h>
int main() {
    char gender;
    printf("enter gender (M/F/O): ");
    scanf(" %c", &gender);

    if(gender == 'F' || gender == 'f') {
        printf("discount 50%");

    } else if
(gender == 'M' || gender == 'm') {
        printf(" discount is 10%");
    } else if(gender == 'O' || gender == 'o') {
        printf(" discount is 25%");
    } else {
        printf("invalid input");
    }
    return 0;

}