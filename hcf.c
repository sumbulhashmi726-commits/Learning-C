

        
#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find smaller number
    int min = (a < b) ? a : b;

    for(int i = 1; i <= min; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf(" %d\n",  hcf);

    return 0;
}










