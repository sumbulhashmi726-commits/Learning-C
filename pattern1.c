#include <stdio.h>

int main() {
    int i,j,num=2;

    for(i=1;i<=2;i++) {
        for(j=1;j<=i+1;j++) {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
