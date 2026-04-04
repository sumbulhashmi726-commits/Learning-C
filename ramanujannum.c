#include <stdio.h>

int main() {
    int i, j, k, l;
    int limit = 20;

    for (i = 1; i <= limit; i++) {
        for (j = 1; j <= limit; j++) {
            for (k = 1; k <= limit; k++) {
                for (l = 1; l <= limit; l++) {

                    if (i*i*i + j*j*j == k*k*k + l*l*l &&
                        i != k && i != l) {

                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                        i*i*i + j*j*j, i, j, k, l);
                    }
                }
            }
        }
    }

    return 0;
}
