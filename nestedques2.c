#include<stdio.h>
int main() {
    int ram;
    int shyam;
    int ajay;
    printf(" enter age of ram: ");
    scanf("%d", &ram);
    printf(" enter age of shyam: ");
    scanf("%d", &shyam);
    printf(" enter age of ajay: ");
    scanf("%d", &ajay);
    if(ram < shyam) {
        if(ram < ajay) {
            printf(" ram is youngest ");
        } else {
            printf(" ajay is youngest ");
        }
    } else {
        if(shyam < ajay) {
            printf(" shyam is youngest ");
        } else {
            printf(" ajay is youngest ");
        }
    }
    return 0;


    

}